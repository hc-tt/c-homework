/*
#92. 车厢重组
内存限制：256 MiB
时间限制：1000 ms
标准输入输出
题目类型：传统
评测方式：文本比较
上传者： admin
用户限制： Lv.0
题目描述
在一个旧式的火车站旁边有一座桥，其桥面可以绕河中心的桥墩水平旋转。一个车站的职工发现桥的长度最多能容纳两节车厢，如果将桥旋转180度，则可以把 相邻 两节车厢的位置交换，用这种方法可以重新排列车厢的顺序。

于是他就负责用这座桥将进站的车厢按车厢号从小到大重新排列。他退休之后，火车站决定将这一工作自动化，其中一项重要的工作是编一个程序，输入列车初始的车厢顺序，计算最少用多少步就能将车厢排序，输出最少的步数。

输入格式
第一行为一个正整数n(n<=10000)

第二行为n个整数，表示初始的车厢的顺序

输出格式
一个正整数，表示最少的旋转次数

样例
input
4
4 3 2 1

output
6
数据范围与提示
保证。n<=10^5

时间限制：1s

空间限制：256MB
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
    long long n, temp;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin>>a[i];
    }
    int k=0;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n -i - 1; j++) {
            if (a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                k++;
			}
        }
    }
	cout<<k<<endl;
    return 0;
}
