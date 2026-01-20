#include<iostream>
using namespace std;

int main(){
    int x;
    cin>>x; //input=4

    switch(x){
        case 2:
          cout<<"This is Two";
          break;
        case 4:
          cout<<"This is Four"; //output
          break;
        case 5:
          cout<<"This is Five";
          break;
        default:
          cout<<"This is"<<x;
    }

    cout<<endl;

    //even & odd
    int y;

    cin>>y;

    int result = y%2; //0 or -1
    
    switch (result)
    {
    case 0:
        cout<<"This is Even numbers";
        break;
    
    default:
        cout<<"This is Odd Numbers";
        break;
    }
}