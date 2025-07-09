#include<iostream>
#include"calc.h"

using namespace std;

int main() {
	calc c;


	while (true) {
	float num1;
	float num2;
	
		int n;
		cout << "Select," << endl;
		cout << "1.Add" << endl;
		cout << "2.Substraction" << endl;
		cout << "3.Multiplicaton" << endl;
		cout << "4.Division" << endl;
		cout << "5.Exit" << endl;
		cin >> n;
		switch (n) {
		case 1:
			cout << "Enter The First Number: ";
			cin >> num1;

			cout << "Enter The Second Number:";
			cin >> num2;

			cout<<"Result :"<<c.add(num1, num2) << endl;
			break;

		case 2:
			cout << "Enter The First Number: ";
			cin >> num1;
			cout << "Enter The Second Number:";
			cin >> num2;
			cout << "Result :" << c.sub(num1, num2) << endl;
			break;

		case 3:
			cout << "Enter The First Number: ";
			cin >> num1;
			cout << "Enter The Second Number:";
			cin >> num2;
			cout << "Result :" << c.mul(num1, num2) << endl;
			break;
		case 4:
			cout << "Enter The First Number: ";
			cin >> num1;

			cout << "Enter The Second Number:";
			cin >> num2;

			if (num2 == 0) {
				cout << "Division by zero is Not Allowed" << endl;
			}

			cout << "Result :" << c.div(num1, num2) << endl;
			break;

		case 5:
			cout << "Exiting...." << endl;

			return 0 ;
			
		}
		
	}



}