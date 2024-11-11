#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void fixSwappedElements(vector<int>& nums) {
    int n = nums.size();
    int first = -1, second = -1;

    for (int i = 0; i < n - 1; i++) {
        if (nums[i] > nums[i + 1]) {
            // If it's the first occurrence, record `first`
            if (first == -1) {
                first = i;
                second = i + 1;
            } else {
                // If it's the second occurrence, record `second`
                second = i + 1;
                break;
            }
        }
    }

    // Swap the two elements back to fix the vector
    cout<<nums[first]<<" "<<nums[second]<<endl;
    if (first != -1 && second != -1) {
        swap(nums[first], nums[second]);
    
    }
}

int main() {
    vector<int> nums = {3,2,1};  // Example vector with two swapped elements

    cout << "Original vector: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    fixSwappedElements(nums);

    cout << "Fixed vector: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
