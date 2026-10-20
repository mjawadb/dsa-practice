class Solution {
public:
    int lengthOfLastWord(string s) {
        int cnt = 0;
        int len = s.size();
        int posPertama = -1;
        for(int i = 0; i < len; i++) {
            if(s[len-1-i] != ' ' && posPertama == -1) {
                posPertama = i; 
                cnt++;
            } 
            else if(s[len-1-i] != ' ' && posPertama != -1) {
                cnt++;
            }

            if(s[len-1-i] == ' ' && posPertama != -1) {
                break;
            }
        }

        return cnt;
    }
};