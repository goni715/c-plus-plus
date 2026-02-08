#include<bits/stdc++.h>
using namespace std;

int main(){
    string name = "Osman Goni";
    cout<<name.size()<<endl; // length=10

    //cout<<name.max_size(); // 10^6
    //cout<<name.capacity(); 

    //name.clear(); // clear the string
    //cout<<name.size(); //length=0


    //str.empty() = true/false return
    string str;
    if(name.empty()){
        cout<<"Empty";
    }else{
        cout<<"Not empty";
    }

    return 0;
}