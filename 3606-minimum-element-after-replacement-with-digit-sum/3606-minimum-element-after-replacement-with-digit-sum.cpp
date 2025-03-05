class Solution {
public:
    int minElement(vector<int>& nums) {
        int sum = 0;
        int lowest = 10001;

        for(int i=0; i<nums.size(); i++)
        {
            while(nums[i] > 0)
            {
                sum += nums[i] % 10;
                nums[i] /= 10;
            }

            nums[i] = sum;

            if(sum < lowest)
                lowest = sum;

            sum = 0;
        }

    return lowest;
    }
};