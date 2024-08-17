#include <bits/stdc++.h>
using ll =long long ;
using namespace std;

int main(){
	int tt;
	cin>>tt;
	while(tt--){
		int m;
	cin>>m;
	int ans=0;
	while(m>0){
		ans+=m%10;
		m=m/10;
	}
	cout<<ans<<endl;
	}
	
	
	return 0;
}
