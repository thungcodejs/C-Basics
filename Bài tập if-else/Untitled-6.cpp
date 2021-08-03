#include<iostream>
using namespace std;

int main() {
    double n;
    cin >> n;
    if (n > 0 && n < 10)
    {
        cout << "the score is valid";
    } else {
        cout << "the score is not valid";
    }
    return 0;
}