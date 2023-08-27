#include <iostream>

int main() {
  // Data type
  // <number integer>
  // **int usually 4byte
  // short 2byte
  // long 
  // long long
  // unsinged int (positive + negative)

  // <number floating-point>
  // ** float usually 4byte
  // **double usually 8byte

  // <character>
  // String name = "Kelly";
  // char name1 = k;
  // ** char[20] name2 = "kelly"; //Java String

  // <boolean>
  // ** bool

  // <void>
  // void

  // [Declaration]
  // [datatype] [variable_name] = [value];
  
  int a = 5;
  const double pi = 3.141592;

  // [Operator] 
  a = pi;
  //* / + - %
  // +=  /=  -=  *=
  a+= pi; // a = a + pi

  //a++    a += 1

  // ++ --
  a = 5;
  std::cout << a << std::endl; //5
  std::cout << ++a << std::endl; //6
  // a++
  // std::count << a << std::endl;
  std::cout << a++ << std::endl; //6
  std::cout << a << std::endl; //7
  
  return 0;
}