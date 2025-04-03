class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> un(nums.begin(),nums.end());
        int Max=1;
        if(nums.size() == 0){
            return 0;
        }      
        for(int i : un){
            
            if(un.find(i-1) != un.end()){
                continue;
            }
            else{
                int j=1;
                while(un.find(i+j) != un.end()){
                    j++;
                }
                Max = max(j,Max);
            }
            
        }
        return Max;
    }
};
