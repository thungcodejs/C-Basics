/*VD1: Bạn hãy viết chương trình hiển thị ra màn hình các ký tự từ 'A' tới 'Z' như bên dưới:*/
#include<iostream>
using namespace std;

int main() {
    for(char c = 'A'; c <= 'Z'; c++){
        cout << c;
    }

    return 0;
}
//VD2: ho xâu s được nhập từ bàn phím. Bạn hãy viết chương trình chuyển các ký tự in thường trong xâu s thành in hoa và hiển thị xâu s ra màn hình://
#include<iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
        s[i] -= 32;//chuyển xâu từ in thường thành in hoa bằng cách trừ đi 32 và ngược lại//
        }
    }
    cout << s;
    return 0;
}