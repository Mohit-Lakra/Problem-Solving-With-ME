// LC 1498. Number of Subsequences That Satisfy the Given Sum Condition

class Solution {
public:
  int numSubseq(vector<int>& nums, int target) {
    const int mod = 1e9 + 7;
    int n = nums.size();

    sort(nums.begin(), nums.end());

    vector<long long> p(n);
    p[0] = 1;

    for (int i = 1; i < n; i++) {
      p[i] = (p[i - 1] * 2) % mod;
    }

    int i = 0, j = n - 1;
    long long ans = 0;

    while (i <= j) {
      if (nums[i] + nums[j] > target) {
        j--;
      } else {
        ans = (ans + p[j - i]) % mod;
        i++;
      }
    }
    return ans;
  }
};
