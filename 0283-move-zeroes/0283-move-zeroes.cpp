class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int zero_position = 0;

        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i] != 0)
            {
                swap(nums[i], nums[zero_position]);
                zero_position++;
            }
        }
    }
};