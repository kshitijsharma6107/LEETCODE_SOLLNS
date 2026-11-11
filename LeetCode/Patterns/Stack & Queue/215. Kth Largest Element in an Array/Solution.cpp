class Solution {
public:
int leftchild(int pos , int size ){
    int lc = pos*2+1;
    return (lc<size?lc:-1);
}
int rightchild(int pos , int size ){
    int rc = pos*2+2;
    return (rc<size?rc:-1);
}
void precolatedown(int pos, vector<int>&heap,int size ){
    int lc  = leftchild(pos,size);
    int rc = rightchild(pos,size);
    int maxpos = pos ; 
    if(lc!=-1 && heap[lc]>heap[maxpos]){
        maxpos=lc;
    }
    if(rc!=-1 && heap[rc]>heap[maxpos]){
        maxpos=rc;
    }
    if(pos==maxpos){
        return ;
    }
    swap(heap[maxpos],heap[pos]);
    precolatedown(maxpos,heap,size);
}
void dodelete(vector <int> &heap, int size  ){
    heap[0]=heap[size-1];
    heap.pop_back();
    precolatedown(0,heap,size);
}
    int findKthLargest(vector<int>& nums, int k) {
        int n = nums.size();
       for(int i = n/2-1;i>=0;i--){
        precolatedown(i,nums,n);
       }
       for(int i = 1 ; i<k ;i++){
        dodelete(nums,n);
       }
     return nums[0];
        
    }
};