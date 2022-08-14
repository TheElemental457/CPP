class Solution {
public:
vector<int> sortedSquares(vector<int>& nums) {
        vector<int>ans(nums.size());
        int left=0;
        int right=nums.size()-1;
        int index=nums.size()-1;
        while(left<=right){
            if(nums[left]*nums[left]<=nums[right]*nums[right]){
                ans[index]=nums[right]*nums[right];
                right--;
                index--;
            }
            
            else{
                ans[index--]=nums[left]*nums[left];
                left++;
            }
        }   
        return ans;
    }  
};
