// LC 2963. Number of Good Partitions

class Solution {
public:
  int numberOfGoodPartitions(vector<int>& nums) {
    unordered_map<int,int>mp;
    for(int i = 0; i<nums.size(); i++){
      mp[nums[i]]=i;
    }
    int mod = 1e9 + 7;
    int k = mp.size();
    int j = 0;
    int i = 0;
    int a = 1;
    while(i<nums.size()){
      if(i>j) a=(a*2)%mod;
      j = max(j, mp[nums[i]]);
      i++;
    }
    return a;
  }
};

// First we will store last occurance of each element using map
// we will take ans = 1, and then we will use 2 pointer i and j
// i will iterate the array and j will store the count of last index of the element to make array good
// j = max(j,mp[nums[i]])
// whenever i>j then we will double our ans 
// because we will have 2 choices at each step whether to include that partition in the previous one or not
