#include <iostream>
#include<string>
using namespace std;
class Human{
public:
	
	//�������
	void AgE(int num) {
		age = num;
	}
	//�������
	void surName(string f) {
		Surname = f;
	}
	//���
	void Name(string n) {
		name = n;
	}
	//��������
	void PatroNAmic(string P) {
		Patronamic = P;
	}
	//���
	void Fullname() {
		string str;
		
	}
private:
	int age;
	string Surname;
	string name;
	string Patronamic;

};
int main() {
	system("chcp 1251>nul");
	Human first;
	cout << "������� �������: \n";
	int num;
	cin >> num;
	cout << "������� ���: ";
	string a,f,p;
	cin.ignore();
	getline(cin, a);
	first.Name(a);
	cout << "������� �������: ";
	getline(cin, f);
	first.surName(f);
	cout << "������� �������: ";
	getline(cin, p);
	first.PatroNAmic(p);
	system("cls");
	first.Fullname();

	 	






	system("pause>null");
	return 0;

}