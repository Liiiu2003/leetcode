class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        int len = nums.size();
        vector<vector<int>> result;
        perm(result, nums, 0, len);
        return result;
    }

    void perm(vector<vector<int>> &result , vector<int>& nums, int i, int n){

        if( i == n )
            result.push_back(nums);
        for( int j = i; j < n ; j++ ) {
            swap( nums[i], nums[j] );
            perm( result, nums, i+1, n );
            swap( nums[i], nums[j] );
        }
    } 

};
