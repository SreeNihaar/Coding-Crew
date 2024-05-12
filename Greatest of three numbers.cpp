class Solution {
  public:
    int greatestOfThree(int A, int B, int C) {
        // code here
        return max(max(A,B),C);
    }
};
// Since we used max function two times
// The result of max of A and B is compared to C and the maximum is returned