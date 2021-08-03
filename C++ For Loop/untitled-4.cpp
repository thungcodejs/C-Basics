#include<iostream>
using namespace std;

int main() {
    int a, b;
    int sum = 0;
    cout << "enter a: ";
    cin >> a;
    cout << "enter b: ";
    cin >> b;
    for(int i = a; i <= b; i++) {
        sum = sum + i;
    }
    cout << "sum: " << sum;
    return 0;
}