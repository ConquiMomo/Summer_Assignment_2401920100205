bool isPalindrome(char* s) {
    int left=0,right=strlen(s)-1;
    while(left<right)
    {
        if(!isalnum(s[left])) left++; //if not alphanumeric then skip 
        else if(!isalnum(s[right])) right --; //if not alphanumeric then skip
        else if (tolower(s[left])!=tolower(s[right])) return false; //if at any point an alphabet is different from using both pointers string isn't plaindrome
        else
        {
            left++;
            right--;
        }
    }

return true;
    
}