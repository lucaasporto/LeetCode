class Solution {
public:
    int countDigits(int num) {
        int divisible = 0, initial_input = num;
        
        while(num > 0)
        {
            if(initial_input % (num % 10) == 0)
                ++divisible;

            num /= 10;
        }

        return divisible;
    }
};