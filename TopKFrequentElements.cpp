class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> un;  

        for (int i : nums) {
            if (un.find(i) != un.end()) {
                un[i]++;
            } else {
                un[i] = 1;
            }
        }

        priority_queue<pair<int, int>> pq;
        
       
        for (auto &p : un) {  
            pq.push({p.second, p.first});
        }

        vector<int> v(k);  
        int i = 0;
        
        while (k--) {
            v[i++] = pq.top().second;  
            pq.pop();
        }

        return v;
    }
};
