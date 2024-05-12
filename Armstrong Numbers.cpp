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
// A number is Armstrong if sum of cubes of digots equal to the number
// So i have taken every number and cube the result and added
// If sum == number the Yes else No