#include <iostream> //기본제공
#include <string>
using namespace std;

// C : malloc (memory allocation), free
// C++ : new, delete

int main() {
  // Dynamicly memory allocate only instance
  int *pData = new int;

  // with initialized value
  int *pNewData = new int(20);

  // array type
  int *intArr = new int[5]; //Array는 그 자체로 pointer, address is in order

  *pData = 10;

  for (int i = 0; i < 5; ++i) {
    intArr[i] = (i+1) *5;
  }

  cout << *pData << endl;
  cout << "Original : " << *pNewData << endl;
  *pNewData = 30;
  cout << "Changed :" << *pNewData << endl;
  for (int i = 0; i < 5; ++i) {
    cout << intArr[i] << ' ';
  }
  // Do not forget to delete dynamic instances
  delete pData;
  delete pNewData;
  delete[] intArr; // array instance, delete[]
  
  return 0;
}
