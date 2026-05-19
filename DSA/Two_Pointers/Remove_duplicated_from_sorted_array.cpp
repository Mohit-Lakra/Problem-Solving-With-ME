// LC 26. Remove Duplicates from Sorted Array

class Solution {
public:
  int removeDuplicates(vector<int>& nums) {
    int i = 0, j = 1;
    while (j < nums.size()) {
      if (nums[i] != nums[j]) {
        i++;
        nums[i] = nums[j];
      }
      j++;
    }
    return i + 1;
  }
};

// Here we are using 2 pointers to track the position of the array.
// We will keep moving the right pointer until we find a different element
// from the left pointer. Once we find a different element, we will move the left pointer
// and update the value at the left pointer to the value at the right pointer.
// We will repeat this process until the right pointer is less than the size of the array.
// Finally, we will return the length of the array which is left pointer + 1.
