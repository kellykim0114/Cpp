#include <iostream>
#include <vector>
using namespace std;

class Stack {
private:
  vector<int> data;
  bool isEmpty() const { return data.empty(); }
  bool isFull() const { return false; }

public:
  Stack() {}
  
  int peek() const {
    if (isEmpty()) {
      cout << "Error: Stack is empty" << endl;
      return -1;
    }
    return data.back();
  }
  void push (int value) {
    data.push_back(value);
  }

  int pop() {
    if (isEmpty()) {
      cout << "Error: Stack is Empty" << endl;
      return -1;
    }
    int topElement = data.back();
    data.pop_back();
    return topElement;
  }
};

int main() {
  Stack first;
  Stack second;

  first.push(5);
  first.push(12);
  first.push(43);
  first.push(27);
  first.push(63);
  second.push(2);
  second.push(9);
  second.push(41);
  second.push(33);
  second.push(12);

  cout << "Top First Stack Element " << first.peek() << endl;
  cout << "Pop First Stack " << first.pop() << endl;
  cout << "Pop First Stack " << first.pop() << endl;
  cout << "Top First Stack Element " << first.peek() << endl;
  cout << "Pop Second Stack " << second.pop() << endl;
  cout << "Top Second Stack Element " << second.peek() << endl;

  first.push(74);
  cout << "Top First Stack Element " << first.peek() << endl;
  second.push(74);
  cout << "Top Second Stack Element " << second.peek() << endl;
}
