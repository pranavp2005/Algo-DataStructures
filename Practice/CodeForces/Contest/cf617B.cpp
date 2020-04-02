#include<bits/stdc++.h>

 using namespace std;
 
int main(){
	
	int t;
	cin>>t;
	
	for(int i=0;i<t;i++)
	{
		int flag =0;
		int spend=0;
			long int s=0;cin>>s;
			
		if(s<10)
		{
			
			cout<<s<<endl;
			flag =1;
		}
		
		else
		{
			while(s>0)
			{
			if(s>=10)
			{
			s=s-10;
			spend +=10;
			s+=1;
			}
			
			else
			{
				spend+=s;
				s=0;	
			}
			
			}
		
		}
		if(flag==0){
		cout<<spend<<endl;}
	}
	
	return 0;
}