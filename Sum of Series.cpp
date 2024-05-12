class Solution {
  public:
    long long seriesSum(int n) {
        // code here
        return 1LL*n*(n+1)/2;
    }
};

// The sum of series 1+2+3+.....+n = n*(n+1)/2
// To get result in long long 1LL is multiplied