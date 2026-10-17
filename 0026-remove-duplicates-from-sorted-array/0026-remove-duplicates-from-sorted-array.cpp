class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int position=0;
        for(int i=1;i<nums.size();i++){
            if(nums[i] != nums[position]){
                position++;
                nums[position] = nums[i];
            }
        }
        return position+1;
    }
};