#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> numMap; // Create a hash map to store numbers and their indices

    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i]; // Calculate the complement of the current number
        
        // Check if the complement exists in the hash map
        if (numMap.find(complement) != numMap.end()) {
            return {numMap[complement], i}; // If found, return the indices
        }
        
        numMap[nums[i]] = i; // Store the current number and its index in the hash map
    }
    
    return {}; // Return an empty vector if no solution is found
}

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    vector<int> result = twoSum(nums, target);

    cout << "Indices: [" << result[0] << ", " << result[1] << "]" << endl;

    return 0;
}
