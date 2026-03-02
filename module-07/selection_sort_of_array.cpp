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


    //ascending sort
    for (int i=0; i<2; i++){
        for(int j=i+1; j<3; j++){
            if(students[i].marks > students[j].marks){
                swap(students[i], students[j]);
            }
        }
    }

    //descending sort
    // for (int i=0; i<2; i++){
    //     for(int j=i+1; j<3; j++){
    //         if(students[i].marks < students[j].marks){
    //             swap(students[i], students[j]);
    //         }
    //     }
    // }
    
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