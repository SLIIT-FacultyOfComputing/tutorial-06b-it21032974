#include "Student.h"
#include <iostream>
#include<cstring>
using namespace std;

// Assign studentId and name
void Student::assignDetails(int stId,char nam[20]) {
  studentId=stId;
  strcpy(name,nam);
}

// Display StudentId and Name
void Student::display() {
 cout<<studentId<<endl;
 cout<<name<<endl;
}
