class Solution {
    public int[] topKFrequent(int[] nums, int k) {
        HashMap<Integer, Integer> mp = new HashMap<>();

        for(int i : nums){
            mp.put(i, mp.getOrDefault(i,0)+1);
        }
        PriorityQueue<Integer> pq = new PriorityQueue<>((a,b)-> mp.get(a)- mp.get(b));

        for(int key : mp.keySet()){
            pq.add(key);
            if(pq.size()> k){
                pq.poll();
            }
        }

        int arr[] = new int[k];
        int i=0;
        while(!pq.isEmpty()){
            arr[i++] = pq.poll();
        }
        return arr;

    }
}