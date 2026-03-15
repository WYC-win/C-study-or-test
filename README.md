# C-study-or-test

某大二选手的 C++ 学习轨迹仓库。  
主线是：从 `Hello World` 到比赛题，从“能跑”到“能过样例再说”。

## 项目定位

- 记录 C++ 学习与刷题过程
- 以题目为单位沉淀代码
- 按阶段保存：入门 -> 校赛/蓝桥 -> 阶梯赛进阶

一句话版本：这是一个持续升级的「代码练级档」，偶尔有神之一手，偶尔也有“这题当时我到底在想什么”。

## 仓库结构

```text
.
|-- README.md
|-- Blue-bridge/
|   `-- 16-A.cpp
|-- CUGB十九届程序设计赛/
|   |-- 超级玛丽题（欲得一简便方法）.cpp
|   |-- 嘎嘎！逃离鸭科夫.cpp
|   |-- 简单输出.cpp
|   |-- 可能是板子吧.cpp
|   |-- 牛神评犇大会.cpp
|   `-- 小吴想上清北.cpp
|-- Enter_door_1/
|   |-- B2005.cpp
|   |-- B2025.cpp
|   |-- hello world.cpp
|   |-- P1001.cpp
|   |-- P5703.cpp
|   |-- P5704.cpp
|   |-- P5705.cpp
|   |-- P5706.cpp
|   |-- P5708.cpp
|   `-- super mary.cpp
|-- Group Programming Ladder Tournament/
|   |-- L4_compet.cpp
|   |-- L5-box-game.cpp
|   |-- L6 tem.cpp
|   `-- RGB.cpp
`-- helpfulless/
	`-- vs test output.cpp
```

## 学习路线图

### 1) Enter_door_1：新手村

关键词：输入输出、基础运算、字符处理、格式化。

- [hello world.cpp](Enter_door_1/hello%20world.cpp)：经典开局
- [P1001.cpp](Enter_door_1/P1001.cpp)：两数求和
- [P5703.cpp](Enter_door_1/P5703.cpp)：基础乘法
- [P5704.cpp](Enter_door_1/P5704.cpp)：大小写字符转换
- [P5705.cpp](Enter_door_1/P5705.cpp)：浮点数处理
- [P5706.cpp](Enter_door_1/P5706.cpp)：平均值与格式控制
- [P5708.cpp](Enter_door_1/P5708.cpp)：海伦公式
- [B2005.cpp](Enter_door_1/B2005.cpp)、[B2025.cpp](Enter_door_1/B2025.cpp)：格式化输出练习

阶段评价：
先把语法和输入输出打牢，属于“见题先别慌，先把变量起好名”的时期。

### 2) CUGB十九届程序设计赛：实战区

关键词：字符串统计、排序思路、比赛风格题目。

- [简单输出.cpp](CUGB十九届程序设计赛/简单输出.cpp)：中位值类基础逻辑
- [小吴想上清北.cpp](CUGB十九届程序设计赛/小吴想上清北.cpp)：子串计数
- [嘎嘎！逃离鸭科夫.cpp](CUGB十九届程序设计赛/嘎嘎！逃离鸭科夫.cpp)：多关键词统计
- [超级玛丽题（欲得一简便方法）.cpp](CUGB十九届程序设计赛/超级玛丽题（欲得一简便方法）.cpp)：字符画输出
- [可能是板子吧.cpp](CUGB十九届程序设计赛/可能是板子吧.cpp)：区间查询思路
- [牛神评犇大会.cpp](CUGB十九届程序设计赛/牛神评犇大会.cpp)：综合逻辑题

阶段评价：
开始进入“写得出来”和“写得稳”之间的拉扯区，代码风格逐渐向比赛靠拢。

### 3) Blue-bridge：蓝桥杯备赛

关键词：数论、质数判断。

- [16-A.cpp](Blue-bridge/16-A.cpp)：与素数相关的计数问题

阶段评价：
正式向算法竞赛题型靠拢，数学感与边界处理意识都在提升。

### 4) Group Programming Ladder Tournament：进阶段位赛

关键词：组合数学、博弈、数据处理。

- [L4_compet.cpp](Group%20Programming%20Ladder%20Tournament/L4_compet.cpp)：容斥思路
- [L5-box-game.cpp](Group%20Programming%20Ladder%20Tournament/L5-box-game.cpp)：博弈判断
- [L6 tem.cpp](Group%20Programming%20Ladder%20Tournament/L6%20tem.cpp)：结构化数据处理
- [RGB.cpp](Group%20Programming%20Ladder%20Tournament/RGB.cpp)：逻辑映射

阶段评价：
已经不是“会不会写循环”的问题，而是“能不能快速抽象题意并稳定实现”。

### 5) helpfulless：测试角落

- [vs test output.cpp](helpfulless/vs%20test%20output.cpp)：本地测试/调试用途

## 知识点分布

| 主题 | 涉及内容 |
|---|---|
| 基础语法 | 输入输出、分支循环、格式化 |
| 数学 | 四则运算、海伦公式、质数判断、容斥 |
| 字符串 | 字符转换、子串统计、多模式匹配 |
| 排序与数据处理 | 基础排序、结构体处理、条件映射 |
| 竞赛思维 | 边界分析、复杂逻辑拆分、模板化尝试 |

## 如何编译运行

本仓库代码为单文件 C++ 程序，可按题目分别编译。

### Windows (MinGW g++)

```bash
g++ -std=c++17 -O2 -Wall "路径/文件.cpp" -o "输出程序.exe"
```

示例：

```bash
g++ -std=c++17 -O2 -Wall "Enter_door_1/P1001.cpp" -o "P1001.exe"
./P1001.exe
```

## 当前风格说明

- 以“先 AC 再优化”为主
- 部分文件更偏题解草稿风格
- 命名与注释在逐步规范中

如果你在某个文件里看到了“朴素但有效”的写法，那大概率是当时比赛快结束了。

## 后续计划

- 给关键题目补上题意和思路注释
- 将高频技巧整理成可复用模板
- 对部分旧代码进行重构（变量命名、边界处理、可读性）

欢迎交流与指正。  
祝你我都能在下一场比赛里少写一行 bug，多拿一分罚时。

