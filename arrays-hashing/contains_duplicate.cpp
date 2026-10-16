class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int>mp;
        int n = nums.size();
        bool found = false;
        for(int i = 0 ; i < n ; i++){
            mp[nums[i]]++;
            if(mp[nums[i]] > 1){
                found = true;
                break;
            }
        }

        return found;
    }
};