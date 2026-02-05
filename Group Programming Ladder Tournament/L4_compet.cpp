#include <iostream>
using namespace std;

int main()
{
    // 输入数据：总人数，各竞赛人数，两两组合人数，三个都参加的人数
    int n, a, b, c, ab, ac, bc, abc;
    cin >> n >> a >> b >> c >> ab >> ac >> bc >> abc;
    
    // 使用容斥原理计算至少参加一项竞赛的学生人数
    // 公式：|A∪B∪C| = |A| + |B| + |C| - |A∩B| - |A∩C| - |B∩C| + |A∩B∩C|
    int at_least_one = a + b + c - ab - ac - bc + abc;
    
    // 计算恰好参加两种竞赛的学生人数
    // 公式：只参加两种 = (ab + ac + bc) - 3*abc
    // 原因：ab、ac、bc中各包含abc，需要减去3倍的abc
    int exactly_two = ab + ac + bc - 3 * abc;
    
    // 输出结果：至少一项 恰好两项
    cout << at_least_one << " " << exactly_two << endl;
    
    return 0;
}