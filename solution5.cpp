#include <stdio.h>
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int s = nums.size();
        sort(nums.begin(), nums.end());
        if(s == 1) {return nums[0];}
        if(nums[0] != nums[1]){return nums[0];}
        if(nums[s - 1] != nums[s - 2]) {return nums[s - 1];}
        for(int i = 1; i < nums.size(); i++) {
            if(nums[i] != nums[i - 1]) {
                int n1 = nums[i];
                if(nums[i + 1] != n1){return n1;}
            }
        }
        return -1;
    }
};
