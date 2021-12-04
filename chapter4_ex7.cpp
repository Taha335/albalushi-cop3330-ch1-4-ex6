/*
* UCF COP3330 Fall 2021 Assignment 5 Solution
* Copyright 2021 Taha Al balushi
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
  string operation;
  string numstr1, numstr2;
  cout << "Please enter expression in format <number1> <number2> <operation>:" << endl;
  cin >> numstr1 >> numstr2 >> operation;
  int num1, num2;
  if(numstr1 == "one") {
    num1 = 1;
  } else if(numstr1 == "two") {
    num1 = 2;
  } else if(numstr1 == "three") {
    num1 = 3;
  } else if(numstr1 == "four") {
    num1 = 4;
  } else if(numstr1 == "five") {
    num1 = 5;
  } else if(numstr1 == "six") {
    num1 = 6;
  } else if(numstr1 == "seven") {
    num1 = 7;
  } else if(numstr1 == "eight") {
    num1 = 8;
  } else if(numstr1 == "nice") {
    num1 = 9;
  } else if(numstr1 == "zero") {
    num1 = 0;
  } else {
    num1 = stoi(numstr1);
  }

  if(numstr2 == "one") {
    num2 = 1;
  } else if(numstr2 == "two") {
    num2 = 2;
  } else if(numstr2 == "three") {
    num2 = 3;
  } else if(numstr2 == "four") {
    num2 = 4;
  } else if(numstr2 == "five") {
    num2 = 5;
  } else if(numstr2 == "six") {
    num2 = 6;
  } else if(numstr2 == "seven") {
    num2 = 7;
  } else if(numstr2 == "eight") {
    num2 = 8;
  } else if(numstr2 == "nice") {
    num2 = 9;
  } else if(numstr2 == "zero") {
    num2 = 0;
  } else {
    num2 = stoi(numstr2);
  }

  if (num1 < 10 && num2 < 10) {
    if (operation == "+") {
      cout << "The result of '" << num1 << " " << operation << " " <<  num2 << "' is: " << num1 + num2 << endl;
    } else if (operation == "-") {
      cout << "The result of '" << num1 << " " << operation << " " <<  num2 << "' is: " << num1 - num2 << endl;
    }
    else if (operation == "*") {
      cout << "The result of '" << num1 << " " << operation << " " <<  num2 << "' is: " << num1 * num2 << endl;
    }
    else if (operation == "/") {
      if (num2 == 0)
        cout << "number2 cannot zero" << endl;
      else
        cout << "The result of '" << num1 << " " << operation << " " <<  num2 << "' is: " << num1 / num2 << endl;
    }
  } else {
    cout << "number must be smaller than 10" << endl;
  }
  return 0;
}