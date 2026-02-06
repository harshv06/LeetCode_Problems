class Solution {
public:

    vector<vector<int>> ans;
    void explore(int index,int remaining,vector<int>& curr,vector<int>& candidates){
        if(remaining==0){
            ans.push_back(curr);
            return;
        }

        for(int i=index;i<candidates.size();i++){
            if(i>index && candidates[i]==candidates[i-1]) continue;
            if (candidates[i]>remaining) break;
            curr.push_back(candidates[i]);
            explore(i+1,remaining-candidates[i],curr,candidates);
            curr.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<int> curr;
        explore(0, target, curr,candidates);
        return ans;
    }
};