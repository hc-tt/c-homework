#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b,c;
	cin>>a>>b>>c;
	if(a>b&&a>c) 
		{
			cout<<a<<">";
			if (b>c) cout<<b<<">"<<c;
			else cout<<c<<">"<<b;
		}
	else if (b>a&&b>c) 
		{
			cout<<b<<">";
			if (a>c) cout<<a<<">"<<c;
			else cout<<c<<">"<<a;
		}
		
	else if (c>a&&c>b)
		{
			cout<<c<<">";	
			if (a>b) cout<<a<<">"<<b;
			else cout<<b<<">"<<a;
		}
	return 0;
}

