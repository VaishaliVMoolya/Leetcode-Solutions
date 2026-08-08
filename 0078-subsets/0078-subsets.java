class Solution {
    public List<List<Integer>> subsets(int[] nums) {
        List<List<Integer>> al = new ArrayList<>();
        al.add(new ArrayList<>());
        for (int j = 0; j < nums.length; j++) {
            int currentSize = al.size();
            for (int i = 0; i < currentSize; i++) {
                List<Integer> newSubset = new ArrayList<>(al.get(i));
                newSubset.add(nums[j]);
                al.add(newSubset);
            }
        }
        return al;
        
    }
}