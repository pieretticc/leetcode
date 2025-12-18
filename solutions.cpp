//
// Created by matth on 12/12/2025.
//

#include "solutions.h"

#include <iostream>

#include "cmath"
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

int Solution::searchInsert(vector<int>& nums, int target) {
        int left = 0, right = nums.size() - 1;
        if (nums.empty()) {
            return 0;
        }

        while (left <= right) {
            int mid = left + (right - left) / 2;
            cout << left << " " << mid << " " << right << "\n";
            if (nums[mid] == target) {
                return mid;
            }
            else if (nums[mid] < target) {
                left = mid + 1;
            }
            else {
                right = mid - 1;
            }
        }
        return left;
    }