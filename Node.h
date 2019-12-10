#ifndef NODE_H
#define NODE_H

#include <iostream>
#include <cstring>
#include "Student.h"

using namespace std;

class Node {
 public:
  Node(Student*);
  ~Node();
  Node* getNext();
  void setNext(Node*);
  Student* getStudent();
 private:
  Student* student;
  Node* next;
};
#endif
