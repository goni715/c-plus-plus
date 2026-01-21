#include<iostream>
#include<string.h>
using namespace std;

int main(){
    char s[100];
    //cin>>s; //without space
    //cin.getline(s, 100); // with space--input = Osman Goni


    //fgets(s, 100, stdin); input = Osman Goni
    //cout<<strlen(s); //with fgets(), count the enter--> length = 11 (with enter)

    cin.getline(s, 100); // input = Osman Goni
    cout<<s; 
    cout<<endl;
    cout<<strlen(s); //output= 10 without count enter
    return 0;
}