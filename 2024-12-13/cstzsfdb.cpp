#include<bits/stdc++.h>
using namespace std;
int main(){
	double a,b;//a表示身高,b表示体重 
	cin>>a>>b;
	if(b==(a-100)*0.9) cout<<"standard";
	else if(a>1.1*(a-100)*0.9) cout<<"fat";
	else if(a<0.9*(a-100)*0.9) cout<<"thin"; 
	return 0;
}
