class Solution {
 public:
    long long int reverseNum(int n){
        string rev = to_string(n);
        reverse(rev.begin(),rev.end());
        long long int ans = stoll(rev);
        return ans;
    }
    long long isSumPalindrome(long long n){
        // code here
        for (int i=0; i<=5 ; i++){
            if (n==reverseNum(n)){
                return n;
            }
            else{
                n += reverseNum(n);
            }
        }
        return -1;
    }
};
// First reverse the number using the function reverseNum
// loop the function upto 5 times if the sum is palindrome then return result else repeat the loop