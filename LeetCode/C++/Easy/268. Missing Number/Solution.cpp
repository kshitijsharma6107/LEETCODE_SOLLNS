class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int size = nums.size();
        int expect = size*(size+1)/2;
        int actual =0;
        
        for(int i=0;i<size;i++){
            actual+=nums[i];
            
            }
        
        return expect-actual ;
    }
    
};