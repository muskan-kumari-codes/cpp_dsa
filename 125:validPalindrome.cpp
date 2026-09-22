class Solution {
public:
    bool isAlphaNumeric(char ch){
        return (ch>=48 && ch<=57) || (ch>=97 && ch<122);
    }
    bool isPalindrome(string s) {
       int n = s.length();
       int r = n-1;
       int l = 0;
       while(l<r){
        char cl = tolower(s[l]);
        char cr = tolower(s[r]);

        if(!isAlphaNumeric(cl)) l++;
        else if(!isAlphaNumeric(cr)) r--;
        else{
            if(cl != cr) return false;
            l++;
            r--;
        }
       }
       return true;
    }
};
