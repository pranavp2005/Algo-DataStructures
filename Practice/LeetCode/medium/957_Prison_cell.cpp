class Solution {
public:
    vector<int> prisonAfterNDays(vector<int>& cells, int N) {
        int s=cells.size();
        vector<int> res(s,0);
        
        
        map<vector<int>, int> m{{cells, 0}};
        
         ///cell state,day
        unordered_map<int,vector<int>> days; ///which day has which state
          
        days[0] = cells;
        int day =0;
        int dayprev=0; 
        int offset=0;
        int flag=0;
        while(N--)
        {
            day++;
            
            
            for(int i=1;i<s-1;i++)
            {
                
                    if(cells[i-1]==cells[i+1]){
                        res[i]=1;
                    }
                else{
                    res[i]=0;
                }
            }
            
            if(m.find(res) != m.end())
            {
        
                dayprev = m[res];
                offset= day-dayprev;
                N = N % offset;
                offset =dayprev+N;
                res=days[offset];
               return res;
                
            }
            
            else{
                m[res]=day;
                days[day]=res;
            }
            
            for(int i=0;i<s;i++){
                cells[i]=res[i];
            }
            
            
        }
        
        return res;
    }
};