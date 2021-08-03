/*Cho số nguyên n được nhập từ bàn phím, bạn hãy viết hàm đệ quy trả về tổng các số lẻ từ 1 tới n.*/
#include <iostream>

using namespace std;

int sum(int n) {
    if (n == 1) return 1;
    if (n % 2 == 0) {
        return sum(n - 1);
    } else {
        return n + sum(n - 1);
    }
}

int main() {
    int n;
    cin >> n;
    cout << sum(n);
    return 0;
}