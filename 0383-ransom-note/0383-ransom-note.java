class Solution {
    public boolean canConstruct(String ransomNote, String magazine) {
        if(magazine.length()<ransomNote.length()){
            return false;
        }
        HashMap<Character, Integer> mp1 = new HashMap();
        
        for(var c : magazine.toCharArray()){
            if(mp1.containsKey(c)){
                mp1.put(c, mp1.get(c) +1);
            }
            else{
                mp1.put(c,1);
            }
        }
        
        for(char ch : ransomNote.toCharArray()){
            if(!mp1.containsKey(ch) || mp1.get(ch)==0){
                return false;
            }
            mp1.put(ch, mp1.get(ch)-1 );
        }
        return true;
        
    }
}