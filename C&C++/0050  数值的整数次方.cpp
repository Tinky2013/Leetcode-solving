/*
实现 pow(x, n) ，即计算 x 的 n 次幂函数。

示例 1
输入: 2.00000, 10
输出: 1024.00000

示例 2:
输入: 2.10000, 3
输出: 9.26100

示例 3:
输入: 2.00000, -2
输出: 0.25000
解释: 2-2 = 1/22 = 1/4 = 0.25
说明:

-100.0 < x < 100.0
n 是 32 位有符号整数，其数值范围是 [−2^31, 2^31 − 1] 。
*/

class Solution {
public:
    double myPow(double x, int n) {
        double res=1;
        int t=n;
        while(n){
            if(n&1) res=res*x; 
            x=x*x;
            n/=2;   //整除
        }
        return t>0?res:1.0/res; //处理负数的情况
    }
};

/*
这题用了快速幂方法，时间复杂度O(log2N)
求a的b次幂，把b转化为二进制数，分解为各位2的次幂相乘
*/
