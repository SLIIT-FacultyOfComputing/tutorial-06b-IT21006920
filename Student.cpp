#include "Student.h"
#include <iostream>
#include <cstring>

using namespace std;

// Assign studentId and name
void Student::assignDetails(int id, const char sname[]) 
{
  studentId = id;
  strcpy(studetName, sname);  
}

// Display StudentId and Name
void Student::display() 
{
  cout << "student id: ";
  cout << studentId << endl;

  cout << "Student id: ";
  cout << studentName << endl;
}
