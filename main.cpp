//leetcode solutions for  https://leetcode.com/u/matthewpieretti5/
#include <iostream>
#include <vector>

#include "solutions.h"
using namespace std;
int main() {

    vector<int> nums = {2, 7, 11, 15};

    // for (int element : nums) {
    //     cout << element << " ";
    // }
    // cout << endl;

    // ----------------------------------------------------------

    Solution s;
    vector<int> myReturnedVector = s.twoSum(nums, 9);
    // for (int element : myReturnedVector) {
    //     cout << element << " ";
    // }
    // cout << endl;
    // ----------------------------------------------------------
    // int testCases[] = {222, 70, 1111111, 155551, 0, 457343, 8};
    // int size = sizeof(testCases) / sizeof(int);
    // for (int i = 0; i < size; i++) {
    //     cout << (s.isPalindrome(testCases[i]) ? "True" : "False") << " \n";
    // }
    // ----------------------------------------------------------
    vector<int> testVector = {1,3,5,6};
    cout << s.searchInsert(testVector, 5) << endl;
    cout << s.searchInsert(testVector, 2) << endl;
    cout << s.searchInsert(testVector, 7) << endl;

    return 0;
}