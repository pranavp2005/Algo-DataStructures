#include <bits/stdc++.h>
using namespace std;
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(NULL);                \
    cout.tie(NULL);

long long findx(long long a[],int size)
{
sort(a,a+size);
return a[size-1];



}
    int main(){
        fast;
        int n; cin>>n;
        long long b[n];
        long long a[n];

        for (int  i=0;i<n;i++)
        {
            cin>>b[i];
            if(i==0){
                a[0]=b[0];
                
            }
            else if(i==1){
                a[1]=b[1]+a[0];
            }
            else{
                a[i]=b[i]+findx(a,i);
            }
        }
        for(int j=0;j<n;j++){
            cout<<a[j]<<" ";
        }



        return 0;
    }