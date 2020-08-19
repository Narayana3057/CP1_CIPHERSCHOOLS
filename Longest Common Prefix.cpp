class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int sl=99999;
        string s;
        string res="";
        if(strs.size()==0){
           return res; 
        }
        for(int i=0;i<strs.size();i++){
            if(strs[i].length()<sl){
                sl=strs[i].length();
                s=strs[i];
                
                
            }
        }
        
        int flag;
        for(int i=0;i<sl;i++){
            
            flag=0;
        char a=s[i];
           
            for(int j=0;j<strs.size();j++){
                if(strs[j][i]!=a){
                    flag=1;
                    break;
                    
                }
                
                
                
            }
            if(flag==0){
                res.push_back(a);
            }
            else{
                return res;
            }
            
        }
            return res;
        }
    
};
