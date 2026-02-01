#include<bits/stdc++.h>
using namespace std;

int main(){
    int * a = new int[5]; //meaning= int a[5]

    for(int i=0; i < 5; i++){ //input = 1 2 3 4 5
        cin>>a[i];            
    }

    for(int i=0; i < 5; i++){
        cout<<a[i]<<" ";  //output = 1 2 3 4 5
    }

  return 0;
}