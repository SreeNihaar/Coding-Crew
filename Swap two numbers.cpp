class Solution{   
public:
    pair<int, int> get(int a, int b){
        //complete the function here
        a=a+b;
        b=a-b;
        a=a-b;
        return {a,b};
    }
};
// Here we swapped two numbers without using another variable
//  so return the result