#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    float a;

    cin>>a; //input=2.56789
    cout<<fixed<<setprecision(2)<<a; //output=2.57
    return 0;
}
