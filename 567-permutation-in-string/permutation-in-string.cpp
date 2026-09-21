class Solution {
public:
    bool checkInclusion(string s1, string s2) {

        if (s1.length() > s2.length())
            return false;

        int a[26] = {0};
        int b[26] = {0};

        for (int i = 0; i < s1.length(); i++) {
            int index = s1[i] - 'a';
            a[index]++;
        }

        for (int i = 0; i < s1.length(); i++) {
            int index = s2[i] - 'a';
            b[index]++;
        }

        for (int i = s1.length(); i < s2.length(); i++) {

            bool same = true;

            for (int j = 0; j < 26; j++) {
                if (a[j] != b[j])
                    same = false;
            }

            if (same)
                return true;

            int addIndex = s2[i] - 'a';
            b[addIndex]++;

            int removeIndex = s2[i - s1.length()] - 'a';
            b[removeIndex]--;
        }

        for (int j = 0; j < 26; j++) {
            if (a[j] != b[j])
                return false;
        }

        return true;
    }
};