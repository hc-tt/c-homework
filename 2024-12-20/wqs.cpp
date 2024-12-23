#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,sum;
	sum=0;
	cin>>n;
	for(int i=1;i<n;i++)
		{
			if(n%i==0) 
			{
				sum+=i;
			}
			
		}
	if(sum==n){
		cout<<"Perfect";
	}
	else if(sum>n){
		cout<<"Deficient";
	}
	else {
		cout<<"Abundant";
	}
	return 0;
}
