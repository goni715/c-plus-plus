#include<iostream>
#include<utility>
using namespace std;

//using call by reference
void swap_value(int *x, int *y){
    int temp = *x;
    *x=*y;
    *y=temp;
}

int main(){
    int x = 20;
    int y = 40;

    /*
    int temp = x;
    x = y;
    y = temp;

    cout<<"value of x: "<<x<<endl <<"value of y: "<<y; //output x=40, y=20
    */

    //using function
    //swap_value(&x, &y);
    //cout<<"value of x: "<<x<<endl <<"value of y: "<<y; //output x=40, y=20

    //using built0in function
    swap(x, y);
    cout<<"value of x: "<<x<<endl <<"value of y: "<<y; //output x=40, y=20


    return 0;
}