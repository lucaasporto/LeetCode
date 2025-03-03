class Solution {
public:
    string reversePrefix(string word, char ch) {

        int ch_index = -1;

        for(int i=0; i<word.length(); ++i)
            if(word[i] == ch)
            {
                ch_index = i;
                break;
            }
                

        if(ch_index != -1)
        {
            int next_change = ch_index;

            for(int i=0; i<=ch_index/2; ++i)
            {
                swap(word[i], word[next_change]);
                --next_change;
            }
        }

        return word;
    }
};