class Solution {
public:
    long long minSum(vector<int>& nums1, vector<int>& nums2) {
        int count1 = std::count(nums1.begin(), nums1.end(), 0);
        int count2 = std::count(nums2.begin(), nums2.end(), 0);
        long long sum1 = std::accumulate(nums1.begin(), nums1.end(), 0LL);
        long long sum2 = std::accumulate(nums2.begin(), nums2.end(), 0LL);
        if ( count1 == 0 && count2 + sum2 > sum1 ) return -1;
        if ( count2 == 0 && count1 + sum1 > sum2 ) return -1;
        return sum1+count1 < sum2+count2 ? sum2+count2 : sum1+count1;
        
    }
};
