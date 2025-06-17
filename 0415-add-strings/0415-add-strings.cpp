class Solution {
public:
    string addStrings(string num1, string num2) {
        int index1 = num1.size() - 1;
        int index2 = num2.size() - 1;
        int carry = 0;
        string ans = "";

        while (index1 >= 0 || index2 >= 0 || carry) {
            int digit1 = (index1 >= 0) ? num1[index1--] - '0' : 0;
            int digit2 = (index2 >= 0) ? num2[index2--] - '0' : 0;

            int sum = digit1 + digit2 + carry;
            carry = sum / 10;
            ans += (sum % 10) + '0';
        }

        reverse(ans.begin(), ans.end());
        return ans;
    }
};
