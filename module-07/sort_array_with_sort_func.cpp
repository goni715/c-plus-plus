#include<bits/stdc++.h>
using namespace std;

class Student {
    public:
        string name;
        int roll;
        int marks;
};

//ascending
bool cmp(Student a, Student b){
    if(a.marks > b.marks) return true;
    else return false;
}

//descending
bool cmp(Student a, Student b){
    if(a.marks < b.marks) return true;
    else return false;
}

int main(){
    Student students[3];

    for(int i=0; i < 3; i++){
        getline(cin, students[i].name);
        cin>>students[i].roll>>students[i].marks;
        cin.ignore();
    }

   //descending sort
   sort(students, students+1, cmp);

    for(int i=0; i < 3; i++){
        cout<<students[i].name<<" "<<students[i].roll<<" "<<students[i].marks<<endl;
    }
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
Ibrahim Islam 56 70
Goni 230 78
Marjan Hossain 14 95
*/