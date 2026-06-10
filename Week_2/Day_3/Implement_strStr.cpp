class Solution {
public:
    int strStr(string hay, string nee) {

        if (nee.size() > hay.size())
            return -1;

        for (int i = 0; i < hay.size(); i++) {
            if (hay.substr(i, nee.size()) == nee)
                return i;
        }
        return -1;
    }
};