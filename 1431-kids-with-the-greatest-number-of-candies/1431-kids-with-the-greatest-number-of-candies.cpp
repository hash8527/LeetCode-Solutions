class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) 
    {
        vector<bool> result;
        for (int i = 0; i < candies.size(); i++)
        {
            bool status = true;
            int final = candies[i] + extraCandies;
            for (int j = 0; j < candies.size(); j++)
            {
                if (final < candies[j])
                {
                    status = false;
                    break;
                }
            }
            result.push_back(status);
        }
        return result;
    }
};