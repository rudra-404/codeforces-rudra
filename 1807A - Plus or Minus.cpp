#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, a, b, c;
	cin>>n;
	for(int i=1; i<=n; i++){
		cin>>a>>b>>c;
		if(c==(a+b)) cout<<"+"<<endl;
		else cout<<"-"<<endl;
	}
	return 0;
}