#include<bits/stdc++.h>
using namespace std;
int main(){
	int Max=-0x7f7f7f7f,i,n,x;	
	i=1;
	cin>>n;
	while(i<=n){
		cin>>x;
		if(x>Max)
		Max=x;
		++i;	
	}
	cout<<Max;
	return 0;
}
