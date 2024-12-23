#include<bits/stdc++.h>
using namespace std;
int main(){
	int m,n,sum;
	cin>>m>>n;
	sum=0;
	for( m;m<=n;m++){
		if(m%2!=0) 
			{
				sum+=m;
			}
	}
	cout<<sum;
	return 0;
}
