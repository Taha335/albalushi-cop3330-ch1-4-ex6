// CSCI1300 Fall 2021
// Author: Yas Alremeithi
// Recitation: 123 – Michael Hoefer
// Project 3.

#ifndef NAME_VALUE_H
#define NAME_VALUE_H

#include <iostream>
#include <string>

using namespace std;

class Name_value
{
private:
  string name;
  int score;
public:
    Name_value() {
      name = "";
      score = 0;
    }
    Name_value(string n, int s) {
      name = n;
      score = s;
    }
    // getters
    int getScore() {
      return score;
    }
    string getName() {
      return name;
    }
};

#endif