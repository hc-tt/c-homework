#include<bits/stdc++.h>
using namespace std;
int main(){
	long long a,i;
	bool flag=1;
	cin>>a;
	for(i=2;i<=sqrt(a);i++)
		{
			if(a%i==0) flag=0;
			
		}
	if (flag) 
		{
			cout<<"Yes";
		} 
	else
		{
			cout<<"No";
		}
	return 0;
}
