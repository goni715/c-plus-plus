#include<bits/stdc++.h>
using namespace std;

void fun(string & str){
    str="World";
}

int main(){
    string str = "Hello";
    fun(str);
    cout<<str<<endl;
    return 0;
}