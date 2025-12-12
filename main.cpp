//leetcode solutions for  https://leetcode.com/u/matthewpieretti5/
#include <iostream>
#include <vector>

#include "solutions.h"
using namespace std;
int main() {

    vector<int> nums = {2, 7, 11, 15};

    for (int element : nums) {
        cout << element << " ";
    }
    cout << endl;

// ----------------------------------------------------------

    Solution s;
    vector<int> myReturnedVector = s.twoSum(nums, 9);
    for (int element : myReturnedVector) {
        cout << element << " ";
    }
    cout << endl;



    return 0;
}