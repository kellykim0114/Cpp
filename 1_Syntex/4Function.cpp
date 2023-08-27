#include <iostream>
#include <string> //String
using namespace std ; //String, removing std

void menu() {
  cout << "1. Coke\n2. Diet Coke\n3. Sprite\n4. Juice\n5. Exit" << endl;
}

int main() {
  int select;
  string name;
  string result;
  
  do {

    menu(); //calling the function
    cin >> select;

    switch(select) {
      case 1:
        result = "Coke";
        break;
      case 2:
        result = "Diet Coke";
        break;
      case 3:
        result = "Sprite";
        break;
      case 4:
        result = "Juice";
        break;
      case 5:
        break;
      default:
        result = "Wrong Input";
    }
    cout << result << endl;
  } while (select != 5);

  return 0;
}