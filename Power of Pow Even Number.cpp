class Solution
{
	public:
		long long int sum_of_square_evenNumbers(long long int n)
		{
		    // Code here
		    long long int res=0;
		    int k=2;
		    for(int i=1;i<=n;i++){
		        res+=k*k;
		        k+=2;
		    }
		    return res;
		}
};
// Sum of first n even numbers
// So using for loop and a variable k=2 add the k*k to result and increase k by 2
// Return the result