#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, count=0;
	cin>>n;
	for(int i=1; i<=n; i++){
		int members, room_capacity;
		cin>>members>>room_capacity;
		if((room_capacity-members)>=2) count++;
	}
	cout<<count<<endl;
	return 0;
}