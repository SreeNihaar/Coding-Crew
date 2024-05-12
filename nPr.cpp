class Solution{
public:
    long long int fact(int n){
        
        return n==0? 1 : n*fact(n-1);
    }
    long long nPr(int n, int r){
        // code here
        long long up=fact(n);
        long long down=fact(n-r);
        return up/down;
    }
};
// Here we defined a function for factorial, i.e. if n==0 return 1 else return n*fact(n-1)
// so we calsulated nPr=n!/(n-r)! so return fact(n)/fact(n-r)