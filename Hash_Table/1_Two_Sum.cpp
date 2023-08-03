class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // Create an unordered map to store the elements and their indices
        unordered_map<int, int> numMap;

        // Traverse through the array
        for (int i = 0; i < nums.size(); ++i) {
            // Calculate the complement required to reach the target
            int complement = target - nums[i];

            // Check if the complement is already in the unordered map
            if (numMap.find(complement) != numMap.end()) {
                // If found, return the indices of the two numbers that add up to the target
                return {numMap[complement], i};
            }

            // If not found, add the current number and its index to the unordered map
            numMap[nums[i]] = i;
        }

        // If no solution is found, return an empty vector
        return {};
        
    }
};
