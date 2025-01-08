class Solution {
public:

    bool checkPrefixSuffix(string& s1,string& s2){
        int len1=s1.length();
        int len2=s2.length();

        if(len1>len2){return false;}

        if(s2.substr(0,len1)!=s1){return false;}
        if(s2.substr(len2-len1,len1)!=s1){return false;}
        return true;
    }

    int countPrefixSuffixPairs(vector<string>& words) {
        int mainAns = 0;
        bool ans = false;
        for (int i = 0; i < words.size() - 1; i++) {
            int n = words[i].size();
            string s1 = words[i];

            for (int j = i + 1; j < words.size(); j++) {
                string s2 = words[j];
                if(checkPrefixSuffix(s1,s2)){
                    mainAns++;
                }
            }
        }
        return mainAns;
    }
};