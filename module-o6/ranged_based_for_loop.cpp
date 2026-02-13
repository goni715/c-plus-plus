#include<bits/stdc++.h>
using namespace std;

int main(){
    string str="Hello";

    //general for loop
    for(int i=0; i < str.size(); i++){
        cout<<str[i]<<endl;
    }

    //ranged based for loop
    //shortcut for loop
    for(char c:str){
        cout<<c<<endl;
    }

    return 0;
}