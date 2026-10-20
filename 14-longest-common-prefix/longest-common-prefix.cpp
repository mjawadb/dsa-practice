class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string s = "";
        int len = strs.size();
        sort(strs.begin(), strs.end());
        string f = strs[0], l = strs[strs.size()-1];
        
        for(int i = 0; i < min(f.size(), l.size()); i++) {
            if(f[i] != l[i]) {
                return s;
            }
            s += f[i];
        } 

        return s;
    }
};