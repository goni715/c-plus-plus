#include<bits/stdc++.h>
using namespace std;

int main(){
    string x = "Hello";
    string y = "World";
    //x = x+y;
    //x +=y; 
    //cout<<x<<endl; //output = HelloWorld

    //using append() method
    //x.append(y); 
    //cout<<x<<endl; //output = HelloWorld

    //x = x + "G";
    //cout<<x; //output=HelloG

   // a[5]='G' //didn't work, because index 6 is not available

   //push_back() = add character to string
   x.push_back('G');
   x.pop_back(); //remove last character
   

    return 0;
}