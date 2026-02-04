#include<bits/stdc++.h>
using namespace std;

class Student {
    public:
       char name[100];
       int roll;
       int cls;
       char section;

       Student(int r, int c, char s, const char* n){
         roll=r;
         cls=c;
         section=s;
         strcpy(name, n);
       }

};

int main(){
    Student rahim(25, 3, 'C', "Rahim");

    cout<<rahim.roll<<endl;
    cout<<rahim.cls<<endl;
    cout<<rahim.section<<endl;
    cout<<rahim.name<<endl;


    Student marjan(10, 2, 'A', "Marjan Hosain");

    cout<<marjan.roll<<endl;
    cout<<marjan.cls<<endl;
    cout<<marjan.section<<endl;
    cout<<marjan.name<<endl;
    return 0;
}