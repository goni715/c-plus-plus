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


Student fun(){
    char name[100] = "Rahim Islam";
    Student rahim(25, 3, 'C', name);
    return rahim;
}

int main(){
    Student rahimResult = fun();
    cout<<rahimResult.roll<<endl;
    cout<<rahimResult.cls<<endl;
    cout<<rahimResult.section<<endl;
    cout<<rahimResult.name<<endl;
    return 0;
}