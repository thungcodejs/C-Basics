/*Cho một mảng các số nguyên n phần tử arr được nhập từ bàn phím. Bạn hãy viết chương trình hiển thị ra phần tử lớn nhất trong mảng. Ví dụ nếu bạn nhập n = 5, arr = [2, 7, 6, 8, 9] như bên dưới:*/
#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin  >> a[i];
    }

    int maxvalue = a[0];
    for (int i = 0; i < n; i++){
        if (a[i] > maxvalue){
            maxvalue = a[i];
        }
    }
    cout << maxvalue;
    return 0;
}