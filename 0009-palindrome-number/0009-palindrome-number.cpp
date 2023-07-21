class Solution {
public:
    bool isPalindrome(int x) {
    //     long long int temp = x;
    //     long long int rev=0;
    //     while(x>0)
    //     {
    //         rev = rev*10 + x%10;
    //         x = x/10;
    //     }
    //     if(rev==temp)
    //         return true;
    //     return false;
    // }
        
        string s = to_string(x);
        int i;
        for(i = 0; i < s.length();){
            if(s[i] == s[s.length() - i - 1]){
                i++;
            }
            else{
                return false;
            }
        }
        if( i == s.length())
        return true;
        else
        return false;
    }
    
};

