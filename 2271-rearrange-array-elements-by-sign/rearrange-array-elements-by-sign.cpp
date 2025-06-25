class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> ans(nums.size(),0);
        int pos=0,negative=1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<0){ans[negative]=nums[i];
                negative+=2;
            }else{
                ans[pos]=nums[i];
                pos+=2;
            }
        }
        return ans;
    }
};