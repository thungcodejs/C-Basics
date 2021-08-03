/*Cho mảng các số nguyên n phần tử arr được nhập từ bàn phím. Bạn hãy viết hàm sắp xếp các phần tử của mảng này theo thứ tự giảm dần.

Ví dụ nếu bạn nhập n = 5, arr = [7, 2, 8, 4, 9] như bên dưới:

5
7 2 8 4 9
Thì màn hình sẽ hiển thị lên:

9 8 7 4 2 */
#include <iostream>

using namespace std;

void sortArray(int arr[1000], int n) {
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if (arr[i] < arr[j]) { 
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    int n;
    int arr[1000];
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    sortArray(arr, n);
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}