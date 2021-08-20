#include "Student.h"
#include <iostream>
#include <cstring>

using namespace std;

// Assign studentId and name
void Student::assignDetails(int id, const char sname[20]) 
{
  studentId = id;
  strcpy(name, sname);  
}

// Display StudentId and Name
void Student::display() 
{
  cout << "Student id: ";
  cout << studentId << endl;

  cout << "Student name: ";
  cout << name << endl;
}
