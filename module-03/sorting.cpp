#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n; //input= 5
    int a[n];

    for(int i=0; i<n; i++){
        cin>>a[i]; //input = 10 30 50 40 20
    }

    //sorting
    // sort(a, a+n);

    // for(int i=0; i<n; i++){
    //     cout<<a[i]<<" "; //output= 10 20 30 40 50 
    // }


    //sorting
    sort(a, a+3);

    for(int i=0; i<n; i++){
        cout<<a[i]<<" "; //output= 10 30 50 40 20
    }


    //sorting as descending order
    sort(a, a+n, greater<int>()); 
    for(int i=0; i<n; i++){
        cout<<a[i]<<" "; //output= 50 40 30 20 10
    }

    return 0;
}