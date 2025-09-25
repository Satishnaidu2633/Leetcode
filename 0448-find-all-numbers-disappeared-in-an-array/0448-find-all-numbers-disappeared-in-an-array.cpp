class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> lst;
        unordered_set<int> set(nums.begin(), nums.end());
        for(int i=1; i<=nums.size(); i++){
            if(set.find(i) == set.end()){
                lst.push_back(i);
            }
        }
        return lst;
    }
};