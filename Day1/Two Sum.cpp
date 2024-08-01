class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>m;
        int idx=0;
        for(auto i:nums){
            int check = target-i;
            if (m.find(check) != m.end()) {
                return {m[check], idx};
            }
            m[i]=idx;
            idx++;
        }
        return {};
    }
};
