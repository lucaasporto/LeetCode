class Solution {
public:
    string reversePrefix(string word, char ch) {

        int ch_index = word.find(ch);

        if(ch_index != -1)
            reverse(word.begin(), word.begin() + ch_index + 1);

        return word;
    }
};