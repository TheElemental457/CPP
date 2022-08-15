//https://leetcode.com/problems/search-insert-position/
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int first=0; 
        int last=nums.size()-1;
        int mid=0;
        while(last>first){
            mid=(last+first)/2;
            if(nums[mid]==target){
                return mid;
            }else if(target>nums[mid]){
                first=mid+1;
            }else{
                last=mid-1;
            }
        }
        if(target>nums[first]){
            return first+1;
        }
        return first;
    }
};
