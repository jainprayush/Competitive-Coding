//Link to the problem: https://leetcode.com/problems/decompress-run-length-encoded-list/

class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> ans;
        int i;
        for(i=0;i<nums.size();i+=2)
        {
            while(nums[i]--)
            {
                ans.push_back(nums[i+1]);
            }
        }
        return ans;
        
    }
};
