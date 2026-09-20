class Solution {
public:
    int reverseDegree(string s) {
        int sum =0;
        for(int i = 0;i<s.size();i++){
            int reversed_alphabet = 26 -(s[i] - 'a');
            cout << reversed_alphabet << endl;
            int product = reversed_alphabet*(i+1);
            sum+=product;
        }
        return sum;
    }
};