class Solution {
public:
    string reverseWords(string s) {
        istringstream iss(s);
        string word, result;
        while (iss >> word) {
            result = word + (result.empty() ? "" : " ") + result;
        }
        return result;
    }
};
