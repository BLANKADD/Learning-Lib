#include <iostream>
#include <string>
#include <array>
using namespace std;
class Name_Message {
public: string first_name;
		string second_name;
	      
};
class Company {
public:
	string name;
	float diameter;
	float weight;
};
struct Suger
{
	string name;
	float weight;
	int kaluli;

};
void Make_Name_message() {
	Name_Message name;
	int a;
	string str_second_name;
	string str_first_name;
	char str1[20];
	char str2[20];
	cout << "please cin your second name:" << endl;
	//cin >> str1;
	cin >> name.second_name;
	//name.second_name = str1;
	cout << "please cin your first name :" << endl;
	//cin >> str2;
	cin >> name.first_name;
	//name.first_name = str2;
	cout << "your name is :" << name.first_name << "," << name.second_name << endl;
}
void Make_Suger_Message() {
	Suger suger;
	cout << "cin the Suger name:" << endl;
	cin >> suger.name;
	cout << "cin suger weight:" << endl;
	cin >> suger.weight;
	cout << "cin suger kaluli:"<<endl;
	cin >> suger.kaluli;
	cout << "name:" << suger.name << endl;
	cout << "weight:" << suger.weight << endl;
	cout << "kaluli:" << suger.kaluli << endl;
}
void Make_Company_Message() {
	Company company;
	cout << "cin name:" << endl;
	cin >> company.name;
	cout << "cin diameter:" << endl;
	cin >> company.diameter;
	cout << "cin weight /kg:" << endl;
	cin >> company.weight;
	cout << "you have a bizza Company name:" << company.name << endl;
	cout << "your bizza weight:" << company.weight<<endl;
	cout << "your bizza diameter:" << company.diameter;
}
void Make_Avg_Run() {
	array <float, 3> run;
	cout << "please cin the first time" << endl;
	cin >> run[0];
	cout << "cin second time" << endl;
	cin >> run[1];
	cout << "last time" << endl;
	cin >> run[2];
	float Avg_Num = ((run[0] + run[1] + run[2]) / 3);
	cout << "you have run " << sizeof(run) / sizeof(run[0]) << endl << "and you final time is " << Avg_Num<<"s";
}
void main() {
	int choice;
	cout << "choose the function" << endl;
	cin >> choice;
	if (choice == 1) {
		Make_Name_message();
	}
	else if (choice == 2) {
		Make_Suger_Message();
	}
	else if (choice == 3) {
		Make_Company_Message();
	}
	else if (choice == 4) {
		Make_Avg_Run();
	}
	



}