class Solution {

public:

    string clean(string s) {

        string str = "";

       
        for (int i = 0; i < s.length(); i++) {

            if ((s[i] >= 'a' && s[i] <= 'z') ||
                (s[i] >= 'A' && s[i] <= 'Z') ||
                (s[i] >= '0' && s[i] <= '9')) {

                str.push_back(s[i]);
            }
        }

        
        for (int i = 0; i < str.length(); i++) {

            if (str[i] >= 'A' && str[i] <= 'Z') {
                str[i] = str[i] - 'A' + 'a';
            }
        }

        return str;
    }


    bool isPalindrome(string s) {

        string str = clean(s);

        int start = 0;
        int end = str.length() - 1;

        while (start < end) {

            if (str[start] != str[end]) {
                return false;
            }

            start++;
            end--;
        }

        return true;
    }
};