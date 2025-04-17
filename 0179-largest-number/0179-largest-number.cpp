class Solution {
public:
    static bool compare(const string &a, const string &b) {
        return a + b > b + a;
    }
    string largestNumber(vector<int>& nums) {
         vector<string> newi;
        for( int num:nums){
            newi.push_back(to_string(num));
        }

        sort(newi.begin(), newi.end(), compare);
        if(newi[0]== "0"){
            return "0";
        }  
        string result;
        for(auto s: newi){
            result+= s;
        }
        return result;
    }
};