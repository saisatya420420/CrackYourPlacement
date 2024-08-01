/*Dutch National Flag Algorithm*/
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int i=0,j=0,k=nums.size()-1;
        while(j<=k){
            if(i<j && nums[j]==0){
                swap(nums[i],nums[j]);
                i++;
            }
            else if(j<k && nums[j]==2){
                swap(nums[j],nums[k]);
                k--;
            }
            else 
                j++;
        }   
    }
};


/*count sort*/
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int z=0,o=0,t=0;
        for(auto i:nums){
            if(i==0) z++;
            else if(i==1) o++;
            else t++;
        }
        int i=0;
        while(z--){
            nums[i++]=0;
        }
        while(o--){
            nums[i++]=1;
        }
        while(t--){
            nums[i++]=2;
        }
    }
};
