class Solution {
  public:
    string armstrongNumber(int n){
        // code here
        int temp=n,sum=0;
        while(n>0){
            int rem=n%10;
            sum+=rem*rem*rem;
            n=n/10;
        }
        return temp==sum?"Yes":"No";
    }
};
// The reverse number can be done by taking each and every digit 
// So we can take the each digit from number by usin % operator
// And the result is returned