class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int check;
        vector<int> result(2);
        for(int l=0; l<nums.size(); l++){
            check=nums[l];
            for(int i=(l+1); i<nums.size(); i++){
                if(nums[l]+nums[i]==target){
                    result[0]=l;
                    result[1]=i;
                    break;
                }
            }            
        }
        return result;
    }
};
