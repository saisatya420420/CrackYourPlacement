class Solution {
public:
//https://youtu.be/7MIXlgBfr_U?feature=shared
    vector<int> dailyTemperatures(vector<int>& t) {
        stack<pair<int,int>>st;
        int n = t.size();
        vector<int>v;
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && t[i]>=st.top().first){ 
                st.pop();
            }
            if(st.empty()) v.push_back(0);
            else v.push_back(st.top().second-i);
            st.push({t[i],i});
        }
        reverse(v.begin(),v.end());
        return v;
    }
};
