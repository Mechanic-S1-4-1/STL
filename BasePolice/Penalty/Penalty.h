#pragma once
#include"BTree.h"
#include"List.h"
#include<string>
#include<iomanip>
#include<fstream>



class Protokol
{
	string numTS;
	string date;
	string numPPN;
	string tag;
	int sum;
	bool pay = false;

public:
	Protokol() {}
	string getNumTS() { return numTS; }
	string getdate() { return date; }
	string getnumPPN() { return numPPN; }
	string gettag() { return tag; }
	int getsum() { return sum; }
	bool getpay() { return pay; }

	void setNumTS(string setNumTS) { numTS = setNumTS; }
	void setdate(string setdate) { date = setdate; }
	void setnumPPN(string setnumPPN) { numPPN = setnumPPN; }
	void settag(string settag) { tag = settag; }
	void setsum(int setsum) { sum = setsum; }
	void setpay(int setpay) { pay = setpay; }


	friend ostream& operator << (ostream& out, const Protokol& p);
	friend ostream& operator << (ostream& out, const Protokol* p);
	friend ofstream& operator << (ofstream& out, const Protokol* p);
	friend istream& operator >> (istream& in, Protokol& p);
	friend istream& operator >> (istream& in, Protokol* p);

};

ostream& operator<<(ostream& out, const Protokol& p)
{
	out << p.numTS << "  " << p.date << "    " << setw(13) << left << p.numPPN << setw(58) << p.tag << setw(12) << p.sum
		<< ((p.pay) ? "��������" : "�� ��������") << endl;
	return out;
}

ostream& operator<<(ostream& out, const Protokol* p)
{
	
	
	out  << left << " | " << setw(11) << p->numTS << "|"<< setw(13) << p->date << "| " << setw(15) << p->numPPN << "| "<< setw(56) << p->tag << "| " << setw(11) << p->sum
		<< "| "<< setw(16) << ((p->pay) ? "��������" : "�� ��������") << "|"<< endl;
	out << " +------------+-------------+----------------+---------------------------------------------------------+------------+-----------------+\n";

	return out;
}

inline ofstream& operator<<(ofstream& out, const Protokol* p)
{
	static bool t = false;

	if (!t)
	{
		out << p->numTS << endl << p->date << endl << p->numPPN << endl << p->tag << endl << p->sum
			<< endl << ((p->pay) ? "1" : "0");
		t = true;
	}
	
	else
		out << endl << p->numTS << endl << p->date << endl << p->numPPN << endl << p->tag << endl << p->sum
		<< endl << ((p->pay) ? "1" : "0");

	return out;
}


inline istream& operator>>(istream& in, Protokol& p)
{
	cout << "����� ��   : "; getline(in, p.numTS);
	cout << "����       : "; getline(in, p.date);
	cout << "����� �����: "; getline(in, p.numPPN);
	cout << "��������   : "; getline(in, p.tag);
	cout << "�����      : "; in >> p.sum;
	in.ignore();
	return in;
}

inline istream& operator>>(istream& in, Protokol* p)
{
	cout << "����� ��   : "; getline(in, p->numTS);
	cout << "����       : "; getline(in, p->date);
	cout << "����� �����: "; getline(in, p->numPPN);
	cout << "��������   : "; getline(in, p->tag);
	cout << "�����      : "; in >> p->sum;
	in.ignore();
	return in;
}

class BasePenalty
{
	BTree<string, List<Protokol*>> base;

public:
	void menu();
	void addProtokol();
	void print();
	void printNum();
	void printRange();
	void find();
	void setPay();
};

void BasePenalty::menu()
{		
	ifstream innom("penalty.txt");

	if (innom.is_open())
	{
		while (!innom.eof())
		{
			char* buff = new char[80];
			Protokol* prot = new Protokol;
			int s;
			innom.getline(buff, 80);
			prot->setNumTS(buff);
			innom.getline(buff, 80);
			prot->setdate(buff);
			innom.getline(buff, 80);
			prot->setnumPPN(buff);
			innom.getline(buff, 80);
			prot->settag(buff);
			innom.getline(buff, 80);
			s = atoi(buff);
			prot->setsum(s);
			innom.getline(buff, 80);
			s = atoi(buff);
			prot->setpay(s);

			List<Protokol*>* list = base.get(prot->getNumTS());
			if (!list)
			{
				List<Protokol*> newList;
				newList.push_front(prot);
				base.push_r(prot->getNumTS(), newList);
			
			}
			else
			{
				list->push_front(prot);			
			}			
		}

		cout << "��������� �������� �� �����" << endl;
		system("pause");
	}
	
	do
	{
		system("cls");
		cout << "1. �������� ��������" << endl;
		cout << "2. ������ ����" << endl;
		cout << "3. ����� �� ������ ��" << endl;
		cout << "4. ��������� ������" << endl;
		cout << "5. ������ �� ��������� �������" << endl;
		cout << "0. �����" << endl;
		int n;
		cin >> n;
		cin.ignore();
		switch (n)
		{
		case 1:
			addProtokol();
			break;
		case 2:
	
			system("cls");
			
			print();
			break;
		case 3:
			system("cls");
			printNum();
			break;
		case 4:
			system("cls");
			setPay();
			break;
		case 5:
			system("cls");
			printRange();
			break;
		case 0:
		{
			//addProtokolFile();
			base.printF();
			exit(0);
		}
			
		default:
			break;
		}

	} while (true);

}

