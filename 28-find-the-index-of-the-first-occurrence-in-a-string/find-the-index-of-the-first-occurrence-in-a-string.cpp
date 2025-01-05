class Solution {
public:
    int strStr(string haystack, string needle) {
        auto it=haystack.find(needle);
        int ans=it==string::npos?-1:it;
        return ans;
    }
};