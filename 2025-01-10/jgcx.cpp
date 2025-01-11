/*#90. 角谷猜想
内存限制：256 MiB
时间限制：1000 ms
标准输入输出
题目类型：传统
评测方式：文本比较
上传者： FionaMeng
用户限制： Lv.0
题目描述
所谓角谷猜想，是指对于任意一个正整数，如果是奇数，则乘3加1，如果是偶数，则除以2，得到的结果再按照上述规则重复处理，最终总能够得到1。如，假定初始整数为5，计算过程分别为16、8、4、2、1。程序要求输入一个整数，将经过处理得到1的过程输出来。

输入格式
一个正整数N(N ≤ 2,000,000)。

输出格式
从输入整数到1的步骤，每一步为一行，每一部中描述计算过程。最后一行输出"End"。

如果输入为1，直接输出"End"。

样例
【输入样例】
5
【输出样例】
5*3+1=16
16/2=8
8/2=4
4/2=2
2/2=1
End

*/
#include<bits/stdc++.h>
using namespace std;
int main(){
	int N;
	cin>>N;
	while(N!=1){
		if(N%2==0){
		cout<<N<<"/2="<<N/2<<endl;
		N=N/2;
		}
		else{
			cout<<N<<"*3+1="<<N*3+1<<endl;
			N=N*3+1;
		}
	}
	cout<<"End";
	return 0;
}
