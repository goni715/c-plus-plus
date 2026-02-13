#include<bits/stdc++.h>
using namespace std;

int main(){
    int x;
    cin>>x;
    //cin.ignore();
    getchar(); // in c programming
    string str;
    // cin>>str; //without space
    //cin.getline(str, 100); //for char str[100] --- with space
    getline(cin, str); 
    cout<<str<<endl;
    return 0;
}