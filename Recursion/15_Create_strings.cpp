#include<bits/stdc++.h>
#define endl "\n"
using namespace std;

vector<string> ans;
void helper(int index,int size,vector<int>&f,string curr){
	if(index == size){
		ans.push_back(curr);
		return;
	}
	for(int i=0;i<26;i++){
		if(f[i]>0){
		f[i]--;
		helper(index+1,size,f,curr + char(i+'a'));
		f[i]++;
		}
		
	}
}


void ayan(){

string s;
cin>>s;
vector<int> f(26);
for (int i = 0; i < s.size(); ++i)
{
	f[s[i]-'a']++;
}

helper(0,s.size(),f,"");
cout<<ans.size()<<endl;
for(auto &x:ans)
	cout<<x<<endl;
}


int32_t main(){
 ios_base::sync_with_stdio(0);
    cin.tie(0);	
    
    ayan();

return 0;
} 
