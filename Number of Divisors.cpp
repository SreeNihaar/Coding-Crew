class Solution
{
	public:
		int count_divisors(int n)
		{
		    //Code here.
		    int count = 0;
            for (int i = 1; i * i <= n; i++) {
                if (n % i == 0) {
                    if (i % 3 == 0)
                        count++;
                    if (i != n / i && (n / i) % 3 == 0)
                        count++;
                }
            }
            return count;
		}
};
// By using for loop we check if a number is divisor of n
// If yes then if it is divisible by 3 then increase count 
// Return the count 