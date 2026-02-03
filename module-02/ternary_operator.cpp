#include<bits/stdc++.h>
using namespace std;

int main(){

    int x = 20;
    if(x%2 == 0){
        cout<<"Even";
    }
    else{
        cout<<"Odd";
    }

    //using ternary operator
    (x%2==0) ? "Even" : "Odd";
}