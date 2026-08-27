class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int>vec;
        unordered_map<int, int> m1,m2;
        for(auto val:nums1){
            m1[val]=1;
        }
        for(auto val2 :nums2){
            m2[val2]=1;
        }
        for(auto fin:m1){
            if(m2.find(fin.first)!=m2.end()){
                vec.push_back(fin.first);
            }
        }
       return vec;
 }
};