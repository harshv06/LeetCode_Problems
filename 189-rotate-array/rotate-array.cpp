class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k=k%nums.size();
        int n=nums.size()-k;
        if(nums.size()==1 || k==0){
            return;
        }
        reverse(nums.begin(),nums.begin()+n);
        reverse(nums.begin()+n,nums.end());
        reverse(nums.begin(),nums.end());
    }
};