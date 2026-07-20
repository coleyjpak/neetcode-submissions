class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> knownNums;
        for (const int& num : nums) {
            if (knownNums.contains(num)) {
                return true;
            }
            knownNums.insert(num);

        }
        return false;
    }
};