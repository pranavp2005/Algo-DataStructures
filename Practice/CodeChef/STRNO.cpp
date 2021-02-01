////Idea for solution 
/*
K prime factor means the number will be of te form A = p1^a1 * p2^a2 ....* pk^ak
so the number of factors  X =(a1+1)*(a2+1)...(ak+1)

so if we can represent x as product of k numbers our job is done


*/



#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){

    int t;cin>>t;
    while(t--){
    ll x,k;cin>>x>>k;

    vector<int> v;
    //since 2 is the only even prime we check
    while(x %2 ==0)
    {
        v.push_back(2);
        x=x/2;

    }

    for(int i=3;i*i<=x;i=2+i)
    {
        
        while(x%i == 0)
        {
            v.push_back(i);
            x=x/i;
        }
    }

     if(x>2){
         v.push_back(x);
     }

    if(v.size()>=k){
        cout<<'1'<<'\n';
    }

    else
    {
        cout<<'0'<<'\n';
    }
    


    }

    return 0;
}