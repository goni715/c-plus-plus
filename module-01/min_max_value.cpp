#include<iostream>
#include<algorithm>
using namespace std;

int min_value(int a, int b){
    if(a < b) return a;
    return b;
}

int max_value(int a, int b){
    if(a > b) return a;
    return b;
}

int main(){
   int a, b;
    cin>>a>>b; //input = 40 50

    int minValue = min_value(a, b);
    cout<<minValue; //output=40
    cout<<endl;

    int maxValue = max_value(a, b);
    cout<<maxValue; //output=50

    cout<<endl;

    //using built-in function
    int minimumValue = min(a, b);
    cout<<"built-in min: "<<minimumValue<<endl; //40

    int maximumValue = max(a, b);
    cout<<"built-in max: "<<maximumValue; //40
    return 0;
}