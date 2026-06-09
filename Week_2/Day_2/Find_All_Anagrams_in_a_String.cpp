class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        unordered_map<char, int> mpp1;
        vector<int> ans;

        if (s.size() < p.size())
            return ans;

        int count = p.size();
        for (int i = 0; i < p.size(); i++) {
            mpp1[p[i]]++;
        }

        unordered_map<char, int> mpp2;
        int i = 0;
        while (i < s.size()) {
            mpp2[s[i]]++;
            if (i >= p.size()) {
                if (--mpp2[s[i - p.size()]] == 0)
                    mpp2.erase(s[i - p.size()]);
            }
            if (mpp1 == mpp2)
                ans.push_back(i - p.size() + 1);
            i++;
        }
        return ans;
    }
};