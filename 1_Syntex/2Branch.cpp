#include <iostream>
#include <string> //String
using namespace std ; //String, removing std

int main() {
  int age;
  string result;
  
  cin >> age; // Scanner Keyboard

  //if-else: in range 
  if (age > 20) {
    //std::cout << "Beer Party" << std::endl;
    result = "Beer Party";
  } else {
    //std::cout << "Drink Juice" << std::endl;
    result = "Drink Juice";
  }
  cout << result << endl;

  //switch : variable is only one (button, vending machine)

  cout << "1. Coke\n2. Diet Coke\n3. Sprite\n4. Juice" << endl;

  int select;
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
    default:
      result = "Wrong Input";
  }
  cout << result << endl;

  //examing: Only A Condition

  (age > 20 ? result = "Beer" : result = "Juice");
  cout << result << endl;

  return 0;
}