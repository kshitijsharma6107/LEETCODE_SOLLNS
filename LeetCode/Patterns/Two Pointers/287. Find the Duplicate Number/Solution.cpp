class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int> m1;

        for (auto val : nums) {
            m1[val]++;
            if(m1[val]>1){
                return val;
            }
        }


        return -1;
    }
};