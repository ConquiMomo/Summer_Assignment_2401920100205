class Solution {
public:
    string longestPalindrome(string s) {
        if (s.empty()) return "";
        string lps = "";

        int n = s.size();
        for (int i = 0; i < n; i++) {
            //Odd length palindromes
            int low = i;
            int high = i;
            while (low >= 0 && high < n && s[low] == s[high]) {
                low--;
                high++;
            }
            //Length formula: high - low - 1
            string palindrome = s.substr(low + 1, high - low - 1);
            if (palindrome.size() > lps.size()) {
                lps = palindrome;
            }

            //Even length palindromes
            low = i;
            high = i + 1;
            while (low >= 0 && high < n && s[low] == s[high]) {
                low--;
                high++;
            }
            //Length formula: high - low - 1
            palindrome = s.substr(low + 1, high - low - 1);
            if (palindrome.size() > lps.size()) {
                lps = palindrome;
            }
        }
        return lps;
    }
};
