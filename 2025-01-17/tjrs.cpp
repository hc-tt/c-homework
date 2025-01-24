#include<bits/stdc++.h>
using namespace std;	
int n,m,sum,a[102];
double j;
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		sum+=a[i];
	}
	j=sum*1.0/n;
	for(int i=1;i<=n;i++){
		if(a[i]<j){
			m++;
		}
	}
	cout<<m;
	return 0;
}
