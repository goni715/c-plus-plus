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

    for(int i=0; i<3; i++){
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
Goni 230 78
Marjan Hossain 14 95
Ibrahim Islam  56 70
*/