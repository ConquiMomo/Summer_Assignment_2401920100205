class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        int first = 0, last = 0;
        int maxi = 0;
        unordered_map<int, int> hash;

        for (int i = 0; i < 256; ++i) {
            hash[i] = -1;
        }

        while (last < s.size()) {
            if (hash[s[last]] != -1) {
                if (hash[s[last]] >=first) {
                    first = hash[s[last]] + 1;
                }
            }
            int len = last - first + 1;
            maxi = max(maxi, len);
            hash[s[last]] = last;
            last++;
        }
        return maxi;
    }
};