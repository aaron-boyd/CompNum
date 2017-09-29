#include "Comp.h"

int main() {
	int num1, num2;
	string func;
	Calc Numbers;
	cout << "Please enter number 1: ";
	cin >> num1;
	cout << "Please enter number 2: ";
	cin >> num2;
	cout << "Please enter function: ";
	cin >> func;
	////////////Call Functions//////////////
		if (func == "+") {
			Numbers.CalculateADD(num1, num2);
		}
		else if (func == "-") {
			Numbers.CalculateSUB(num1, num2);
		}
		else if (func == "*") {
			Numbers.CalculateMULT(num1, num2);
		}
		else if (func == "/") {
			Numbers.CalculateDIV(num1, num2);
		}
		else {
			cout << "ERROR: Function could not be completed, please enter a proper function (+, -, /, *)" << endl;
			main();
		}
		return 0;
}