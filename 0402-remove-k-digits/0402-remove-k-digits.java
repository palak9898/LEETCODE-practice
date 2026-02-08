class Solution {
    public String removeKdigits(String num, int k) {
        
        Stack<Character> stack = new Stack<>();
        
        for(char ch : num.toCharArray()){
            while(!stack.isEmpty() && stack.peek()>ch && k>0){
                stack.pop();
                k--;
            }
            stack.push(ch);
        }

        while(k>0 && !stack.isEmpty()){
            stack.pop();
            k--;
        }

        String result = "";
        while(!stack.isEmpty()){
            result= stack.pop()+ result;
        }
        int index = 0;
        while (index < result.length() && result.charAt(index) == '0') {
            index++;
        }
        result = result.substring(index);
        if(result == ""){
            return "0";
        }
        return result;
    }
}