/*Bạn hãy viết chương trình nhập vào từ bàn phím 10 số nguyên và hiển thị ra tổng của 10 số này.*/
#include<iostream>
using namespace std;

int main() {
    int a[10];//khai báo mảng a với 10 phần tử//
    int sum = 0;//khai báo biến lưu trữ trong mảng//
    for(int i = 0; i < 10; i++) {//dùng vòng for để nhập dữ liệu cho các phần tử trong mảng//
        cin >> a[i];
    }
    for(int i = 0; i < 10; i++) {//dùng vỏng for để tính tổng các phần tử trong mảng//
        sum += a[i];
    }
    cout << sum;//in ra tổng các phần tử//
    return 0;
}