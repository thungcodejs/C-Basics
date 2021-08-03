/*Bạn hãy viết chương trình nhập từ bàn phím hai số nguyên a và b. Sau đó hiển thị ra màn hình các số từ a tới b mà chia hết cho cả 3 và 5*/
#include<iostream>
using namespace std;

int main() {
    int a, b;
    cout << "enter a: ";
    cin >> a;
    cout << "enter b: ";
    cin >> b;
    int i = a;
    while (i <= b)
    {
        if(i % 3 == 0 && i % 5 == 0){
            cout << i << " ";
        }
        i++;
    }
    return 0;
}