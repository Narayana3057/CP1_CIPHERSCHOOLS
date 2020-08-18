class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int h=-1;
        vector<bool> res;
        for(int i:candies){
            if(i>h){
                h=i;
            }
        }
        for(int i=0;i<candies.size();i++){
            candies[i]=candies[i]+extraCandies;
            if(candies[i]>=h){
                res.push_back(1);
            }else{
                res.push_back(0);
            }
        }
        
        return res; 
    }
};
