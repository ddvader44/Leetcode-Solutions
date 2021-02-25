class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        vector<int> nums3;
        for(int i=0;i<n;i++){
            nums3.push_back(nums1[i]);
        }
        for(int i=0;i<m;i++){
            nums3.push_back(nums2[i]);
        }
        int size = nums3.size();
        sort(nums3.begin(),nums3.end());
        if(size%2==1){
            return nums3[(size-1)/2];
        }else{
            return (nums3[size/2]+nums3[(size)/2-1])/2.0;
        }
        
    }
};