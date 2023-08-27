#include <iostream> //기본제공
#include <string>
using namespace std;

void refFunction (int &refParams);
void Swap(int &a, int &b); //& 주소가 들어온다

// C: Pointer
// C++: Reference Type


int main() {
  int original_value = 10;
  // Reference of Original_Value
  // Reference means address
  int &ref = original_value; //basically pointer, if you change reference value, you are changing orginal value

  // change reference : original_value be changed
  ref = 20;
  cout << original_value << endl;

  // in C, using pointer
  //int *p = &original_value;
  //*p = 30;
  //cout << original_value << endl;

  refFunction(original_value);
  cout << original_value << endl;
  
  int x = 5;
  int y = 8;
  
  Swap(x, y);

  cout << "X: " << x << endl;
  cout << "Y: " << y << endl;
  
  return 0;
}

void refFunction (int &refParams) {
  refParams = 100;
}

void Swap(int &a, int &b) {
  int test = a;
  a = b;
  b = test;
}