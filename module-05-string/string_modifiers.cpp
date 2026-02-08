#include<bits/stdc++.h>
using namespace std;

int main(){
    //string x = "Hello";
    //string y = "World";
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
   //x.push_back('G');
   //x.pop_back(); //remove last character
   
   //x="Hi";
   //x.assign("Hi");
   //cout<<x<<endl; //output= Hi

   string x = "HelloWorld";
   //x.erase(4); //output=Hell
   //x.erase(4, 1); //output =HellWorld (o remove) = 1 ta remove
   //x.erase(4, 3); //output= Hellrld = 3 ta remove
   //x.replace(5, 0, "so"); //output= HellosoWorld
   x.insert(5, "so"); //output= HellosoWorld
   cout<<x<<endl;

    return 0;
}