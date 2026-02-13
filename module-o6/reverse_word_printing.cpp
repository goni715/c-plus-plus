#include<bits/stdc++.h>
using namespace std;

void fun(stringstream& ss){
    string word;

    //normal recursion
    // if(ss>>word){
    //     cout<<word<<endl;
    //     fun(ss);
    // }

    //output=
    //This
    //is
    //Osman
    //Goni

    //reverse recursion
    if(ss>>word){
        fun(ss);
        cout<<word<<endl;
    }
    //output=
    //Goni
    //Osman
    //is
    //This
}

int main(){
    string str="This is Osman Goni";
    stringstream ss(str);
    fun(ss);
    return 0;
}