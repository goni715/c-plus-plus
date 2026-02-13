#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin>>str; //Hello
    //string:: iterator it;

    // for(int i =0; i< str.size(); i++){
    //     cout<<str[i]<<endl;
    // }

    //cout<<*str.begin()<<endl; //output = H
   // cout<<*str.end()<<endl; //output = null
    //cout<<*(str.end()-1)<<endl; //output = o

    // for(it = str.begin(); it < str.end(); it++){
    //     cout<<*it<<endl;
    // }


    // for(string::iterator it = str.begin(); it < str.end(); it++){
    //     cout<<*it<<endl;
    // }


    //for c++ 11 version to c++ version 20
    for(auto it = str.begin(); it < str.end(); it++){
        cout<<*it<<endl;
    }
    return 0;
}