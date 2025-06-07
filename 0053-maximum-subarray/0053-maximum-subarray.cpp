class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int max1 = nums[0]; 
        int Sum = nums[0];

        for (int i = 1; i < n; i++) {
            Sum = max(nums[i], Sum + nums[i]); 
            max1 = max(max1, Sum);             
        }
        
        return max1;
    }
};
