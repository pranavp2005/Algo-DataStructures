#include<bits/stdc++.h>
///#define fr(i,a,b) for(long long i=a;i<b;i++)
#define ll long long
 using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;
	while(t--){
	int n;cin>>n;
	int A[n];
	for(int i=0;i<n;i++){
		cin>>A[i];	
	}
	int mx;
	
	for(int j=0;j<n;j++){
		for(int k=0;k<n;k++){
			
			int km= abs(A[j]-A[k]) +abs(k-j);
			mx = max(km,mx);
		}
		
	}
	cout<<max<<endl;
	
	
	
	}
	return 0;
}