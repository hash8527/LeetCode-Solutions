class Solution:
    def twoSum(self, nums, target):
        seen = {}
        
        for i, num in enumerate(nums):
            # Calculate the matching number we need
            complement = target - num
            
            # If the matching number is already in our dictionary, we found the pair!
            if complement in seen:
                return [seen[complement], i]
                
            # Otherwise, save the current number and its index to the dictionary
            seen[num] = i
