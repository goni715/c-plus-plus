#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin, s); //input= I am Osman Goni
    //stringstream ss(s);
    // string word;
    // ss>>word;
    // cout<<word<<endl; //output=I

    // ss>>word;
    // cout<<word<<endl; //output=am

    // ss>>word;
    // cout<<word<<endl; //output=Osman

    // ss>>word;
    // cout<<word<<endl; //output=Goni

    stringstream ss;
    ss<<s;
    string word;
    int count=0; //count words

    while(ss >> word){
        cout<<word<<endl;;
        count++;
    }

    cout<<count;

    return 0;
}