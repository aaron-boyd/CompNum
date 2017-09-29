#pragma once
#include <iostream>
#include <string>
#include <sstream>

using namespace std;
class Calc {
public:
	void CalculateDEFAULT() {

	}

	void CalculateADD(int num1, int num2) {
		int total; 
		total = num1 + num2;
		cout << "Numbers Added = " << tostring(total) << endl;
		system("pause");
	}
	void CalculateSUB(int num1, int num2) {
		int total;
		total = num1 - num2;
		cout << "Numbers Subtracted = " << tostring(total) << endl;
		system("pause");
	}
	void CalculateMULT(int num1, int num2) {
		int total;
		total = num1  * num2;
		cout << "Numbers Multiplied = " << tostring(total) << endl;
		system("pause");
	}
	void CalculateDIV(int num1, int num2) {
		int total;
		total = (num1 / num2);
		cout << "Numbers Divided = " << tostring(total) << endl;
		system("pause");
	}
	string tostring(int num) {
		char buff[50];
		sprintf_s(buff, "%i", num);
		return(buff);

	}
};