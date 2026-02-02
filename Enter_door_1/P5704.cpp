#include <iostream>
using namespace std;
int main() 
{
    char c;
    cin >> c;
    // 小写字母的 ASCII 值 - 32 = 对应大写字母的 ASCII 值
    if (c >= 'a' && c <= 'z') 
    {
        c = c - 32;
    }
    cout << c << endl;
    return 0;
}
