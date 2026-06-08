class Solution {
public:
    bool canConstruct(string r, string m) {
        unordered_map<char, int> mpp;
        for (int i = 0; i < m.size(); i++) {
            mpp[m[i]]++;
        }
        for (int i = 0; i < r.size(); i++) {
            if (mpp[r[i]] > 0)
                mpp[r[i]]--;
            else
                return false;
        }

        return true;
    }
};