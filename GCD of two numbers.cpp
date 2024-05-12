class Solution {
  public:
    int gcd(int a, int b) {
        // code here
        if(b==0){
            return a;
        }
        return gcd(b,a%b);
    }
};

// GCD of two numbers can be found by using recursion
// if b==0 then gcd(a,0) = a according to Euclidean Algorithm so return a
//  else return gcd(b,a%b)