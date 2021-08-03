#include<iostream>
using namespace std;

int main() {
    int a;
    cin >> a;
    if(a >= 0 && a <= 10){
        cout << a <<" is in the range [0,10]";
    } else{
        cout << a << " is not in the range [0,10]";
    }
return 0;
}