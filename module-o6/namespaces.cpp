#include<bits/stdc++.h>
using namespace std;

namespace Goni {
    int age=25;
    void hello(){
        cout<<"Goni namespace"<<endl;
    }
}
namespace Evan {
    int age2=3;
    void hello(){
        cout<<"Evan namespace"<<endl;
    }
}

using namespace Evan;

int main(){
    cout<<Goni::age<<endl;
    cout<<age2<<endl;

    Goni::hello();
    hello();
    return 0;
}