class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int ans=0;
        int size=pref.size();
        for(int i=0;i<words.size();i++){
            string n=words[i];
            string s1=n.substr(0,size);
            if(s1==pref){ans++;}
        }
        return ans;
    }
};