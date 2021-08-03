#include<iostream>
using namespace std;

int main() {
    int a, b;
    cout << "enter a: ";
    cin >> a;
    cout << "enter b: ";
    cin >> b;
    for(int i = a; i <= b; i++){
        cout << i << " ";
    }
    return 0;
}