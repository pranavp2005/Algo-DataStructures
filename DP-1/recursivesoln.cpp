#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int price[10];

int profit(int start,int end,int year){
    
    
    if(start==end)
    {
        return year*price[start];
    }
    
    return max((profit(start+1,end,year+1)+year*price[start]),(profit(start,end-1,year+1)+year*price[end]));
}

int main(){
    int n;cin>>n;
    
    for(int i=0;i<n;i++){
        cin>>price[i];
    }
    
    int pro = profit(0,n-1,1);
    cout << pro<<endl;
    


    return 0;
}