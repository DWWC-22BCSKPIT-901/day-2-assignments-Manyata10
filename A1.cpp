#include <vector>
#include <iostream>
using namespace std;

int majorityElement(vector<int>& nums) {
    int count = 0;
    int el = 0;

    for (int i = 0; i < nums.size(); i++) {
        if (count == 0) {
            el = nums[i];
            count = 1;
        } else if (nums[i] == el) {
            count++;
        } else {
            count--;
        }
    }

    int count1 = 0;
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] == el) {
            count1++;
        }
    }

    if (count1 > nums.size() / 2) {
        return el;
    }

    return -1;
}

int main() {
    vector<int> nums = {3, 3, 4, 2, 3, 3, 3};
    int result = majorityElement(nums);
    cout << "Majority Element: " << result << endl;
    return 0;
}
