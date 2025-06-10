class Solution {
public:
    int maxDifference(string s) {
        unordered_map<char,int> mp;
        int evenMin = INT_MAX;
        int oddMax = INT_MIN;
        int n = s.size();
        bool foundOdd = false;
        bool foundEven = false;
        for(int i=0;i<n;i++){
            mp[s[i]]++;
        }
        if(mp.size()<2){
            return 0;
        }
        for(auto const& [character, count]: mp){
            if(count %2 ==0){
                evenMin = min(evenMin, count);
                foundEven = true;
            }
            else{
                oddMax = max(oddMax, count);
                foundOdd = true;
            }
            
        }
        if (!foundOdd || !foundEven) {
            return 0; 
        }
        
        
        return oddMax - evenMin;
    }
};