/*
* UCF COP3330 Fall 2021 Assignment 5 Solution
* Copyright 2021 Taha Al balushi
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
  string operation;
  double num1, num2;
  cout << "Please enter expression in format <operation> <number1> <number2>:" << endl;
  cin >> operation;
  cin >> num1;
  cin >> num2;
  if (operation == "+") {
    cout << "The result of '" << operation << " " << num1 << " " <<  num2 << "' is: " << num1 + num2 << endl;
  } else if (operation == "-") {
    cout << "The result of '" << operation << " " << num1 << " " <<  num2 << "' is: " << num1 - num2 << endl;
  }
  else if (operation == "*") {
    cout << "The result of '" << operation << " " << num1 << " " <<  num2 << "' is: " << num1 * num2 << endl;
  }
  else if (operation == "/") {
	  if (num2 == 0)
		  cout << "number2 cannot zero" << endl;
	  else
		  cout << "The result of '" << operation << " " << num1 << " " <<  num2 << "' is: " << num1 / num2 << endl;
  }
  return 0;
}