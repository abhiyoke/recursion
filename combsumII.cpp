class Solution {
public:
    void findcomb(int ind,int target,vector<int>&a,vector<vector<int>>&ans,vector<int>&ds){
        if(target==0){
            ans.push_back(ds);
            return;
        }
        for(int i=ind;i<a.size();i++){
            if(i>ind and a[i]==a[i-1]) continue;
            if(a[i]>target) break;
            ds.push_back(a[i]);
            findcomb(i+1,target-a[i],a,ans,ds);
            ds.pop_back();
        }

    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>>ans;
        vector<int>ds;
        findcomb(0,target,candidates,ans,ds);
        return ans;
    }
};
