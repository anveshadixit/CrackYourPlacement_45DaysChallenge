//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    string maxOdd(string s) {
        // your code here
        for(int i=s.size()-1;i>=0;i--)
        {
            if(s[i]=='1' || s[i]== '3' || s[i]== '5' || s[i]== '7' || s[i]== '9'){
                break;
            }
            else{
                s.pop_back();
            }
        }
        return s;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;

        cout << ob.maxOdd(s) << endl;
    }
}

// } Driver Code Ends