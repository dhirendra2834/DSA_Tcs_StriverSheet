class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> arr;

        for(int i=0;i<nums.size();i++){

            if(arr.find(nums[i])!=arr.end()){
                return true;
            }

            arr.insert(nums[i]);
        }

        return false;
        
    }
};
