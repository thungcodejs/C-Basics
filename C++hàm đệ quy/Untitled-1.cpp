/*Cho số nguyên dương n được nhập từ bàn phím, bạn hãy viết hàm đệ quy trả về n! (n giai thừa).

Ví dụ: nếu bạn nhập n = 5 thì chương trình sẽ hiển thị lên màn hình 120.*/ 
#include<iostream>
using namespace std;

int factorial(int n) {
    if (n == 1) return 1;//nếu input = 1 thì hàm sẽ trả ngay về một //
    return n * factorial(n - 1); 
/* mô tả 5! factorial(5):
= 5 * factorial(4)
= 5 * 4 * factorial(3)
= 5 * 4 * 3 * factorial(2)
= 5 * 4 * 3 * 2 * factorial(1)
= 5 * 4 * 3 * 2 * 1
= 120 */
}

int main() {
    int n;
    cin >> n;
    cout << factorial(n);
    return 0;
}