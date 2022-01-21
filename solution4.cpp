class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        std::sort(nums.begin(), nums.end());
        int i;
        for(i = 1; i < nums.size(); i++) {
            if(nums.at(i) == nums.at(i - 1)) {
                return true;
            }
        }return false;
    }
};
