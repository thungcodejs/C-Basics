/*Cho xâu s và ký tự c được nhập từ bàn phím, bạn hãy viết chương trình in ra vị trí đầu tiên mà ký tự c xuất hiện trong xâu s, nếu ký tự c không xuất hiện trong s thì in ra -1.*/

#include<iostream>

using namespace std;

int main() {
    string s;
    char c;
    cin >> s >> c;
    int index = -1;//index là chỉ số của mảng//
    for (int i = 0; i < s.size(); i++){
        if (s[i] == c){
            index = i;
            break;/*
            Gọi lệnh break để dừng vòng lặp do
            đã tìm thấy vị trí đầu tiên mà ký tự c xuất hiện.
            Nếu không có lệnh break thì kết quả của chương trình
            sẽ là vị trí cuối cùng mà ký tự c xuất hiện.
            */
        }
    }
    cout << index;
    return 0;
}
/* - có thể lấy ra phần tử thứ k trong xâu s = s[k-1];
   - dùng vòng for để duyệt qua ký tự của xâu như trong mảng
   -s.size() là  độ dài ký tự của xâu*/
