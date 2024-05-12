class Solution {
  public:
    int isDigitSumPalindrome(int n) {
        // code here
        int sum=0;
        while(n>0){
            sum+=n%10;
            n=n/10;
        }
        int rev=0,temp=sum;
        while(sum>0){
            rev=rev*10+sum%10;
            sum=sum/10;
        }
        return temp==rev?1:0;
    }
};
// First we calculated the sum of digits, sum
// We calculated the reverse of the sum
// If sum == rev then return 1 else 0