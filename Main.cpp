#include <iostream>
#include <cstring>
#include "Student.h"
#include "Node.h"

using namespace std;

//The add function takes in a new student and the beginning node
void add(Student*, Node**);
//The print function takes in a next node and the head node
void print(Node**, Node**);

//Main function
int main(){
  //We initiate the head pointer 
  Node* head = NULL;
  //And make a pointer to it so we can modify the head pointer in different functions
  Node** headptr = &head;

  //Adding 5 students by passing them and the headptr into the add function, then print out our current list after each one is added
  add(new Student((char*)"bob0", (char*)"joe0", (char*)"555999", (float*)new float(4.2)), headptr);
  print(headptr,headptr);
  add(new Student((char*)"bob1", (char*)"joe1", (char*)"555999", (float*)new float(4.2)), headptr);
  print(headptr,headptr);
  add(new Student((char*)"bob2", (char*)"joe2", (char*)"555999", (float*)new float(4.2)), headptr);
  print(headptr,headptr);
  add(new Student((char*)"bob3", (char*)"joe3", (char*)"555999", (float*)new float(4.2)), headptr);
  print(headptr,headptr);
  add(new Student((char*)"bob4", (char*)"joe4", (char*)"555999", (float*)new float(4.2)), headptr);
  print(headptr,headptr);
}

//The add function basically takes in a student, checks to see if it is the beginning node, if it is the beginning node initiate it with just a student, otherwise points a new node with the passed in student to the end node
void add(Student* newStudent, Node** headptr){
  //Set the current node to the beginning node
  Node** currentptr = headptr;
  //If the list is empty
  if((*headptr) == NULL){
    //Add to the list, leaving the next node blank
    (*headptr) = new Node(newStudent);
  }else{
    //Get to the end node
    while((*currentptr)->getNext() != NULL){
      Node* tempNext = (*currentptr)->getNext();
      currentptr = &tempNext;
    }
    //Then point it to the next node with new student
    (*currentptr)->setNext(new Node(newStudent));
  }
}

//The print function basically checks to see if the current node is the beginning node, if it is, print out list:, otherwise recursively go through the list and print every node
void print(Node** nextptr, Node** headptr){
  //If we passed it in from the beginning print function
  if((*nextptr) == (*headptr)){
    //Print list
    cout << "List: " << endl;
  }
  //Otherwise, make sure that we don't go out of bounds of the list
  if((*nextptr) != NULL){
    //Print out the student information in the current node
    Student* temp = (*nextptr)->getStudent();
    cout << temp->getFNm() << ", " << temp->getLNm() << ", " << temp->getId() << ", "  << *(temp->getGpa()) << endl;
    //Then recurse with the next node
    Node* tempNext = (*nextptr)->getNext();
    print(&tempNext, headptr);
  }
}
