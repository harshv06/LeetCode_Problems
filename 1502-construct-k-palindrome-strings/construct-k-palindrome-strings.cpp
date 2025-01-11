class Solution {
public:
    bool canConstruct(string s, int k) {
    if (k > s.length()) return false; // Not enough characters for k palindromes

    unordered_map<char, int> charFrequency;
    for (char c : s) {
        charFrequency[c]++;
    }

    int oddCount = 0;
    for (auto &[ch, freq] : charFrequency) {
        if (freq % 2 != 0) {
            oddCount++; // Count characters with odd frequencies
        }
    }

    return oddCount <= k;
    }
};