#include <vector>
#include <unordered_map>
//test
class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        // Map to store: number -> index
        std::unordered_map<int, int> numMap;
        
        for (int i = 0; i < nums.size(); ++i) {
            int complement = target - nums[i];
            
            // Check if the complement exists in the map
            if (numMap.find(complement) != numMap.end()) {
                // If found, return the index of the complement and current index
                return {numMap[complement], i};
            }
            
            // Store the current number and its index in the map
            numMap[nums[i]] = i;
        }
        
        // Return an empty vector if no solution is found (though problem guarantees one)
        return {};
    }
};