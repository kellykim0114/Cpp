#include <iostream> //iostream 안에 cout이 들어가있음
#include <string>
using namespace std;

void ageInfo(int person_age) {
  cout << person_age << " years old" << endl;
}

namespace Kelly {
  int age = 18;
  string name = "Kelly";

  void hello() {
    cout << "Hello, I am " << name << endl;
  }
}

namespace Kelloggs {
  int age = 0;
  string name = "Kelloggs";
  
  void hello() {
    cout << "Hello, I am " << name << endl;
  }
}

using namespace Kelly;

int main() {
  cout << "Hello World!" << endl;
  Kelly::hello();
  Kelloggs::hello();

  //if you want to change something in namespace
  name = "Kells"; // using namespace Kelly, so you dont need to put      Kelly in front
  Kelly::hello();
  Kelloggs::age = 19;
  ageInfo(Kelloggs::age);
}