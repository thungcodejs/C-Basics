/*Bạn hãy viết chương trình nhập từ bàn phím hai số nguyên dương a và b. Sau đó hiển thị ra màn hình kết quả của ab*/
#include<iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    int answer = 1;// answer là biến lưu trữ giá trị mũ của a^b//
    while (b > 0)
    {
        answer *= a;
        b--;
    }
    cout << answer;
    return 0;
}