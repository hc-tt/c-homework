#include<bits/stdc++.h>
using namespace std;
int main(){
	double s,t;//s��ʾ���,t��ʾ����. 
	cin>>s>>t; 
	 if(t==(s-100)*0.9) cout<<"standard";
	 if(s*t>1.1*(s-100)*0.9) cout<<"fat";
	 if(s*t<0.9*(s-100)*0.9) cout<<"thin";
	 return 0;
}
