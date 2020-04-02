#include <bits/stdc++.h>
using namespace std;
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(NULL);                \
    cout.tie(NULL);


    bool isPalindrome(string s){
        int len = s.length();
        for(int i=0;i<len/2;i++){
            if(s[i]==s[len-1-i]){
            }
            else{
                return false;
            }
        }
        return true;
    }
    int main(){

        int t;cin>> t;
        while(t--){
            string s;
            cin>>s;
            int size = s.length();
            string out;
            int maxlen =0;
            int start=0,end=0,flag=0;
            for(int i=0;i<size;i++)
            {
                
                for(int j=size-1;j>=0;j--)
                {
                    if(i > j)
                    {
                        flag=1;
                    break;
                }
                
                }
                
                
                if (flag==1)
                {
                    break;
                }

            }
            cout<<out<<'\n';



        }
        return 0;
    }