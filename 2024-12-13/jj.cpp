/*
#84. 奖金
内存限制：256 MiB
时间限制：1000 ms
标准输入输出
题目类型：传统
评测方式：文本比较
上传者： admin
用户限制： Lv.0
题目描述
企业发放的奖金根据利润提成。

利润低于或等于100000元的，奖金可提10%;

利润高于100000元，低于200000元（100000<I<=200000）时，低于利润低于或等于100000元的元的部分按10％提成，高于利润低于或等于100000元的元的部分，可提成 7.5%;

200000<I<=400000时，低于200000元部分仍按上述办法提成，（下同），高于200000元的部分按5％提成；

400000<I<=600000元时，高于400000元的部分按3％提成；

600000<I<1000000时，高于600000元的部分按1.5%提成；

I>=1000000时，超过1000000时元的部分按1%提成。从键盘输入当月利润I,求应发奖金总数。

输入格式
一个整数，当月利润。

输出格式
一个整数，奖金。

样例
input:
900

output:
90
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
	long long i;
	cin>>i;
	if(i<=100000){
		 i=i*10/100;
		 cout<<i;
	}
	if(i>100000&&i<=200000){
		i=100000*10/100+(i-100000)*7.5/100;
		cout<<i;
	}
	if(i>200000&&i<=400000){
		i=100000*10/100+100000*7.5/100+(i-200000)*5/100;
		cout<<i;
	}
	if(i>400000&&i<=600000){
		i=100000*10/100+100000*7.5/100+200000*5/100+(i-400000)*3/100;
		cout<<i;
	}
	if(i>600000&&i<=1000000){
		i=100000*10/100+100000*7.5/100+200000*5/100+200000*3/100+(i-600000)*1.5/100;
		cout<<i;
	}
	if(i>1000000) {
		i=100000*10/100+100000*7.5/100+200000*5/100+200000*3/100+400000*1.5/100+(i-1000000)*1/100;
		cout<<i;
	}
	return 0;
}
