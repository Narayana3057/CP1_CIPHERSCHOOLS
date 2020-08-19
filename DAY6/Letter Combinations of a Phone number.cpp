class Solution {
    vector<string> res;
    unordered_map<int,vector<char>> m;
public:
    void phone(int i,string &digits,string &t)
    {
        if (i==digits.length())
        {
            res.push_back(t);
            return;
        }
        for (auto x:m[digits[i]-'0'])
        {
            t+=x;
            phone(i+1,digits,t);
            t.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        if (digits.size()==0)
            return res;
        string t="";
        m[2]={'a','b','c'};
        m[3]={'d','e','f'};
        m[4]={'g','h','i'};
        m[5]={'j','k','l'};
        m[6]={'m','n','o'};
        m[7]={'p','q','r','s'};
        m[8]={'t','u','v'};
        m[9]={'w','x','y','z'};
        phone(0,digits,t);
        return res;
    }
};

