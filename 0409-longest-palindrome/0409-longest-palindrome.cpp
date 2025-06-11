class Solution {
public:
    int longestPalindrome(string s) {
        vector<int> lower(26, 0), upper(26, 0);
        for (int i = 0; i < s.size(); i++) {
            if (s[i] >= 'a' && s[i] <= 'z') {
                lower[s[i] - 'a']++;
            } else {
                upper[s[i] - 'A']++;
            }
        }

        int length = 0;
        bool hasOdd = false;

        // Add even counts and track if we have any odd count (to place at center)
        for (int i = 0; i < 26; i++) {
            length += (lower[i] / 2) * 2;
            if (lower[i] % 2 == 1) hasOdd = true;

            length += (upper[i] / 2) * 2;
            if (upper[i] % 2 == 1) hasOdd = true;
        }

        // You can put one odd character in the center of the palindrome
        if (hasOdd) length += 1;

        return length;
    }
};
