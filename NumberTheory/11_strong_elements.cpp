//https://www.codechef.com/practice/course/number-theory/INTNT01/problems/STRNG

#include<bits/stdc++.h>
#define endl "\n"
using namespace std;
#define int long long int
#define vi  vector<int>
#define vp  vector<pair<int,int>>
#define pb  push_back
#define all(v) v.begin(),v.end()
#define fl(i,a,n)  for(int i = (a); i < (n); i++)
#define ff  first
#define ss  second
#define pb push_back 
#define sz(x) (int)x.size()
#define mod 1000000007


// TC :-  nlog(max(ai));
int __gcd(int a ,int b){
	
    while (a > 0 && b > 0) {
        if (a > b) {
            a = a % b;
        }
        else {
            b = b % a;
        }
    }
    if (a == 0) {
        return b;
    }
    return a;	
}


void ayan(){

int n;
cin>>n;

vi v(n),pref(n),suff(n);
fl(i,0,n) cin>>v[i];

pref[0]=v[0];
suff[n-1]=v[n-1];

fl(i,1,n){
	pref[i]=__gcd(pref[i-1],v[i]);	
	
}
for(int i=n-2;i>=0;i--){
	suff[i] = __gcd(suff[i+1],v[i]);
}

int ans=0;
for(int i=0;i<n;i++){
	int ans1=0, ans2=0;
	if(i!=0)
		ans1 = pref[i-1];
	if(i!=n-1)
		ans2 = suff[i+1];
	
	if(__gcd(ans1,ans2)!=1)
		ans++;
}
cout<<ans<<endl;

}


int32_t main(){
 ios_base::sync_with_stdio(0);
    cin.tie(0);
int tt;
cin>>tt;

while(tt--){

	ayan();
}

return 0;
} 
