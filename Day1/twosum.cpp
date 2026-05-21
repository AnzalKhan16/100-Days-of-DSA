//Given an array of integers nums and an integer target,return indices of the two numbers such that they add up to target.
// nums = [2,7,11,15], target = 9

#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        unordered_map<int, int> mp;

        // Store value and index
        for(int i = 0; i < nums.size(); i++) {
            mp[nums[i]] = i;
        }

        // Find complement
        for(int i = 0; i < nums.size(); i++) {

            int rem = target - nums[i];

            if(mp.find(rem) != mp.end() && mp[rem] != i) {
                return {i, mp[rem]};
            }
        }

        return {};
    }
};