#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <cstring>

using namespace std;

class Student {
 public:
  Student(char*, char*, char*, float*);
  ~Student();
  Student* getStudent();
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
