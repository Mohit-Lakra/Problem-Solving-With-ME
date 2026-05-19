// LC 1750. Minimum Length of String After Deleting Similar Ends

class Solution {
public:
    int minimumLength(string s) {
        int i = 0, j = s.size()-1;
        while(i<j && s[i]==s[j]){
            char ch = s[i];
            while(i<=j && s[i]==ch) i++;
            while(i<=j && s[j]==ch) j--;
        }
        return (j-i+1);
    }
};

// Use 2 pointer i = 0, j = s.size()-1
// while i<j and s[i] == s[j]
//    char ch = s[i]
//    do i++ until s[i] != ch
//    do j-- until s[j] != ch
// return j-i+1
