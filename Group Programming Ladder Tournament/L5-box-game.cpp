#include <iostream>
using namespace std;

int main()
{
    int arr[300];
    int n, count = 0;
    
    // 先读取所有测试数据
    while (cin >> n && n != 0) {
        arr[count++] = n;
    }
    
    // 处理并输出所有结果
    for (int i = 0; i < count; i++) {
        int m = arr[i] + 1;
        
        // Bob获胜条件：n+1是2的幂次且>=4
        if (m >= 4 && (m & (m - 1)) == 0) {
            cout << "Bob" << endl;
        } else {
            cout << "Alice" << endl;
        }
    }
    
    return 0;
}
