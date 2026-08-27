class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> result;
        
        int i =0 ;
        while(i< 2*(nums.size())){
result.push_back(nums[i % nums.size()]);
        i++;
        }
         /*
        for(auto val:nums){
            result.push_back(val);
        }
        */
   return result ;
   }
};