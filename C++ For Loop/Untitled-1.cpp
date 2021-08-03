#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){/*cho biến i=1,nếu i <= n thì thực hiện lệnh  cout,sau đó tăng i lên 1 và quay lại bước 2,nếu i <=n thì thực hiện lệnh cout.Ngược lại i > n thì dừng lại,k thực hiện bước tiếp theo*/
        cout << i << " ";
    }
    return 0;
}/*tùy trường hợp có thể bỏ trống dòng "int i = 1" trong for
vd:Bạn hãy viết chương trình nhập vào bàn phím số nguyên n và hiển thị ra các số chẵn từ n tới 100.
bài làm:
 #include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for(; n <=100; n++){
        if(n % 2 == 0){
            cout << n << " ";
        }
    }
    return 0;
}
*/
