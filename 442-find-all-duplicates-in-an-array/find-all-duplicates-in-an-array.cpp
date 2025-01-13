class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        map<int,int> freq;
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            freq[nums[i]]++;
            if(freq[nums[i]]>1){ans.push_back(nums[i]);}
        }
        return ans;
    }
};