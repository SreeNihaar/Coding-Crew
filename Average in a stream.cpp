class Solution{
public:	
	vector<float> streamAvg(int arr[], int n) {
	    // code here
	    vector<float> res;
	    int sum=0;
	    for(int i=0;i<n;i++){
	        sum+=arr[i];
	        res.push_back(static_cast<float>(sum)/(i+1));
	    }
	    return res;
	}
};
// We use the loop to calculate the current sum
// and insert the result of average and use static cast to float the result
// and return the result