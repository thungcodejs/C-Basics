//Ví dụ chương trình nhập vào một mảng 2 chiều và in mảng 2 chiều này ra màn hình://
#include<iostream>
using namespace std;

int main() {
    int arr[100][100];
    int n, m;
    cout << "enter n: ";
    cin >> n;
    cout << "enter m: ";
    cin  >> m;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }
        for (int i = 0; i < n; i++){
            for(int j = 0; j < m; j++) {
                cout << "arr[" << i << "][" << j << "] = " << arr[i][j] << " " << endl;
            }
        }
        return 0;
    }
