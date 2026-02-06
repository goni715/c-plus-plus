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
    //Student rahim(25, 3, 'C', "Rahim"); //static object
    // Student * marjan = new Student; //without constructor function
    Student  * marjan = new Student(10, 2, 'A', "Marjan Hosain"); //with constructor

    //access value of dynamic object by de-reference of pointer

    cout<<(*marjan).roll<<endl;
    cout<<(*marjan).cls<<endl;
    cout<<(*marjan).name<<endl;

    //update role
    (*marjan).roll=60;
    cout<<"New roll: "<<(*marjan).roll<<endl;

    //short cut way
    //arrow sign
    // (*marjan). = -> //here, marjan is a group or an object

    cout<<"Shocut way: "<<marjan->name<<endl;

    //delete object
    delete marjan; //here marjan is a pointer of this group
    return 0;
}