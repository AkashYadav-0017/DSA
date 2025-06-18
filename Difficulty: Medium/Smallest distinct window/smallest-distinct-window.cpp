class Solution {
public:
    int findSubString(string& str) {
        int n = str.size();
        vector<int> count(256, 0);

        unordered_set<char> s(str.begin(), str.end());
        int total_distinct = s.size();

        int first = 0, second = 0, diff = 0;
        int len = n;
        diff = total_distinct;

        while (second < n) {
            if (count[str[second]] == 0)
                diff--;
            count[str[second]]++;
            second++;

            while (diff == 0) {
                len = min(len, second - first);
                count[str[first]]--;
                if (count[str[first]] == 0)
                    diff++;
                first++;
            }
        }

        return len;
    }
};
