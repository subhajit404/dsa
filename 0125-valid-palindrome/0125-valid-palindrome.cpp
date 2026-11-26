class Solution {
public:
    bool isPalindrome(string s) {
        string str = "";
        int n = s.length();
        for (int i = 0; i < n; i++) {
            if ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z'))
                str += tolower(s[i]);
            else if (s[i] >= '0' && s[i] <= '9')
                str += s[i];
        }
        int i = 0, j = str.length() - 1;
        while (i < j) {
            if (str[i++] != str[j--])
                return false;
        }
        return true;
    }
};