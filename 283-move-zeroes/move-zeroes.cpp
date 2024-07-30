class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int left=0;
        int right=nums.size()-1;
        while(left<right){
            if(nums[left]==0){
                for(int j=left+1;j<nums.size();j++){
                    nums[j-1]=nums[j];
                }
                nums[right]=0;
                right--;
            }else{
                left++;
            }
        }
    }
};