class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum = 0, product = 1, algarism = 0;

        while(n > 0)
        {
            algarism = n % 10;

            sum += algarism;
            product *= algarism;

            n /= 10;
        }

        return product - sum;
    }
};