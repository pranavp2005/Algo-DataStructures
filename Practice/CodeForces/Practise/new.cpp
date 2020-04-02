#include <bits/stdc++.h>
using namespace std;



int d;

void swap(int i,int j,int arr[] ){
   if(arr[j]>0){
	arr[j]-=1;
	arr[i]+=1;
   d--;}
	
}

void dodo(int arr[]){
	int i=1,j=1;
	while(d!=0)
	{
		if(arr[1]>0){
			swap(0,1,arr);
		}
		else{
			while(arr[j]<=0){
			
			j++;
			}
			swap(j-1,j,arr);
			
			
		}
		
		
	}
	
}
 
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
		scanf("%d%d",&n,&d);
		
		
		int a[n];
		
		for(int i=0;i<n;i++){
			
			scanf("%d",&a[i]);
			
		}
		
		if(n==1){
			
			cout<<a[0]<<endl;
			
		}
		else{
		dodo(a);
		cout<<a[0]<<endl;}
		
    }
    return 0;
}