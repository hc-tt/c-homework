#include<bits/stdc++.h>
using namespace std;
int main(){
	double s,t;//s表示身高,t表示体重. 
	cin>>s>>t; 
	 if(t==(s-100)*0.9) cout<<"standard";
	 if(s*t>1.1*(s-100)*0.9) cout<<"fat";
	 if(s*t<0.9*(s-100)*0.9) cout<<"thin";
	 return 0;
}
