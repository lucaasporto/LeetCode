class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        for(int i=0; i<magazine.size(); i++)
        {
            for(int j=0; j<ransomNote.size(); j++)
            {
                if(magazine.at(i) == ransomNote.at(j))
                {
                    ransomNote.erase(ransomNote.begin()+j);
                    break;
                }
            }
        }

        if(ransomNote.size() == 0)
            return true;
        else
            return false;
    }
};