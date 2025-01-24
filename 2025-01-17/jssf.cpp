#include<bits/stdc++.h>
using namespace std;
float p[10]={28.9,32.7,45.6,78,35,86.2,27.8,43,56,65},a,f,sum;
int main (){
	for(int i=0;i<10;i++){
		cin>>a;
		sum+=a*p[i];
	}
	cout<<sum;
	return 0;
}
