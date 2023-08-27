#include <iostream>
#include <vector>
using namespace std;

class Queue {
private:
  vector<int> data;
  bool isEmpty() const { return data.empty(); }

public:
  Queue() {}

  int peek() const {
    if (isEmpty()) {
      cout << "Error: Queue is empty" << endl;
      return -1;
    }
    return data.front();
  }
  void enqueue(int value) { data.push_back(value); }

  int dequeue() {
    if (isEmpty()) {
      cout << "Error: Queue is Empty" << endl;
      return -1;
    }
    int frontElement = data.front();
    data.erase(data.begin());
    return frontElement;
  }
};

int main() {
  Queue first;
  Queue second;

  first.enqueue(5);
  first.enqueue(12);
  first.enqueue(43);
  first.enqueue(27);
  first.enqueue(63);
  second.enqueue(2);
  second.enqueue(9);
  second.enqueue(41);
  second.enqueue(33);
  second.enqueue(12);

  cout << "Top First Queue Element " << first.peek() << endl;
  cout << "Pop First Queue " << first.dequeue() << endl;
  cout << "Pop First Queue " << first.dequeue() << endl;
  cout << "Top First Queue Element " << first.peek() << endl;
  cout << "Pop Second Queue " << second.dequeue() << endl;
  cout << "Top Second Queue Element " << second.peek() << endl;

  first.enqueue(74);
  cout << "Top First Queue Element " << first.peek() << endl;
  second.enqueue(74);
  cout << "Top Second Queue Element " << second.peek() << endl;
}
