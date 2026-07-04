class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int st;
        int flag =0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                st = i;
                flag = 1;
                break;
            }   
        }
        if(flag==0){
            return {-1,-1};
        }
        int lt = st;
        for(int i= lt+1; i<nums.size();i++){
            if(nums[i] == target){
                lt =i;
            }
        } 
        return {st,lt}; 
    }
};