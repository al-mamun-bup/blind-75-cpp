class Solution {
public:
    int maxArea(vector<int>& height) {
        int l = 0, r = height.size() -1;
        int ans = 0;
        while(l < r){
            int val = (r-l)*(min(height[l],height[r]));
            ans = max(ans,val);
            if(height[l] < height[r]){
                l++;
            }else if(height[r] < height[l]){
                r--;
            }else{
                r--;
            }
        }
        
        return ans;
    }
};