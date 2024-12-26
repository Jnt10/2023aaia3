// week16-2b.cpp 學習計畫 Math 最後1題
//50. Pow(x, n) 試著用for迴圈看看
class Solution {
public:
    double myPow(double x, int n) {
        double ans = 1;
        if(n<0){ //遇到負的會失敗, 所以要把n變成正的
            n = -n; //n變成正的
            x = 1/x; // -1次方,就是1/x
        }
        for(int i=0; i<n; i++)// 不幸的是, 會失敗! 遇到「負的n」會失敗!!!
        {
            ans *= x; //1 *x *x *x...
        }
        return ans; //請先不要送出,只要3個Testcase通過, Moodle就上傳截圖
    }
};