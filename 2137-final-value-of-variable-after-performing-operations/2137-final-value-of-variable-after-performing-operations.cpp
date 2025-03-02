class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {

        int result = 0;

        for(string command : operations)
        {
            if(command[1] == '-')
                --result;
            else
                ++result;
        }

        return result;
    }
};