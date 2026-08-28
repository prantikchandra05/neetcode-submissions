class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int, int>> indexedNums;
        for (int i = 0; i < nums.size(); ++i) {
            indexedNums.push_back({nums[i], i});
        }
        sort(indexedNums.begin(), indexedNums.end());
        int low = 0, high = indexedNums.size() - 1;
        while (low < high) {
            if (indexedNums[low].first + indexedNums[high].first == target) {
                int i = indexedNums[low].second;
                int j = indexedNums[high].second;
                return {min(i, j), max(i, j)};
            }
            else if (indexedNums[low].first + indexedNums[high].first > target) {
                high--;
            }
            else {
                low++;
            }
        }
        return {};
    }
};
