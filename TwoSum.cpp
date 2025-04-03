class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> un;
        for(int i=0;i<nums.size();i++){
            int temp = target - nums[i];
            if(un.find(temp) != un.end()){
                return {un[temp],i};
            }
            un[nums[i]] = i;
        }
        return{-1,-1};
    }
};
