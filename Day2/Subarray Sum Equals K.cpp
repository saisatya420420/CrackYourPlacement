class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>m;
        m[0]=1;
        int s = 0,ans=0;
        for(int i=0;i<nums.size();i++){
            s+=nums[i];
            int d = s-k;
            if(m.find(d)!=m.end()){
                ans+=m[d];
            }
            m[s]++;
        }
        return ans;
    }
};
