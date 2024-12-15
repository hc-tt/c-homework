#include<bits/stdc++.h>
using namespace std;
int main(){
	int sum,x,i,n;
	scanf("%d",&n);
	sum=0;
	i=1;
	while(i<=n){
		scanf("%d",&x);
		sum=sum+x;
		i=i+1;
	}
	printf("%d %.5lf",sum,sum*1.0/n);
	return 0;
}
