// week07-4.cpp 學習計畫 Built-In Function 第1題
// LeetCode 58. Length of Last Word 最後1個字的長度
class Solution {
public:
    int lengthOfLastWord(string s) {
        stringstream ss(s);
        string word;
        while( ss >> word ){ // 一直把字讀到word字串裡
            //甚麼事都不做
        }
        return word.length(); //最後,看字串德長度
    }
};