#include<iostream>
#include"calc.h"

using namespace std;


int main() {
	calc c;

	cout << "Running The Test Case" << endl;

	if (c.mul(2, 3) != 5) {
		cerr << "Failed The Test Case" << endl;
		return 1;
	}
	cout << "Ended the test" << endl;

	return 0;
}