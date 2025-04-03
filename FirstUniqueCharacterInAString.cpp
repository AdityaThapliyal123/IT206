class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int> un;
        for(char i : s){
            if(un.find(i) != un.end()){
                un[i]++;
            }
            else{
                un[i] = 0;
            }
        }
        int j=0;
        for(char i : s){
            if(un[i] == 0){
                return j;
            }
            j++;
        }
        return -1;
    }
};
