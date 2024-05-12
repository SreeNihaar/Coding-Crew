class Solution {
  public:
    int findNthTerm(int N) {
        // code here
        int res=1;
        for(int i=1;i<N;i++){
            res+=i+1;
        }
        return res;
    }
};
// So for the seires the difference between each term is 2,3,4,5,...
// So we can add i+1 to every last term for result
