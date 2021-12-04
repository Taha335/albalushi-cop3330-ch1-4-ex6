/*
* UCF COP3330 Fall 2021 Assignment 5 Solution
* Copyright 2021 Taha Al balushi
*/

#include <iostream>

using namespace std;

int main() {
  cout << "Please enter an integer number: " << endl;
  int num;
  cin >> num;
  if (num % 2 == 0) {
    cout << "The value " << num << " is an even number." << endl;
  } else {
    cout << "The value " << num << " is an odd number." << endl;
  }
  return 0;
}