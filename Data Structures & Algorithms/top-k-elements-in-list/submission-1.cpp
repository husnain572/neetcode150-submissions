class Solution {
   public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> res;
        unordered_map<int, int> mp;
        for (int val : nums) {
            mp[val]++;
        }
        vector<pair<int, int>> vp;
        for(const auto& p:mp){
            vp.push_back({p.second,p.first});
        }
        sort(vp.rbegin(),vp.rend());
        for(int i=0;i<k;i++){
            res.push_back(vp[i].second);
        }
        return res;
    }
};
