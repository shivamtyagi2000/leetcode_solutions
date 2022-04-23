class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        /* BRUTE FORCE
       if(nums.size())
        {
            int ans=1,curr=1;
            sort(nums.begin(),nums.end());
            for(int i =0;i+1<nums.size();i++){
            if(nums[i+1]==nums[i]+1)
                curr++;
                else if(nums[i+1]==nums[i])
                    continue;
            else
                curr=1;
            ans=max(ans,curr);
                }
            return ans;
        }
        return 0; */
        
        // BEST APPAROCH
        
    unordered_set<int> s(begin(nums), end(nums));
	int longest = 0;
	for(auto& num : s) {
        if(s.count(num - 1)) continue;
		int j = 1;
		while(s.count(num + j)) j++;
		longest = max(longest, j);
	}
	return longest;
    }
};