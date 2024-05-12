class Solution {
  public:
    double simpleInterest(int P, int R, int T) {
        // code here
        double res=1.00*P*T*R/100;
        return res;
    }
};
// The Simple interest is P*T*R/100
// So to make it double multiply with 1.00 and return result