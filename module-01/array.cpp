#include <iostream>
#include <string>
using namespace std;

int main(){
    string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
    //cout<<cars[0];

    for (int i = 0; i < 4; i++) {
      cout << cars[i] << "\n";
    }

    return 0;
}