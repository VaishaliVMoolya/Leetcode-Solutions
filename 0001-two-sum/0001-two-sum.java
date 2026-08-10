class Solution {
    public int[] twoSum(int[] nums, int target) {
        HashMap<Integer, Integer> map = new HashMap<>();
        for (int i = 0; i < nums.length; i++) {
            int current = nums[i];
            int required = target - current;
            if (map.containsKey(required)) {
                return new int[] {
                    i,
                    map.get(required)
                };
            }
            map.put(current,i);
        }
        return new int[] {};
    }
}