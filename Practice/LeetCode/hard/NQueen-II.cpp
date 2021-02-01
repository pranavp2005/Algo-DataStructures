class Solution {
public:
    int sol=0;
    bool canplace(vector<vector<int>> &A,int row,int col,int n)
    {
        int j=0,i=0;
        for(j=row-1;j>=0;j--)
        {
        if(A[j][col]==1)
            {
            return false;   
            }
        }
        
        for(j=row-1,i=col-1;j>=0 && i>=0;i--,j--)
        {
            if(A[j][i]==1)
            {
                return false;
            }
        }
        
        for(j=row-1,i=col+1;j>=0 && i<n;j--,i++){
            if(A[j][i]==1){
                return false;
            }
        }
        
        return true;
    }
    void totalNQueensHelper(vector<vector<int>> &A,int row,int n){
        if(row==n){
            sol++;
            return;
        }
        
        for(int col =0;col<n;col++){
            
            if(canplace(A,row,col,n))
            {
                A[row][col]=1;
                totalNQueensHelper(A,row+1,n);
                A[row][col]=0;
            }
            
        }
    }
    
    int totalNQueens(int n) {
        sol=0;
        if(n==1)
            return 1;
        
        
        else{
        vector<vector<int>> A(n,vector<int>(n,0));
        
        totalNQueensHelper(A,0,n);
        return sol;}
        
    }
};