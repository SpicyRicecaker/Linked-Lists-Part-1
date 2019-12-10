#include <iostream>
#include <cstring>
#include "Student.h"
#include "Node.h"

using namespace std;

void add(Student*, Node*);
void print(Node*);

int main(){
  Node* head = NULL;

  add(new Student((char*)"bob", (char*)"joe", (char*)"666999", (float*)new float), head);
  print(head);
  add(new Student((char*)"bob1", (char*)"joe1", (char*)"666999", (float*)new float), head);
  print(head);
  add(new Student((char*)"bob2", (char*)"joe2", (char*)"666999", (float*)new float), head);
  print(head);
}

void add(Student* newStudent, Node* head){
  Node* current = head;
  if(head == NULL){
    head = new Node(newStudent);
  }else{
    while(current->getNext() != NULL){
      current = current->getNext();
    }
    
  }
}

void print(Node* head){
  Node* next = head;
  if(next == head){
    cout << "List: " << endl;
  }
  if(next != NULL){
    Student* temp = next->getStudent();
    cout << temp->getFNm() << temp->getLNm() << temp->getId() << temp->getGpa() << endl;
    print(next->getNext());
  }
}
