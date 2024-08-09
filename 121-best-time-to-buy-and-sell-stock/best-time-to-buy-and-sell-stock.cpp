class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int sum=INT_MAX;
        int profit=0;
        for(auto itr:prices){
            sum=min(sum,itr);
            profit=max(profit,itr-sum);
        }
        return profit;

    }
};