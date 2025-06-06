class Solution {
public:
    vector<int> findTwoElement(vector<int>& arr) {
        int n = arr.size();
        vector<int> count(n, 0);
        int repeating = -1, missing = -1;

        
        for (int i = 0; i < n; i++) {
            count[arr[i] - 1]++;
        }

        
        for (int i = 0; i < n; i++) {
            if (count[i] == 0) {
                missing = i + 1;
            } else if (count[i] == 2) {
                repeating = i + 1;
            }
        }

        return {repeating, missing};
    }
};
