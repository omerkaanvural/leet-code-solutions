class Solution {
public:
    
    int removeDuplicates(vector<int>& nums) {
        
        if(nums.empty()) {
            return 0;
        }
        
        else if(nums.size() == 1) {
            return 1;
        }
        
        else {
            int counter = 1;
            int i = nums.size() - 1;
            for(; i > 0; i--){
                int j = i - 1;
                
                if (nums[i] == nums[j]) {
                    nums.erase(nums.begin() + i);
                } else {
                    counter++;
                }
            }
            return counter;
               
        }
        
    }
    
};
