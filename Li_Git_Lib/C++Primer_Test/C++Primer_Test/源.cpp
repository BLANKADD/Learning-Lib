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
class investor {
	string name;
	float income;
};
class Neutrinia {
public:int tvarp;
	   void Get_Taxes();
};

void Neutrinia::Get_Taxes()
{
	if (this->tvarp <= 5000) {
		cout << "you are poor,do not give up your monney" << endl;
	}
	else if (this->tvarp > 5000 && this->tvarp <= 15000) {
		cout << "you need Pay" << (tvarp - 5000)*0.1 << " tvarps" << endl;
	}
	else if (this->tvarp > 15000 && this->tvarp <= 35000) {
		cout << "you need Pay " << (tvarp - 15000)*0.15 + 10000 * 0.1<<"tvarps" << endl;
	}
	else {
		cout << "you need Pay" << (tvarp - 35000)*0.2 + 10000 * 0.1 + 20000 * 0.15 << "tvarps" << endl;
	}
}

struct Suger
{
	string name;
	float weight;
	int kaluli;

};
struct bop {
	char fullname[20];
	char title[20];
	char bopname[20];
	int preference;
};
struct Patrons {
	string name;
	double money;
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
void Factorial(int x,int y) {
	int num1=0;
	for (y; y >= x; y--) {
		num1 = num1+y;
		cout << num1 << endl;
	}
	cout << "the factorial of " << y << " is " << num1;
}
int Factorial_1(long long x) {
	long num = 1;
	for (x; x >= 1; x--) {
		num = num*x;
	}
	return num;
}
void Fac() {
	array<long double, 100> num;
	num[0] = 1;
	for (int i = 1; i < 100; i++) {
		num[i] = num[i - 1] * i;
		if (i == 99) {
			cout << "the num is " << num[99] << endl;
		}
	}

}
void Function_1() {
	int x;
	
	cout << "please in an num ,but 0 means over !" << endl;
	cin >> x;
	int y = x;
	while(x != 0) {
		cin >> x;
		y = y + x;
	}
	cout << "the circle is over and you game over!" << endl;
	cout << "the final num is " << y;

}
void LeftShiftOne(char *s, int n)
{
	char t = s[0];
	for (int i = 0; i < n; i++)
	{
		s[i - 1] = s[i];
	}
	s[n - 1] = t;
}

void LeftRotateString(char *s, int n, int m)
{
	while (m--)
	{
		LeftShiftOne(s, n);
	}

}
void Orign_Mean() {
	char choice;
	int circle = 1;
	cout << "Please enter one of the following choice:" << endl;
	cout << "c) carnivore           " << "p) pianist" << endl;
	cout << "t) tree                " << "g) game" << endl;
	while (circle == 1) {
		cout << "Please enter :c,p,t or g:" << endl;
		cin >> choice;
		switch (choice) {
		case('c'): cout << "this is a carnivore" << endl; circle = 0; break;
		case('p'):cout << "this is a pianist" << endl; circle = 0; break;
		case('t'):cout << "there is a tree" << endl; circle = 0; break;
		case('g'):cout << "A maple is a game" << endl; circle = 0; break;
		}
		
	}
}
void Function_2() {
	//int size;
	//cout << "please cin the number of people:" << endl;
	//cin >> size;

	bool light = true;
	char name = 'Q';
	int num = 2;
	char choice;
	bop bop_1 = {
		"harry",
		"jenny",
		"danny",
		12
	};
	bop bop_2 = {
		"harry",
		"jenny",
		"danny",
		12
	};
	bop bop_3 = {
		"harry",
		"jenny",
		"danny",

		12
	};
	bop bop_4 = {
		"harry",
		"jenny",
		"danny",
		12
	};
		while (light) {
			cout << "Benevolent Order of Programmers Report" << endl;
			cout << "a . display by name" << "    b . display by title" << endl;
			cout << "c . display by bopname" << "d . display by perference" << endl;
			cout << "q . quit" << endl;
			cout << "enter your choice" << endl;

			cin >> choice;
			switch(choice){
			case 'a': {
					cout << bop_1.fullname << endl; 
					cout << bop_2.fullname << endl; 
					cout << bop_3.fullname << endl; 
					cout << bop_4.fullname << endl; 
			}
			break;
			case 'b': {
					cout << bop_1.title << endl; 
					cout << bop_2.title << endl; 
					cout << bop_3.title << endl; 
					cout << bop_4.title << endl; 
				break;
			}
			case 'c': {
				
					cout << bop_1.bopname << endl; 
					cout << bop_2.bopname << endl; 
					cout << bop_3.bopname << endl;
					cout << bop_4.bopname << endl;
				break;
			}
			case 'd': {
					cout << bop_1.preference << endl;
					cout << bop_2.preference << endl; 
					cout << bop_3.preference << endl;
					cout << bop_4.preference << endl;
				break;
			}
			case 'q': {
				light = false;
			}
			}
		
		}

}
void set_Patrons() {
	int i;
	int num = 0;
	cout << "please enter the number of Patrons" << endl;
	cin >> i;
	Patrons*ptr = new Patrons[i];
	Patrons*ptr_1 = ptr;
	for (int z = 0; z < i; z++) {
		cout << "please enter the " << z+1 << " person's name" << endl;
		cin >> ptr->name;
		cout << "please enter the " << z+1 << " person's money" << endl;
		cin >> ptr->money;
		ptr++;
	}
	cout << "Grand Patrons    " << "name        " << "money       " << endl;
	for (int z = 0; z < i; z++) {
		if (ptr_1[num].money > 10000) {
			cout << "Y                 " << ptr_1[num].name << "      " << ptr_1[num].money << endl;
		}else
			cout << "N                 " << ptr_1[num].name << "      " << ptr_1[num].money << endl;
		ptr_1[num++];
	}
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
	else if (choice == 5)
	{
		cout << "please two number,mini one"<<endl;
		int x, y;
		cin >> x;
		cout << "please cin big number" << endl;
		cin >> y;
		Factorial(x, y);
	}
	else if(choice==6){
		cout << "please cin an you favourite num " << endl;
		long double num;
		cin >> num;
		cout << "the factorical is "<<Factorial_1(num) << endl;
	}
	else if(choice ==7){
		Fac();
	}
	else if (choice == 8) {
		Function_1();
	}
	else if (choice == 9) {
		char arry[] = "asadaf";
		//cout<<sizeof(arry)<<endl;
		LeftRotateString(arry, sizeof(arry)-1 , 3);//sizeof(arry) - 1

		for (int i = 0; i <sizeof(arry)-1; i++)
		{
			cout << "arry[" << i << "] = " << arry[i] << endl;
		}
	}
	if (choice == 10) {
		Orign_Mean();
	}
	if (choice == 11) {
		Function_2();
	}
	if (choice == 12) {
		Neutrinia test;
		cout << "enter your salary:" << endl;
		cin >> test.tvarp;
		test.Get_Taxes();
	}
	if (choice == 13) {
		Neutrinia Person;
		char decide;
		bool circle = true;
		while (circle) {
			cout << "please enter your salary:" << endl;
			cin >> Person.tvarp;
			Person.Get_Taxes();
			cout << "do you want enter other people?Y/N" << endl;
			cin >> decide;
			if (decide == 'N'||'n') {
				circle = false;
			}
		}
	}
	if (choice == 14) {
		set_Patrons();
	}
}