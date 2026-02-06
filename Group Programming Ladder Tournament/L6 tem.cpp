#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

struct City {
    string name;
    int maxTemp;
    int minTemp;
};

int main()
{
    City cities[105];
    int count = 0;
    int n;
    cin >> n;
    
    // 读取所有城市数据
    for (int i = 0; i < n; i++) {
        string cityName;
        int temp;
        cin >> cityName >> temp;
        
        // 查找该城市是否已存在
        int found = -1;
        for (int j = 0; j < count; j++) {
            if (cities[j].name == cityName) {
                found = j;
                break;
            }
        }
        
        if (found != -1) {
            // 已存在，更新最大最小值
            cities[found].maxTemp = max(cities[found].maxTemp, temp);
            cities[found].minTemp = min(cities[found].minTemp, temp);
        } else {
            // 新城市
            cities[count].name = cityName;
            cities[count].maxTemp = temp;
            cities[count].minTemp = temp;
            count++;
        }
    }
    
    // 按城市名字典序排序（使用快速排序）
    sort(cities, cities + count, [](City a, City b) {
        return a.name < b.name;  // 按name升序排列
    });
    
    // 输出结果
    for (int i = 0; i < count; i++) {
        cout << cities[i].name << " " << (cities[i].maxTemp - cities[i].minTemp) << endl;
    }
    
    // 找出温差最小的城市
    int minDiff = cities[0].maxTemp - cities[0].minTemp;
    string minCity = cities[0].name;
    for (int i = 1; i < count; i++) {
        int diff = cities[i].maxTemp - cities[i].minTemp;
        if (diff < minDiff) {
            minDiff = diff;
            minCity = cities[i].name;
        }
    }
    cout << minCity << endl;
    
    return 0;
}
