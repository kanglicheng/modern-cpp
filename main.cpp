#include <iostream>
using std::cout;
using std::endl; 

int main() {
  // cout << "Identify what the following statements are printing\n";
  // int *numPtr = new int; 
  // cout << "*numPtr: " <<*numPtr << std::endl;
  // cout << "numPtr: " << numPtr << std::endl; 
  // cout << "&numPtr: " << &numPtr << std:: endl; 

  // *numPtr = 42;
  // // what happens after the above assignment?
  // cout << "*numPtr: " <<*numPtr << std::endl;
  // cout << "numPtr: " << numPtr << std::endl; 
  // cout << "&numPtr: " << &numPtr << std:: endl; 

  // int i = 2; 
  // int *p = &i;
  // int j = 5;
  // p = &j; 

  // cout << p << std::endl;
  // cout << *p << std::endl;   

 int *i = new int; 
 *i = 0;
 int &j = *i; 
 j++; 
 cout << j <<endl; 
 cout <<&j; 

  
}