class Solution {
public:
    bool isFreqSame(int freq1[26], int freq2[26]) {
        for (int i = 0; i < 26; i++) {
            if (freq1[i] != freq2[i])
                return false;
        }
        return true;
    }
    bool checkInclusion(string s1, string s2) {
        int freq[26] = {0};

        for (int i = 0; i < s1.size(); i++) {
            int idx = s1[i] - 'a';
            freq[idx]++;
        }
        int windsize = s1.size();

        for (int i = 0; i < s2.size(); i++) {
            int windidx = 0, idx = i;
            int wind_freq[26] = {0};
            while (windidx < windsize && idx < s2.size()) {
                wind_freq[s2[idx] - 'a']++;
                windidx++;
                idx++;
            }
            if (isFreqSame(freq, wind_freq))
                return true;
        }
        return false;
    }
};