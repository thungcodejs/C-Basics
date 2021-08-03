/*Cho 2 biến kiểu số nguyên a, b và 1 biến kiểu ký tự c. Cả 3 biến này đều được nhập từ bàn phím. Biết biến c là 1 trong 4 ký tự '+', '-', '*' hoặc '/'. Bạn hãy viết chương trình hiển thị giá trị của biểu thức khi áp dụng phép toán c lên a và b. Ví dụ nếu bạn nhập a = 7, c = '+', b = 9 như bên dưới:

7 + 9
Thì màn hình sẽ hiển thị ra:

16*/
#include <iostream>
using namespace std;

int main() {
    int a, b;
    char c;
    cout << "enter a: ";
    cin >> a;
    cout << "enter c: ";
    cin >> c;
    cout <<"enter b: ";
    cin >> b;
    switch (c) {
    case '+':
        cout << "the result is: " << a + b;
        break;
    case '-':
        cout << "the result is: " << a - b;
        break;
    case '*':
        cout << "the result is: " << a * b;
        break;
    case '/':
        cout << "the result is: " << a / b;
        break;
    }
    return 0;
}
/* nếu không có break thì lệnh trong case sẽ thực thì cho đến khi có lệnh break.
   default: nếu không có giá trị nào trong case thỏa mãn thì khối lệnh trong default sẽ thực thi*/