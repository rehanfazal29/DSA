class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {

        unordered_set<int> arr(nums1.begin(),nums1.end());
        vector<int> ans;

        for(int x:nums2){
            if(arr.count(x)){
                ans.push_back(x);
                arr.erase(x);
            }
        }
        return ans;

        
    }
};