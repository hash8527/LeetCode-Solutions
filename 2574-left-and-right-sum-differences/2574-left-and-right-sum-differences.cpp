class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) 
    {
        vector <int> answer;
        int leftSum, rightSum;

        for (int i = 0; i < nums.size(); i++)
        {
            leftSum = 0;
            rightSum = 0;
            for (int j = 0; j < i; j++)
            {
                leftSum += nums[j];
            }
            for (int j = i + 1; j < nums.size(); j++)
            {
                rightSum += nums[j];
            }
            if (rightSum - leftSum >= 0)
            {
                answer.push_back(rightSum - leftSum);
            }
            else
            {
                answer.push_back(leftSum - rightSum);
            }
        }   
        return answer;
    }
};