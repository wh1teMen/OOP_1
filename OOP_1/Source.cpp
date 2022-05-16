#include <iostream>
#include<string>
using namespace std;
class Human{
public:
	
	//возраст
	void AgE(int num) {
		age = num;
	}
	//Фамилия
	void surName(string f) {
		Surname = f;
	}
	//имя
	void Name(string n) {
		name = n;
	}
	//Отчество
	void PatroNAmic(string P) {
		Patronamic = P;
	}
	//ФИО
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
	cout << "Введите возраст: \n";
	int num;
	cin >> num;
	cout << "Введите имя: ";
	string a,f,p;
	cin.ignore();
	getline(cin, a);
	first.Name(a);
	cout << "Введите Фамилию: ";
	getline(cin, f);
	first.surName(f);
	cout << "Введите Очество: ";
	getline(cin, p);
	first.PatroNAmic(p);
	system("cls");
	first.Fullname();

	 	






	system("pause>null");
	return 0;

}