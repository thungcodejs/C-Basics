/*Cho một mảng các số nguyên n phần tử arr và số nguyên k được nhập từ bàn phím. Bạn hãy viết chương trình hiển thị ra màn hình số phần tử có giá trị bằng k trong mảng arr.

Ví dụ nếu bạn nhập n = 6, arr = [3, 8, 7, 8, 3, 3], k = 3 như bên dưới:

6
3 8 7 8 3 3
3
Thì màn hình hiển thị lên: 3 */
#include<iostream>

using namespace std;

int main() {
    int n, k; 
    int arr[1000];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cin >> k;

    int count = 0;
    for(int i = 0; i < n; i++) {
        if (arr[i] == k){
            count ++;
        }
    }
    cout << count;
    return 0;
}
