#include <iostream>
#include <vector> //array 쉽게 만들어주는거
using namespace std;

struct People {
  string name;
  string number;
};

int main() {

  // 보통 이렇게 쓴다
  vector<People> person;
  person.push_back({"Kelly", "778-318-6344"}); //Stack & Queue
  person.push_back({"Kelloggs", "778-318-6345"});
  person.push_back({"Kelly Kim", "778-318-6346"});
  person.push_back({"Kelloggs Kim", "778-318-6347"});

  for (int i = 0; i < person.size(); i++) {
    if (person[i].name == "Kelly") {
      cout << "Found!\n" << person[i].number << endl;
      return 0;
    }
  }

  cout << "Not Found!" << endl;
  return 0;
  
  // ----------------------------
  // vector<int> target = {23, 45, 72, 53, 92};
  // // int target[] = {23, 45, 72, 53, 92};

  // for (int i = 0; i < target.size(); i++) {
  //   if (target[i] == 53) {
  //     cout << "Found!" << endl;
  //     return 0;
  //   }
  // }

  // cout << "Not Found!" << endl;
  // return 0;
  // //--------------------------

  
}
