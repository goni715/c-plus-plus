#include<bits/stdc++.h>
using namespace std;

class Person {
    public:
        string name;
        int age;
        Person(string nm, int ag){
            name=nm;
            age=ag;
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