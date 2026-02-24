#include<bits/stdc++.h>
using namespace std;

class Person {
    public:
        string name;
        int age;
        Person(string name, int age){
            this->name=name;
            this->age=age;
        }
};

int main(){
    Person* marjan = new Person("Marjan Hossain", 9);
    Person* evan = new Person("Evan Ahmed", 3);

    //copy object
    //marjan=evan //this is wrong
    marjan->name=evan->name;
    marjan->age=evan->age;

    //short-cut
    //*marjan=*evan;
    delete evan; //evan is deleted, but marjan value has been updated 
    cout<<marjan->name<<" "<<marjan->age<<endl;
    return 0;
}