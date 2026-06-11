#include <string>
#include <algorithm> 
using namespace std;

class Solution {
public:

    void reverseString(string& s, int left, int right) {
        while (left < right) {
            swap(s[left], s[right]);
            left++;
            right--;
        }
    }

    string reverseWords(string s) {
        int left = 0;
        int right = 0;
        int n = s.length(); 

        while (right < n) {
            if (s[right] == ' ') {
                
                reverseString(s, left, right - 1);
                left = right + 1; 
            }
            right++;
        }
        

        reverseString(s, left, right - 1);
      
        return s; 
    }
};
