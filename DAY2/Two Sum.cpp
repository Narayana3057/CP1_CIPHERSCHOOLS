class Solution {
public:
   /* vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>v;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]+nums[j]==target){
                    v.push_back(i);
                    v.push_back(j);
                }
            }
        }
        return v;
    }*/
     vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>v;
         unordered_map<int,int> m;
         unordered_map<int,int> :: iterator itr;
        for(int i=0;i<nums.size();i++){
            itr=m.find(target-nums[i]);
            if(itr!=m.end()){
                v.push_back(i);
                v.push_back(itr->second);
                return v;
            }
            m[nums[i]]=i;
        }
        return v;
    }
};
