#include<bits/stdc++.h>

using namespace std;

int sum_arr(int *a,int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=a[i];
    }
    return sum;
}

 
int main(){
int t;cin>>t;

for(int i=0;i<t;i++)
{
    int n;
   cin>>n;
    int a[n];
   
    for(int j=0;j<n;j++)
    {
        cin>>a[j];
    }
    int t = sum_arr(a,n);
    int evenc=0,oddc=0;
    if(t%2==1){
        cout<<"YES"<<endl;
    }
   
   else
   {
    for(int k=0;k<n;k++)
    {
        
        if(a[k]%2==0)
        {
            evenc++;
        }
        
        if(a[k]%2==1){
            oddc++;
        }
    }
    
    if(oddc==0){
        cout<<"NO"<<endl;
    }
    
    else{
        if((oddc%2==0)&&(evenc==0)){
            cout<<"NO"<<endl;
        }
        
        else if((oddc%2==0)&&(evenc!=0)){
            cout<<"YES"<<endl;
        }
        
        
    }
   }
    
}
return 0;
}