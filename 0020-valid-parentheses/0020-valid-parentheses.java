class Solution {
    public boolean isValid(String s) {
        
        Stack<Character> stack = new Stack<>();
        stack.push(s.charAt(0));
        for(int i=1;i<s.length();i++){
            if(s.charAt(i)=='{'|| s.charAt(i)=='['|| s.charAt(i)=='('){
                stack.push(s.charAt(i));
            }
            else{
                if(stack.isEmpty()){
                    return false;
                }
                char top = stack.pop();
                if(s.charAt(i)==')' && top!= '('){
                    return false;
                }
                if(s.charAt(i)==']' && top!= '['){
                    return false;
                }
                if(s.charAt(i)=='}' && top!= '{'){
                    return false;
                }
            }
        }
            return stack.isEmpty();
   
    }
}