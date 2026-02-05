class Solution {
public:

    int findFirstCount(vector<int> arr,int target){
    int left=0;
    int right=arr.size()-1;
    int ans=-1;
    while(left<=right){
        int mid=(left+right)/2;
        if(arr[mid]==target){
            ans=mid;
            right=mid-1;
        }else if(arr[mid]>target){
            right=mid-1;
        }else{
            left=mid+1;
        }
    }
    return ans;
}

int findLastCount(vector<int>& nums,int target){
    int left=0;
    int right=nums.size()-1;
    int ans=-1;
    while(left<=right){
        int mid=(left+right)/2;
        if(nums[mid]==target){
            ans=mid;
            left=mid+1;
        }else if(nums[mid]>target){
            right=mid-1;
        }else{
            left=mid+1;
        }
    }
    return ans;
}


    vector<int> searchRange(vector<int>& nums, int target) {
        int end=findLastCount(nums,target);
        int start=findFirstCount(nums,target);
        vector<int> ans;
        ans.push_back(start);
        ans.push_back(end);
        return ans;
    }
};