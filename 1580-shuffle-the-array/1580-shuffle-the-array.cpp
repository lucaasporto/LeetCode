class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {

        vector<int> result(n*2);
        int j = 0;

        for(int i=0; i<result.size(); i++)
        {
            if(i % 2 == 0)
            {
                result[i] = nums[j];
                ++j;
            }
            else
            {
                result[i] = nums[n];
                ++n;
            }          
        }

        return result;
    }
};