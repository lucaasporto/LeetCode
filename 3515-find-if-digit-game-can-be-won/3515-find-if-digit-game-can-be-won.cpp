class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        unsigned int sum_single_digits = 0, sum_double_digits = 0;

        for(int num : nums)
        {
            if(num < 10)
                sum_single_digits += num;
            else
                sum_double_digits += num;
        }

        return sum_double_digits != sum_single_digits;
    }
};