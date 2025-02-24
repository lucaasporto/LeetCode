class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, unsigned int> magazine_letters;
 
        for(int i=0; i<magazine.size(); i++)
            magazine_letters[magazine[i]]++;

        for(int i=0; i<ransomNote.size(); i++)
        {
            if(magazine_letters[ransomNote[i]] == 0)
                return false;

            magazine_letters[ransomNote[i]]--;
        }

        return true;
    }
};