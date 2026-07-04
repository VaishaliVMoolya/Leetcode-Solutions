class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int a;
        int flag=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i] == target){
                a=i;
                flag = 1;
                break;
            }
        }
        if(flag == 0){
            nums.push_back(target);
            sort(nums.begin(),nums.end());
            for(int i=0;i<nums.size();i++){
                if(nums[i] == target){
                    a=i;
                    flag = 1;
                    break;
                }
            }
        }
        return a;
    }
};