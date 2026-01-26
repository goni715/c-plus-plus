#include <iostream>
#include <string>
using namespace std;

int main() {
  string greeting = "Hello World";
  //cout << greeting;

  //concatenation
  string firstName = "Osman";
  string lastName = " Goni";
  //string fullName = firstName + " "+lastName;
  //cout<<fullName;

  //use append for concatetion
  string fullName = firstName.append(lastName);
  //cout<<fullName;


  string x = "10";
  string y = "20";
  string z = x + y; //output=1020
  // cout << z;

 //access string
 //string myString = "Hello";
 //cout << myString[0];
 // Outputs= H


 //string last value
 string myString = "Hello";
 cout << myString[myString.length() - 1];
 // Outputs= o
  return 0;
}
