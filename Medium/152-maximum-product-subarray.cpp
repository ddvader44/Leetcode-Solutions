class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int res=INT_MIN;
        int min_so_far=1 , max_so_far=1;
        for(int i=0;i<nums.size();i++)
        {
           
            int a = max_so_far * nums[i];
            int b = min_so_far * nums[i];
            max_so_far = max(nums[i],max(a,b));
            min_so_far = min(nums[i],min(a,b));
            res = max(res,max_so_far);
        }
    return res;
    }
};
