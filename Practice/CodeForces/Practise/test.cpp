#include<bits/stdc++.h>


using namespace std;


bool possible(char a,char b,char c){
	if(a!=c && b!=c){
	
	return false;
	}
	
	else
		return true;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;cin>>t;
	while(t--){
	
	string a,b,c;
	cin>>a>>b>>c;
	int n=a.size();
	bool s;
	for(int j=0;j<n;j++)
	{
		s=possible(a[j],b[j],c[j]);
		if(s){}
		
		else{
			cout<<"NO"<<endl;
			break;
		}
		
	}
	if(s){
		cout<<"YES"<<endl;
	}
	
	
	}
	return 0;
}