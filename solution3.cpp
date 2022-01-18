#include <stdio.h>
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
        int vecSize = nums.size();
        if(vecSize == 1) {
            return;
        }
        k = k % vecSize;
        if (!k)
            return;
        
        vector<int> subNums;
        
        for(int i = vecSize - k; i < vecSize; i++) {
            subNums.push_back(nums[i]);
        }
    
        nums = {nums.begin(), nums.end() - k};
        subNums.insert(subNums.end(), nums.begin(), nums.end());
        nums = subNums;
    }
};
