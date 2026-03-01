#include<bits/stdc++.h>
using namespace std;

class Student {
    public:
        string name;
        int roll;
        int marks;
};

int main(){
    Student students[3];

    for(int i=0; i < 3; i++){
        getline(cin, students[i].name);
        cin>>students[i].roll>>students[i].marks;
        cin.ignore();
    }

    //maximum object
    Student mx; //object of maximum marks
    mx.marks=INT_MIN; //INT_MIN=সবচেয়ে minimum number
    for(int i=0; i<3; i++){
        if(students[i].marks > mx.marks){
            mx=students[i];
        }
    }

    cout<<mx.name<<" "<<mx.marks<<" "<<mx.roll<<endl; //maximum marks=95, Marjan Hossain 14 95

    //minumum object
    Student mn;
    mn.marks=INT_MAX; // INT_MAX=সবচেয়ে maximum number
    for(int i=0; i<3; i++){
        if(students[i].marks < mn.marks){
            mn=students[i];
        }
    }
    cout<<mn.name<<" "<<mn.marks<<" "<<mn.roll<<endl; //minimum marks=70, Ibrahim Islam 70 56

    return 0;

}

/*Input*/
/*
Goni
230
78
Marjan Hossain
14
95
Ibrahim Islam
56
70
*/

/*Output*/
/*
Marjan Hossain 14 95
*/