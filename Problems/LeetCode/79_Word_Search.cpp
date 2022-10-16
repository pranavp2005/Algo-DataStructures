class Solution {
public:
    bool existshelper(string word,int k,vector<vector<char>> &A,vector<vector<int>> &visited,int n,int m,int posi,int posj){
        
        if(k == word.length()){
            return true;
        }
        
        if(posi < 0 || posi >= n || posj <0 || posj>=m ){
            return false;
        }
        
        if(visited[posi][posj]==1 || A[posi][posj] != word[k]) return false;
        
        visited[posi][posj]=1;
        bool res = (existshelper(word,k+1,A,visited,n,m,posi+1,posj)  ||  existshelper(word,k+1,A,visited,n,m,posi-1,posj) ||existshelper(word,k+1,A,visited,n,m,posi,posj+1)  ||existshelper(word,k+1,A,visited,n,m,posi,posj-1));
        visited[posi][posj]=0;
        return res;
    }
    bool exist(vector<vector<char>>& board, string word) {
        
         int n=board.size();
        int m=board[0].size();
        vector<vector<int>> visited(n,vector<int>(m,0));
       
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(board[i][j]==word[0])
                {
                    bool res = existshelper(word,0,board,visited,n,m,i,j);
                    
                if(res) return res;
                }
            }
        }
        return false;
    }
};