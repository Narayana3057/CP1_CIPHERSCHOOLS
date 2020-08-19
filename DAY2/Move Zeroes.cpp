class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int p=0,q=0;
        while(q<nums.size()){
            if(nums[q]==0){
                q++;
            }
            else{
                swap(nums[q],nums[p]);
                p++;
                q++;
            }
        }
    }
};
