/*
* UCF COP3330 Fall 2021 Assignment 5 Solution
* Copyright 2021 Taha Al balushi
*/

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

void printRoots(double a, double b, double c) {
  double delta = b*b - 4*a*c;
  if (delta < 0) {
    cout << "This Quadratic equations don't have real root." << endl;
  } else if(delta == 0){
    double x = (-1)*b / (2*a);
    cout << "This Quadratic equations have one real root x = " << x << endl;
  } else {
    double x1 = ((-1)*b + sqrt(delta)) / (2*a);
    double x2 = ((-1)*b - sqrt(delta)) / (2*a);
    cout << "This Quadratic equations have two real root:" << endl;
    cout << "x1 = " << x1 << endl;
    cout << "x2 = " << x2 << endl;
  }
}

int main() {
  double a, b, c;
  cout << "Please enter the value for a, b, c of Quadratic equations: ";
  cin >> a >> b >> c;
  printRoots(a, b, c);
  return 0;
}