class Solution {
public:
    int majorityElement(vector<int>& nums) {
      int count = 0;
int result = nums[0];
for (auto num:nums) {
    if (num == result) {
        count++;
    }
    if (count == 0) {
    result = num;
    count++;
    }
    if (num != result) {
    count--;
    }
}
return result;
}
};
