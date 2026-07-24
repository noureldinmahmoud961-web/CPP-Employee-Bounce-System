#include <iostream>
#include <string>
using namespace std;
class teacher {
private:
	string name;
	int salary = 0;
	int new_salary = 0;
public:
	teacher() {
		cout << "enter teacher name :" << endl;
		cin >> name;
		cout << "enter teacher sal :" << endl;
		cin >> salary;
	}
	void add() {
		if (name == "nour") {
			new_salary =salary+ 1000;
			cout << "perfect work NOUR!!! you recived a bounce and your new salary is:" << new_salary << endl;
		}
		else {
			cout << "the teacher name is:" << name << endl;
			cout << "and his/her salary is:" << salary << endl;
		}
	}
};
class engineer {
private:
	string name;
	int salary = 0;
	int new_salary = 0;
public:
	engineer() {
		cout << "enter engineer name :" << endl;
		cin >> name;
		cout << "enter engineer sal :" << endl;
		cin >> salary;
	}
	void add() {

		if (name == "boudy") {
			new_salary = salary+1000;
			cout << "perfect work BOUDY!!! you recived a bounce and your new salary is:" << new_salary << endl;
		}
		else {
			cout << "the engineer name is:" << name << endl;
			cout << "and his/her salary is:" << salary << endl;

		}
	}
};

int main() {
	teacher ob1;
	engineer ob2;
	ob1.add();
	cout << "=========================="<<endl;
	ob2.add();
	return 0;
}