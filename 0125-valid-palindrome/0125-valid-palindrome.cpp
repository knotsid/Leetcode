class Solution {
public:
    bool isPalindrome(string s) {
        int st = 0;                                       //starting index
        int e = s.size()-1;                               //ending index
        while(st<e){                                      //using 2 pointer approach
            if(!isalnum(s[st]))                           //checking if left index element is alpha num or not
                st++;                                     //if it is alpha num we return false and dont skip that element
            else if(!isalnum(s[e]))                       //checking if rignt index element is alpha num or not
                e--;                                      //if it is alpha num we return false and dont skip that element
            else if(tolower(s[st++]) != tolower(s[e--]))  //convering to lowercase and comparing left and right index elements
                return false;                             //if elements do no match then just return false as string is not palindrome
        }

        return true;
    }
};