inline void BasePenalty::addProtokol()
{
	cout << " �������� ��������:" << endl;
	cout << "-------------------" << endl;
	Protokol* prot = new Protokol;
	cin >> prot;
	List<Protokol*>* list = base.get(prot->getNumTS());
	if (!list)
	{
		cout << "������ ����� �� ���������� � ���� � ����� ��������" << endl;
		List<Protokol*> newList;
		newList.push_front(prot);
		base.push_r(prot->getNumTS(), newList);

		ofstream fout;
		fout.open("penalty.txt", ios::app);

		if (fout.is_open())
		{
			fout << endl;
			fout << prot->getNumTS() << "\n";
			fout << prot->getdate() << "\n";
			fout << prot->getnumPPN() << "\n";
			fout << prot->gettag() << "\n";
			fout << prot->getsum() << "\n";
			fout << prot->getpay();
		}

		fout.close();
	}
	else
	{
		list->push_front(prot);
		ofstream fout;
		fout.open("penalty.txt", ios::app);
			
		if (fout.is_open())
			{		
			fout << endl;
			fout << prot->getNumTS() << "\n";
			fout << prot->getdate() << "\n";
			fout << prot->getnumPPN() << "\n";
			fout << prot->gettag() << "\n";
			fout << prot->getsum() << "\n";
			fout << prot->getpay();
			}
			
		fout.close();
	}
	cout << "����� �������� ��������" << endl;
}

inline void BasePenalty::print()
{
	gotoxy(1, 0);
	cout << "+------------+-------------+----------------+---------------------------------------------------------+------------+-----------------+\n";
	gotoxy(1, 1);
	cout << "|  ����� ��  |    ����     |   ����� �����  |                      ��������                           |    �����   |  ������ ������  |\n";
	gotoxy(1, 2);
	cout << "+------------+-------------+----------------+---------------------------------------------------------+------------+-----------------+\n";
	base.print();
	cout << endl;
	system("pause");
}

inline void BasePenalty::printNum()
{
	cout << "����� ��������� �� ������ ��:" << endl;
	cout << "-----------------------------" << endl;
	string num;
	cout << "����� ��: "; getline(cin, num);	
	List<Protokol*>* list = base.get(num);

	if (list)
	{
		gotoxy(1, 5);
		cout << "+------------+-------------+----------------+---------------------------------------------------------+------------+-----------------+\n";
		gotoxy(1, 6);
		cout << "|  ����� ��  |    ����     |   ����� �����  |                      ��������                           |    �����   |  ������ ������  |\n";
		gotoxy(1, 7);
		cout << "+------------+-------------+----------------+---------------------------------------------------------+------------+-----------------+\n";
		list->print();
	}

	else
		cout << "�������� �� ������ �� " << num << " �� �������" << endl;

	system("pause");
}

inline void BasePenalty::printRange()
{
	cout << " ����� ���������� �� ��������� ������� ��:" << endl;
	cout << "-----------------------------------------" << endl;
	string num, num2;
	cout << "��������� ����� ��: "; getline(cin, num);
	cout << "�������� ����� ��: "; getline(cin, num2);
	

	List<Protokol*>* list = base.get(num);
	List<Protokol*>* list2 = base.get(num2);

	if (list)
	cout << "����� " << num << " ������ � ����" << endl;
	
	else
		cout << "����� " << num << " �� ������ � ����" << endl;
	
	if (list2)
		cout << "����� " << num2 << " ������ � ����" << endl;
	else
		cout << "����� " << num2 << " �� ������ � ����" << endl;

	if (num < num2)
		swap(num, num2);	

	if (list && list2)
	{
		cout << " ����� ���������� �� ��������� ������� ��:" << endl;

		gotoxy(1, 8);
		cout << "+------------+-------------+----------------+---------------------------------------------------------+------------+-----------------+\n";
		gotoxy(1, 9);
		cout << "|  ����� ��  |    ����     |   ����� �����  |                      ��������                           |    �����   |  ������ ������  |\n";
		gotoxy(1, 10);
		cout << "+------------+-------------+----------------+---------------------------------------------------------+------------+-----------------+\n";

		base.printD(num, num2);
	}
	

	else
		cout << "������� ��������� �������� ������� ��� ������!" << endl;

	system("pause");
}

inline void BasePenalty::setPay()
{
	cout << "��������� ������. ������� ����� ��:" << endl;
	cout << "-----------------------------------" << endl;
	string num;
	cout << "����� ��: "; getline(cin, num);
	List<Protokol*>* list = base.get(num);

	if (list)
	{
		gotoxy(1, 6);
		cout << "+------------+-------------+----------------+---------------------------------------------------------+------------+-----------------+\n";
		gotoxy(1, 7);
		cout << "|  ����� ��  |    ����     |   ����� �����  |                      ��������                           |    �����   |  ������ ������  |\n";
		gotoxy(1, 8);
		cout << "+------------+-------------+----------------+---------------------------------------------------------+------------+-----------------+\n";
		list->print();

		Protokol* prot = list->peek_front();

		int pay;

		cout << "������� ���������� ����� ��������� ��� �������� ������: ";
		cin >> pay;
		prot = list->operator[](pay - 1);
		cout << "�������� �������? ��(1)/���(0): ";
		cin >> pay;
		prot->setpay(pay);
		cout << "��������� �������...\n";
		system("pause");
		system("cls");

		cout << "������ ��������� � ��: " << num << endl;
		cout << "----------------------" << endl;

		gotoxy(1, 6);
		cout << "+------------+-------------+----------------+---------------------------------------------------------+------------+-----------------+\n";
		gotoxy(1, 7);
		cout << "|  ����� ��  |    ����     |   ����� �����  |                      ��������                           |    �����   |  ������ ������  |\n";
		gotoxy(1, 8);
		cout << "+------------+-------------+----------------+---------------------------------------------------------+------------+-----------------+\n";
			
		list->print();
	}

	else
		cout << "�������� �� �����e �� " << num << " �� �������" << endl;

	system("pause");
}