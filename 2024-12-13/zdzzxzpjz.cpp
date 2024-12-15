#include<bits/stdc++.h>
using namespace std;
int main(){
	int Max=-0x7f7f7f7f,Min=0x7f7f7f7f,i,n,x,Sum,Avg;	
	i=1,Sum=0,Avg=0;
	cin>>x;
	while(i<=x){
		cin>>n;
		if(n>Max) Max=n;
		if(n<Min) Min=n;
		Sum=Sum+n;
		Avg=Sum/x;
		++i;
	}
	cout<<Max<<endl;
	cout<<Min<<endl;
	cout<<Avg;
	return 0;
}
