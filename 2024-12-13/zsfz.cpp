#include<bits/stdc++.h>
using namespace std;
int main(){
	long long N,M;
	cin>>N;
	if (N<0) cout<<"-";
	M=abs(N)%10;
	if (M==0) N=abs(N)/10;
	while(N!=0){
		M=abs(N)%10;
		cout<<M;
		N=abs(N)/10;	
	}
	return 0;
}
