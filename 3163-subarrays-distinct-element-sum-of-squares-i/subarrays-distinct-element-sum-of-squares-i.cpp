class Solution {
public:
    int sumCounts(vector<int>& nums) {
    int result=0;
    int n=nums.size();
    for (int i=0;i<n;i++){
        set<int>s;
        for(int j=i;j<n;j++){
        s.insert(nums[j]);
        int count=s.size();
        result+=count*count;
        }
    }
    return result;
    }
};