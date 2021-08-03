/*Cho xâu s1, s2 và s3 được nhập từ bàn phím. Bạn hãy viết chương trình chuyển các ký tự in hoa trong 3 xâu này thành in thường và hiển thị cả 3 xâu ra màn hình.

Ví dụ nếu bạn nhập s1 = "CODELEARN", s2 = "FSOFT", s3 = "FPT" như bên dưới:

CODELEARN
FSOFT
FPT
Thì màn hình sẽ hiển thị ra:

codelearn
fsoft
fpt*/
#include<iostream>
using namespace std;

void show(string s) {
    for (int i = 0; i < s.size(); i++){
        if(s[i] >= 'A' && s[i] <= 'Z'){
            s[i] += 32;
        }
    }
        cout << s << endl;
}

int main() {
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;
    show(s1);
    show(s2);
    show(s3);
    return 0;

