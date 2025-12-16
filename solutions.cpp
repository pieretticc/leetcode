//
// Created by matth on 12/12/2025.
//

#include "solutions.h"

#include <unordered_map>
#include <vector>
using namespace std;
    vector<int> Solution::twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> map;
        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];
            if (map.find(complement) != map.end()) {
                return {map[complement], i};
            }
            map[nums[i]] = i;
        }
        return {};
    }

    bool Solution::isPalindrome(const int x) {
            if (x < 0){
                return false;
            }
            long int reversed = 0;
            int temp = x;
            while (temp > 0){
                reversed *= 10;
                reversed += (temp % 10);
                temp /= 10;
            }
            return (x == reversed);
    }