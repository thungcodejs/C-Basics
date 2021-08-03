/*Bạn hãy viết chương trình nhập từ bàn phím một số nguyên n và hiển thị ra màn hình các ước của n với n > 0 và n!.*/
#include<iostream>
using namespace std;

int main() {
    int n;
    int factorial = 1;// factorial là biến lưu trữ giá trị của n!//
    cout << "enter n: ";
    cin >> n;
    for(int i = 1; i <= n; i++){
        if (n % i == 0){//nếu n chia hết cho i,thì i chính là ước của n//
            cout << "n's divisor is: " << i << endl;//divisor là ước//
            factorial *= i;
        }
    }
    cout << "factorial: "<< factorial;
    return 0;
}