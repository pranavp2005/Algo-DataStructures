class Solution {
public:
    int res;
 void helper(string& tiles,vector<int> &visited,int n){
     
     for(int i =0;i<n;i++){
         if(visited[i] == 0){
             visited[i]=1;
             res++;
             helper(tiles,visited,n);
             visited[i]=0;
         
         
         while(i+1<n && tiles[i]==tiles[i+1])
             i++;
         }
         
     }
 }
    int numTilePossibilities(string tiles) {
       int n=tiles.length();
        vector<int> visited(n,0);
      sort(tiles.begin(),tiles.end());
        helper(tiles, visited,n);
        return res;
    }
};