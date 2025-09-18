class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int n = numBottles;
        int k = numExchange;

        int t=n+(n-1)/(k-1);
        return t;
    }
};
