'''
一只青蛙一次可以跳上1级台阶，也可以跳上2级台阶。求该青蛙跳上一个 n 级的台阶总共有多少种跳法。
答案需要取模 1e9+7（1000000007），如计算初始结果为：1000000008，请返回 1。

示例 1：
输入：n = 2
输出：2

示例 2：
输入：n = 7
输出：21

提示：
0 <= n <= 100
'''

class Solution(object):
    def numWays(self, n):
        """
        :type n: int
        :rtype: int
        """
        a,b=0,1
        for i in range(n+1):    # 不太一样，这里f(0)=f(1)=1,f(2)=2
            a,b=b,a+b
        return a%1000000007

'''
个人思路：
台阶多一意味着什么？
就是比n-1多了一步，或者比n-2多了两部
也就是说跳法是n-1与n-2的和，就是个斐波那契数列
'''
