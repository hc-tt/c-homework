#include<bits/stdc++.h>
using namespace std;
int a[102];
int main(){
	int i=0;
	while(1){
		cin>>a[i];
		if(a[i]==0)
		break;
		i++;
	}
	for(int j=i-1;j>=0;j--)
	printf("%d ",a[j]);
	return 0;
}
