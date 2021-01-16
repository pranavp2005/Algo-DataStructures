class Solution {
public:
    bool backspaceCompare(string S, string T) {
        
        
        stack<char> s;
        stack<char> t;
        int sp=0,tp=0;
        while(S[sp] != '\0')
        {
                if(S[sp]=='#'){
                    if(!s.empty())
                    {s.pop();}
                }
            else{s.push(S[sp]);
                 }
            sp++;
        }
        
        while(T[tp] != '\0')
        {
                if(T[tp]=='#'){
                    if(!t.empty())
                    {t.pop();}
                }
            else{t.push(T[tp]);
                 }
            tp++;
        }
        
        if(s.size() != t.size()){
            return false;
        }
        
        else{
            
            while(!s.empty() && !t.empty() ){
                if( s.top() != t.top()){
                    return false;
                }
                else{
                    s.pop();t.pop();
                }
            }
            return true;
        }
        
    }
};