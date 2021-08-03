/*Bạn hãy viết chương trình nhập vào bàn phím số nguyên n và hiển thị ra các số chẵn từ n tới 100.*/
#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "enter n: ";
    cin >> n;
    while (n <= 100) {/* cấu trúc while hoạt động kiểu:
                         while(biểu thức){
                             khối lệnh
                         }
                         nếu biểu thức trong while đúng thì thực hiện khối lệnh */
        if (n % 2 == 0) {
            cout << n << " ";
        }
        n++;
    }
    return 0;
}