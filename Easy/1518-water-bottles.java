class Solution {
    public int numWaterBottles(int n, int e) {
        int count = n;
        while(n >= e) {
            count += (n/e);
            n = (n/e) + (n%e);
        }
        return count;
    }
}
