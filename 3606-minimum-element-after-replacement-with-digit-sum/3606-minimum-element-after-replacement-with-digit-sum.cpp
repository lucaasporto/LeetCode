class Solution {
public:
    int minElement(vector<int>& nums) {
        int sum = 0;
        int lowest = 10001;

        for(int num : nums)
        {
            while(num > 0)
            {
                sum += num % 10;
                num /= 10;
            }

            num = sum;
            lowest = min(lowest, sum);
            sum = 0;
        }

    return lowest;
    }
};