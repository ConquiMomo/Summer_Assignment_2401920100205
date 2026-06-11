class Solution {
public:
    string decodeString(string s) {
        stack<int> counts;
        stack<string> resultStack;
        string currentString = "";
        int currentNumber = 0;

        for (int i = 0; i < s.size(); i++) {
            char c = s[i];

            if (isdigit(c)) {
                
                currentNumber = currentNumber * 10 + (c - '0');
            } else if (c == '[') {
               
                counts.push(currentNumber);
                resultStack.push(currentString);

                currentNumber = 0;
                currentString = "";
            } else if (c == ']') {
                
                int repeatCount = counts.top();
                counts.pop();

                
                string decodedSegment = resultStack.top();
                resultStack.pop();

                
                while (repeatCount > 0) {
                    decodedSegment += currentString;
                    repeatCount--;
                }

                currentString = decodedSegment;
            } else {
                
                currentString += c;
            }
        }

        
        return currentString;
    }
};