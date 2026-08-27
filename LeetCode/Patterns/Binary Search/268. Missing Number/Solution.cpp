class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int miss=0; 
        sort(nums.begin(),nums.end());
        int size = nums.size();
        for(int i=0;i<size;i++){
            if(i!=nums[i]){
              return i ;
            }
        
        }return size;
    }
};