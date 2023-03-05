class Solution
{
public:
    void func(int ind,int sum,vector<int>&a,int n,vector<int>&sumsub){
        if(ind==n){
            sumsub.push_back(sum);
            return;
        }
        func(ind+1,sum+a[ind],a,n,sumsub);
        func(ind+1,sum,a,n,sumsub);
    }
    vector<int> subsetSums(vector<int> a, int n)
    {
        // Write Your Code here
        vector<int>sumsub;
        func(0,0,a,n,sumsub);
        sort(sumsub.begin(),sumsub.end());
        return sumsub;
    }
};
