#include <iostream>
#include <vector>
using namespace std;

int binarySearch(const vector<int> &target, int key, int front, int end) { //target address로 받는다
  if (front > end) {
    return -1;
  }
  
  int middle = (end + front)/2;
  
  if (target[middle] == key) {
    return middle;
  } else if (target[middle] > key) { //Search left
    return binarySearch(target, key, front, middle-1);
  } else if (target[middle] < key) { //Search right
    return binarySearch(target, key, middle+1, end);
  }

  return -2;
}

int main() {
  vector<int> target = {1, 23, 24, 45, 63, 79, 97, 113, 120};

  int key;

  cout << "Input search key: ";;
  cin >> key;

  int index = binarySearch(target, key, 0, target.size()-1);

  if (index != -1) {
    cout << "Key Found At Index: " << index+1 << endl;   
  } else if (index == -2) {
    cout << "Error" << endl;
  } else {
    cout << "Key Not Found" << endl;
  }

  return 0;
}
