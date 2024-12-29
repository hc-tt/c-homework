/*#66. 编程求阿姆斯特朗数（又称水仙花数）
内存限制：256 MiB
时间限制：1000 ms
标准输入输出
题目类型：传统
评测方式：文本比较
上传者： FionaMeng
用户限制： Lv.0
题目描述
阿姆斯特朗数：

如果一个三位正整数等于其各个数字的立方和，则该数称为阿姆斯特朗数，如407=4^3+7^3+0^3
，试编程求出N以内的所有阿姆斯特朗数的个数。(100<=N<=999)

输入格式
输入一行，只有一个整数N

输出格式
输出只有一行（这意味着末尾有一个回车符号），包括1个整数。

样例
输入样例1:
999

输出样例1:
4

*/
#include<bits/stdc++.h>
using namespace std;
int main(){
	int N,a,b,c,d;
	cin>>N;
	d=0;
	for(int i=100;i<=N;i++){
		a=i%10;
		a=a*a*a;
		b=i/10%10;
		b=b*b*b;
		c=i/100;
		c=c*c*c;
		if(i==a+b+c)
		d++;
	}
	cout<<d;
	 return 0;
	}
