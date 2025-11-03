class Solution {
public:
    int maxArea(vector<int>& temp) {
    int left=0;
    int right=temp.size()-1;
    int ans=0;
    
    while(left<=right){
        int num=temp[left];
        int num2=temp[right];
        int size=(right)-(left);
        int smaller=min(temp[left],temp[right]);
        ans=max(ans,(size*smaller));
        cout<<smaller<<" "<<ans<<endl;
        if(temp[left]<temp[right]){
            left++;
        }else{
            right--;
        }
    }
    return ans;
    }
};