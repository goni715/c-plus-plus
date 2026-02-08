#include<bits/stdc++.h>
using namespace std;

int main(){
    string str = "Hello_World"; //string is a dynamic array
    cout<<str[0]<<endl;//✔=H

    //using at() method
    cout<<str.at(0)<<endl; //H

    cout<<str[str.size()-1]<<endl; //last value=d
    cout<<str.back()<<endl; //last value //✔=d
    cout<<str.front()<<endl; //first value
    return 0;
}