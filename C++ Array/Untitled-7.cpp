/*Cho một mảng 2 chiều các số nguyên n hàng m cột arr được nhập từ bàn phím. Bạn hãy viết chương trình tính tổng các phần tử chia hết cho 5 trong arr.

Ví dụ nếu bạn nhập n = 3, m = 4, arr = [[10, 4, 8, 2], [5, 6, 4, 9], [20, 3, 8, 1]] như bên dưới:

3 4
10 4 8 2
5 6 4 9
20 3 8 1
Thì màn hình sẽ hiển thị ra:

35*/
#include<iostream>

using namespace std;

int main() {
    int arr[100][100];
    int n, m;
    cout << "enter n: ";
    cin >> n;
    cout << "enter m: ";
    cin >> m;

    for(int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> arr[i][j];
        }
    }
    int sum = 0;
    for(int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if (arr[i][j] % 5 == 0){
            sum += arr[i][j];
            }
        }
    }
    cout << sum;
    return 0;
}
