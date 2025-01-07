class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int> Map;
        for(auto num : arr){
            Map[num]++;
        }

        set<int> Set;
        for (auto itr : Map){
            if(Set.find(itr.second) != Set.end()){
                return false;
            }
            Set.insert(itr.second);
        }

        return true;
    }
};