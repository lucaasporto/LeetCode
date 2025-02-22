class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {

        unsigned int biggest_wealth = 0;
        unsigned int compartion_wealth = 0;

        for(unsigned int i=0; i<accounts.size(); i++)
        {
            for(unsigned int j=0; j<accounts.at(0).size(); j++)
            {
                compartion_wealth += accounts.at(i).at(j);

                if(j == accounts.at(0).size()-1)
                {
                    if(compartion_wealth > biggest_wealth)
                        biggest_wealth = compartion_wealth;

                    compartion_wealth = 0;
                }
            }
        }

        return biggest_wealth;
    }
};