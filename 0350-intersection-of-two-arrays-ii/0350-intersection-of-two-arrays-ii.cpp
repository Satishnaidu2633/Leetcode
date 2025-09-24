class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> fr;
        vector<int> ans;
        for(int num : nums1){
            fr[num]++;
        }
        for(int num : nums2){
            if(fr[num]>0){
                ans.push_back(num);
                fr[num]--;
            }
        }
        return ans;
    }
};