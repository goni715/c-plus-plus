#include<bits/stdc++.h>
using namespace std;

class Person {
    public:
        string name;
        int age;
        Person(string name, int age){
            (*this).name=name;
            (*this).age=age;
            this->age=age;
        }
        void display(){
            cout<<"Hello Display: "<<name<<endl;
        }
};

int main(){
    Person marjan("Marjan Hossain", 9);
    cout<<marjan.name<<" "<<marjan.age<<endl;
    marjan.display();
    return 0;
}