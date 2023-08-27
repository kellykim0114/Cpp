
#include <iostream>
#include <vector>
using namespace std;

struct Node { // struct: several variables in one place
  int data;
  Node *next; // Pointer
};

Node* createNode(int data) {
  Node* newNode = new Node; //allocation
  newNode->data = data;
  newNode->next = nullptr; //null이 나오면 list가 끝이다
  return newNode;
}

void insertFront(Node*& head, int data) { //list의 head
  Node* newNode = createNode(data);
  newNode->next = head;
  head = newNode;
}

void insertEnd(Node*& head, int data) {
  Node* newNode = createNode(data);
  
  if (head == nullptr) { //head 자체가 없다
    head = newNode;
  } else {
    Node* temp = head;
    while (temp->next != nullptr) {
      temp = temp->next;
    }
    temp->next = newNode;
  }
}

void deleteNode (Node*& head, int data) {
  if (head == nullptr) {
    return;
  }
  
  Node* temp = head;
  
  if (head->data == data) {
    head = head->next;
    delete temp;
    return;
  }

  while (temp->next != nullptr && temp->next->data != data) {
    temp = temp->next;
  }
  if (temp->next != nullptr) {
    Node* toDelete = temp->next;
    temp->next = temp->next->next;
    delete toDelete;
    return;
  }
  cout << "Cannot Be Found";
}

void printList(Node* head) {
  Node* temp = head;
  while (temp->next != nullptr) {
    cout << temp->data << " ";
    temp = temp->next;
  }
  cout << endl;
}

int main() {
  Node* first = nullptr;
  Node* second = nullptr;

  insertFront(first, 5);
  insertFront(first, 50);
  insertEnd(second, 35);
  insertFront(first, 10);
  insertEnd(second, 33);
  insertFront(first, 12);
  insertFront(first, 23);
  insertFront(second, 41);
  insertFront(second, 16);
  insertEnd(second, 32);
  insertFront(first, 57);
  insertEnd(second, 62);
  insertEnd(first, 11);
  insertFront(first, 7);

  cout << "First List: ";
  printList(first);
  cout << "Second List: ";
  printList(second);

  deleteNode(first, 10);
  deleteNode(second, 16);
  deleteNode(second, 50);

  cout << "First List: ";
  printList(first);
  cout << "Second List: ";
  printList(second);

  while(first != nullptr) {
    Node* temp = first;
    first = first->next;
    delete temp;
  }
  while(second != nullptr) {
    Node* temp = second;
    second = second->next;
    delete temp;
  }

  return 0;
}