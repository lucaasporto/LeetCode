class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int exclusive_or = 0;

        for(int i=0; i<nums.size(); i++)
            exclusive_or ^= nums[i];

        return exclusive_or;
    }
};