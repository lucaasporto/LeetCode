class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> output;
        string word = "";

        for(int i=1; i<=n; i++)
        {
            if(i%3 == 0)
                word = "Fizz";
            if(i%5 == 0)
                word += "Buzz";
            if(word.size() == 0)
                word = to_string(i);

            output.push_back(word);
            word = "";
        }
                
        return output;
    }
};