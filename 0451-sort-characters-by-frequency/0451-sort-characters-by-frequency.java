class Solution {
    public String frequencySort(String s) {
        
        HashMap<Character ,Integer> mp = new HashMap<>();
        
        char[] arr = s.toCharArray();
        for(char i: arr){
            mp.put(i, mp.getOrDefault(i,0)+1);
        }
        PriorityQueue<Character> pq = new PriorityQueue<>((a,b)-> mp.get(b) - mp.get(a));

        for(char key : mp.keySet()){
            pq.add(key);
        }
        StringBuilder result = new StringBuilder();

        while (!pq.isEmpty()) {
            char ch = pq.poll();
            int freq = mp.get(ch);

            for (int i = 0; i < freq; i++) {
                result.append(ch);
        }
    }

        return result.toString();

    }
}