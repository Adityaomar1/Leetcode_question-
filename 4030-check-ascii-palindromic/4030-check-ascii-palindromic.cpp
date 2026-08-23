class Solution {
public:
    bool isPalindromic(string s) {
        string binary;

        for (char c : s) {
            for (int i = 7; i >= 0; i--) {
                binary += ((c >> i) & 1) + '0';
            }
        }

        int l = 0, r = binary.size() - 1;
        while (l < r) {
            if (binary[l] != binary[r])
                return false;
            l++;
            r--;
        }
        return true;
    }
};