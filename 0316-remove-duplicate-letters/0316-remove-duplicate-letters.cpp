class Solution {
public:
    string removeDuplicateLetters(string s) {
        vector<int> last(26, -1);
        vector<bool> visited(26, false);
        
        int n = s.length();
        
        // Record the last occurrence of each character
        for (int i = 0; i < n; i++) {
            last[s[i] - 'a'] = i;
        }
        
        string result = "";
        
        for (int i = 0; i < n; i++) {
            char c = s[i];
            
            if (visited[c - 'a']) continue;
            
            // Remove characters bigger than current and appear later
            while (!result.empty() && result.back() > c && last[result.back() - 'a'] > i) {
                visited[result.back() - 'a'] = false;
                result.pop_back();
            }
            
            result.push_back(c);
            visited[c - 'a'] = true;
        }
        
        return result;
    }
};
