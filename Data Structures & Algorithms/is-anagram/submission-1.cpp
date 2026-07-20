class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> tableS;
        unordered_map<char, int> tableT;
        for (const char character : s) {
            if (tableS.contains(character)) {
                tableS[character]++;
            } else {
                tableS.insert({character, 1});
            }
        }
        for (const char character : t) {
            if (tableT.contains(character)) {
                tableT[character]++;
            } else {
                tableT.insert({character, 1});
            }
        }
        if (tableS == tableT) {
            return true;
        } else {
            return false;
        }
    }
};
