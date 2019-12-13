#include <iostream>
#include <cstring>
#include "Node.h"
#include "Student.h"

using namespace std;

//Initiate a node with the student that it will hold and point it to nothing
Node::Node(Student* newStudent){
  student = newStudent;
  next = NULL;
}

//Deallocate the student pointer and node pointer
Node::~Node(){
  delete student;
  delete next;
}

//Return node that this node is pointing to
Node* Node::getNext(){
  return next;
}

//Return student that this node is holding
Student* Node::getStudent(){
  return student;
}

//Set next node that this node will point to
void Node::setNext(Node* newNext){
  next = newNext;
} 
