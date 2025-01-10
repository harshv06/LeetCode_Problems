class Solution {
public:
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        unordered_map<char, int> maxFreq;
        for (auto val : words2) {
            unordered_map<char, int> freq;
            for (char c : val) {
                freq[c]++;
                maxFreq[c] = max(freq[c], maxFreq[c]);
            }
        }

        vector<string> mainAns;

        for (int i = 0; i < words1.size(); i++) {
            unordered_map<char, int> freq;
            for (char c : words1[i]) {
                freq[c]++;
            }
            bool isUniversal = true;
            for (const auto [c, count] : maxFreq) {
                if (freq[c]<count){
                    isUniversal=false;
                    break;
                }
            }

            if(isUniversal){
                mainAns.push_back(words1[i]);
            }
        }

        return mainAns;
    }
};