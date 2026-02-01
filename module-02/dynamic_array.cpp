#include<bits/stdc++.h>
using namespace std;

int main(){
    /*
    int * a = new int[5]; //meaning= int a[5]

    for(int i=0; i < 5; i++){ //input = 1 2 3 4 5
        cin>>a[i];            
    }

    for(int i=0; i < 5; i++){
        cout<<a[i]<<" ";  //output = 1 2 3 4 5
    }
    */


    //array size increasing
    int * a = new int[5];

    for(int i =0; i < 5; i++){
        cin >> a[i];
    }

    int * b = new int[7];
    for(int i=0; i <5; i++){
        b[i]=a[i];
    }

    b[5]=60;
    b[6]=70;

    //print b array
    for(int i=0; i<7; i++){
        cout<<b[i]<<" ";
    }

   //delete a (old array)
   delete[] a;
   //delete a; // sudhu 0 index er ghor (address) ta delete hobe, bakigula thekei jabe. bakigula access kora jabena. karon array sob value access korte hole 1st index er address(ghorta) tahakte hobe

   cout<<endl;

   //delete float
   //float * f = new float;
   //*f=2.56;
   //cout<<*f;
   //delete f;

  return 0;
}