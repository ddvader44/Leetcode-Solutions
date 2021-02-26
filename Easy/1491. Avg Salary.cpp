class Solution {
public:
    double average(vector<int>& salary) {
        int n = salary.size();
        int sum=0;
        int maxx = INT_MIN, minn = INT_MAX;
        for(int i=0;i<n;i++){
            sum += salary[i];
            minn = min(minn,salary[i]);
            maxx = max(maxx,salary[i]);
        }
        sum -= minn+maxx;
        return sum/((n-2)*1.0);
    }
};