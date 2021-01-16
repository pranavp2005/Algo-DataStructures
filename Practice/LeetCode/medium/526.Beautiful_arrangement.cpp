class Solution {
public:
    int count;
    void helper(int i,int n,int filled,vector<int> &visited){
        
        if(filled==n){
            count++;
            return;
        }
        for(int j=1;j<=n;j++){
            if((visited[j]!=1) && (i%j==0  || j%i ==0)){
                visited[j]=1;
                helper(i+1,n,filled+1,visited);
                visited[j]=0;
                
            }
        }
        
    }
     
    int countArrangement(int N) {
        count=0;
        vector<int> visited(N+1,0);
        helper(1,N,0,visited);
        return count;
    }
};