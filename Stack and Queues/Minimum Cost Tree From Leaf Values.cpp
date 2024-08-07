class Solution {
public:
	int mctFromLeafValues(vector<int>& arr) {
		stack<int> st;
		st.push(INT_MAX);
		int ans=0;
		for(int i=0;i<arr.size();i++)
		{
			while(arr[i]>st.top())
			{
				int temp=st.top();
				st.pop();
				ans+=temp*min(arr[i],st.top());
			}
			st.push(arr[i]);
		}
		while(st.size()>=3)
		{
			int cur=st.top();
			st.pop();
			ans+=cur*st.top();
		}
		return ans;
	}
};
