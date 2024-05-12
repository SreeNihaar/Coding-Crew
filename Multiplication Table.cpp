class Solution
{
public:
    vector<int> getTable(int N)
    {
        // Write Your Code here
        vector<int> vec;
        for(int i=1;i<=10;i++){
            vec.push_back(N*i);
        }
        return vec;
    }
};
// Here we declared a integer vector vec
// Using for loop from 1 to 10 we pushed the multiples of n 
// return the reuslt