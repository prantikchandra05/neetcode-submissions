class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        unordered_map<char,int> freq;
        int max_freq = 0;
        for(auto it : tasks){
            freq[it]++;
            max_freq = max(max_freq,freq[it]);
        }

        int count = 0;
        for(auto& pair :freq){
            if (pair.second == max_freq){
                count++;
            }
        }

        int ans = (max_freq-1) *(n+1) + count;

        return max((int) tasks.size(),ans);
    }
};
