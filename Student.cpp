#include "Student.h"

using namespace std;

Student::Student(char* newFNm, char* newLNm, char* newId, float* newGpa){
  fNm = newFNm;
  lNm = newLNm;
  id = newId;
  gpa = newGpa;
}

Student::~Student(){
  delete fNm;
  delete lNm;
  delete id;
  delete gpa;
}

Student* Student::getStudent(){
  return this;
}

char* Student::getFNm(){
  return fNm;
}

char* Student::getLNm(){
  return lNm;
}

char* Student::getId(){
  return id;
}

float* Student::getGpa(){
  return gpa;
}
