class Solution {
public:
    int compress(vector<char>& chars) {
        int n= chars.size();
        int count =0;
        string str ="";
        int i=0,j=0;
        while( j< n){
            if(chars[i]==chars[j]){
                j++;
                count +=1;
            }
            else if( chars[i]!= chars[j]){
                
                if(count ==1){
                    str = str+ chars[i];
                }
                else{
                    string count1 = to_string(count);
                    str = str+ chars[i];
                    str = str + count1;
                }
                i=j;
                count =0;
            }
        }
        if (count > 0) {
            str += chars[i];
            if (count > 1) {
                str += to_string(count);
            }   
        }

        chars.clear();
        for(int i=0;i< str.size();i++){
            chars.push_back(str[i]);
        }
        return chars.size();
    }
};