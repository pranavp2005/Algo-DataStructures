class Solution {
private:
    bool checkPossible(vector<int>&weights, int capacity, int days) {
        int sum = 0;
        int daysSofar=0;
        
        for(int i =0; i<weights.size(); i++) {
            if(weights[i]>capacity) {
                return false;
            }
            if ( sum + weights[i] > capacity) {
                daysSofar++;
                sum = weights[i];
            }
            
            else {
                sum+=weights[i];
            }
            if(i==weights.size()-1) {
                    daysSofar++;
                }
        }
        
        return daysSofar<=days;
    }
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int lowerLimit = 1;
        int upperLimit=0;
        
        for(int i =0;i< weights.size(); i++) {
            upperLimit = upperLimit + weights[i];
        }
        
        int sumWeights = upperLimit;
        
        while(lowerLimit < upperLimit) {
            
            
            int mid = (lowerLimit + upperLimit)/2;
            cout<<lowerLimit<<" "<<mid<<" "<<upperLimit<< '\n';
             if(checkPossible(weights, mid, days)) {
                upperLimit = mid;
            }
            
            else {
                lowerLimit = mid+1;
            } 
            
        }
        
        return lowerLimit;
    }
};