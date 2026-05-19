// LC 962. Maximum Width Ramp

class Solution {
public:
    int maxWidthRamp(vector<int>& nums) {
        vector<int>m(nums.size());
        m[nums.size()-1] = nums[nums.size()-1];
        for(int i = nums.size()-2; i>=0; i--){
            m[i] = max(m[i+1],nums[i]);
        }
        int r = 0;
        for(int i = 0; i<nums.size(); i++){
            for(int j = nums.size()-1; j>=0 ;j--){
                if(m[j]>=nums[i]){
                    r = max(r, (j-i));
                    break;
                }
            }
        }
        return r;
    }
};
// TLE In this one

class Solution {
public:
    int maxWidthRamp(vector<int>& nums) {
        vector<int>m(nums.size());
        m[nums.size()-1] = nums[nums.size()-1];
        for(int i = nums.size()-2; i>=0; i--){
            m[i] = max(m[i+1],nums[i]);
        }
        int i = 0, j = 0;
        int r = 0;
        while(j<nums.size()){
            while(nums[i]>m[j]) i++;
            r = max(r,j-i);
            j++;
        }
        return r;
    }
};
