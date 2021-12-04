/*
* UCF COP3330 Fall 2021 Assignment 5 Solution
* Copyright 2021 Taha Al balushi
*/

#include <iostream>
#include <string>
#include "Name_value.h"

using namespace std;

bool checkStudentExisted(string name, Name_value students[], int numStudents) {
  for (int i = 0; i < numStudents; i++) {
    if (students[i].getName() == name){
      return true;
    }
  }
  return false;
}

int main() {
  Name_value students[100];
  int numStudents = 0;
  string name;
  int score;
  do {
    cout << "Please enter pair of the name and score: ";
    cin >> name >> score;
    if (name != "NoName" && score != 0 && numStudents < 100) {
      if (checkStudentExisted(name, students, numStudents)) {
        cout << "This name has been added." << endl;
      }
      else {
        students[numStudents] = Name_value(name, score);
        numStudents++;
      }
    }
  } while(name != "NoName" && score != 0);

  // print info
  for (int i = 0; i < numStudents; i++) {
    cout << "(" << students[i].getName() << ", " << students[i].getScore() << ")" << endl;
  }
  return 0;
}