//Header Guard
#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <cstring>

using namespace std;

class Student {
 public:
  //A student needs a first name, last name, id, and gpa
  Student(char*, char*, char*, float*);
  //Destructor
  ~Student();
  //Returns this student
  Student* getStudent();
  //Getting functions for student information
  char* getFNm();
  char* getLNm();
  char* getId();
  float* getGpa();
 private:
  char* fNm;
  char* lNm;
  char* id;
  float* gpa;
};
#endif
