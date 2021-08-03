/*VD1: Bạn hãy viết hàm hiển thị ra màn hình các số chia hết cho 3 và không chia hết cho 5 từ 1 tới 100.*/
#include<iostream>
using namespace std;

void show() {
    for (int i = 1; i <= 100; i++){
        if (i % 3 == 0 && i % 5 != 0){
            cout << i << " ";
        }
    }
}
    int main() {
        show() ;
    return 0;
}