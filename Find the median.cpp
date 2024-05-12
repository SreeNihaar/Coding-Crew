class Solution
{
public:
	public:
		int find_median(vector<int> v)
		{
		    // Code here.
		    sort(v.begin(),v.end());
		    if(v.size()%2==0){
		        return (v[v.size()/2-1]+v[v.size()/2])/2;
		    }
		    return v[v.size()/2];
		}
};

// The median can be found by sorting the array
// After sorting the array we find the mid element for the median
// If the no of elements is even the median is average of v[v.size()/2-1],v[v.size()/2]
// Else return v[v.size()/2]