class Solution {
public:
    string intToRoman(int num) {
        vector<string> ro({"I", "IV", "V", "IX", "X", "XL", "L", "XC", "C", "CD", "D", "CM", "M"});
    vector<int> va({1, 4, 5, 9, 10, 40, 50, 90, 100, 400, 500, 900, 1000});
    int seqSize = ro.size();
    int id = seqSize - 1;
    string s = "";
    while(num>0){
        while(value[id]<=num){
            s += ro[id];
            num -= va[id];
        }
        id--;
    }
    return s;
    }
};