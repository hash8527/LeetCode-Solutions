class Solution {
public:
    bool canAliceWin(int n) 
    {
        
        for (int i = 1, stones = 10;; i++, stones--)
        {
            if (stones > n and (i % 2 == 1))
            {
                return false;
            }
            else if (stones > n and (i % 2 == 0))
            {
                return true;
            }

            n -= stones;
        }
        return true;
    }
};