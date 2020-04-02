#include<bits/stdc++.h>
using namespace std;
 

int main()
{
    int t;
    cin>>t;
    for(int i=0 ; i<t;i++)
	{
        long A,B,C,n;
		cin>>A;
        cin>>B;
        cin>>C;
        cin>>n;
        int arr[3];
		arr[0]=A;arr[1]=B;arr[2]=C;
		sort(arr,arr+3);
		
		if(((n-arr[2]-arr[2]+arr[1]+arr[0])<0) || (((n-arr[2]-arr[2]+arr[1]+arr[0])%3)!=0)){
			
			cout<<"NO";
		}
		else
			cout<<"YES";
		
    
    
    }
    return 0;
}