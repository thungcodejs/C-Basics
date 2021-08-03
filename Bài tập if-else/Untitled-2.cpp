#include<iostream>
using namespace std;

int main() {
    string name_1, name_2;
    cin >> name_1 >> name_2;
    if(name_1 != name_2){
        cout << "two people don't have the same name";
    } else {
        cout << "two people have the same name";
    }
    return 0;
}
