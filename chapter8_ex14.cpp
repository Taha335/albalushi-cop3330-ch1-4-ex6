/*
* UCF COP3330 Fall 2021 Assignment 5 Solution
* Copyright 2021 Taha Al balushi
*/

#include <iostream>

using namespace std;
/*
Answer:
We can declare a non-reference function argument const. It mean that the argument cannot modify.
We want to do that because we don't want change value of argument inside the function.
The people don't do that offten because we are passing by value mean that we passing a copy of argument and it cannot change the value or modify the original argument.
*/

void f(int const x) {
  // because x is const then we can declare an array with exactly x element.
  int y[x];
  cout << "Enter " << x << " integer number: ";
  for (int i = 0; i < x; i++) {
    cin >> y[i];
  }
  
  // print x number
  cout << "\nYou enter: ";
  for (int i = 0; i < x; i++) {
    cout << y[i] << " ";
  }
  cout << endl;
}

void f2(int x) {
  // x not const then we cannot use it for array of array, instead it we must allow more than size we want, this case we use 10
  int y[10];
  // and we cannot input more than 10 numbers
  cout << "Enter " << x << " integer number: ";
  for (int i = 0; i < x; i++) {
    cin >> y[i];
  }
  
  // print x number
  cout << "\nYou enter: ";
  for (int i = 0; i < x; i++) {
    cout << y[i] << " ";
  }
  cout << endl;
}

int main() {
  // enter how much number you want input
  int x;
  cout << "Enter number of integer value you want input: ";
  cin >> x;
  cout << "Run f:\n";
  f(x);
  cout << "\n\nRun f2:\n";
  f2(x);
  return 0;
}