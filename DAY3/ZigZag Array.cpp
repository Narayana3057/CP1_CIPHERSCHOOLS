class Solution {
public:
      static int get(vector<int> nums,int a,int n)
    {
        if(a<0 || a>=n)
            return INT_MAX;
        return nums[a];
    }
    int movesToMakeZigzag(vector<int>& nums) {
        int count[2]={0,0};
        int lower,higher,n=nums.size();
        
        for(int i=0;i<n;i++)
        {
            lower=get(nums,i-1,n);
            higher=get(nums,i+1,n);
            lower=min(lower,higher);
            if(lower<=nums[i])
            {
                count[i%2]+= nums[i]-lower+1;
            }
        }
        return min(count[0],count[1]);
    }
};
