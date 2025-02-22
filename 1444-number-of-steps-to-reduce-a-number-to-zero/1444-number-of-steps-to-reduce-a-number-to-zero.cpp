class Solution {
public:
    int numberOfSteps(int num) {

        int steps = 0;
        
        while(num > 0)
        {
            steps++;

            if((num & 1) == 0)    //AND operation between all digits of "num" and 1 converted to binary
                num >>= 1;  //Division by 2. All the bits are deslocated to right
            else
                num --;
        }

        return steps;
    }
};