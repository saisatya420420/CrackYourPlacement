class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0,j=0;
        int n = nums.size();
        while(j<nums.size()){
            nums[i]=nums[j];
            while(j<nums.size() && nums[i]==nums[j])j++;
            i++;
        }
        return i;
    }
};
