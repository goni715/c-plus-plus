#include<bits/stdc++.h>
using namespace std;

class Student {
    public:
       char name[100];
       int roll;
       int cls;
       char section;

};

int main(){
    Student rahim;
    rahim.roll=29;
    rahim.cls=9;
    rahim.section='A';

    //for name
    char nm[100]="Rahim";
    strcpy(rahim.name, nm);


    //second student create
    Student karim;
    karim.roll=30;
    karim.cls=9;
    karim.section='B';
    char nm2[100]="Karim";
    strcpy(karim.name, nm2);

    cout<<karim.name<<endl;
    cout<<rahim.roll;

    return 0;
}