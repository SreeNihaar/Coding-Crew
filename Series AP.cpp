class Solution {
  public:
    int nthTermOfAP(int a1, int a2, int n) {
        // code here
        return a1+(n-1)*(a2-a1);
    }
};
// The nth term in series AP is an= a1+(n-1)*d;
// For given terms d can be found by d=a2-a1
// so return a1+(n-1)*(a2-a1)