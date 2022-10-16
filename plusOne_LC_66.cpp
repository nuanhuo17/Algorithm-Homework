class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        // 解题思路：
        // 1、分情况，个位数字如果不是9，直接在其上+1即可，其他位不变，且立即返回digits；
        // 2、如果循环位数字是9，则令该位为0，进入下一个循环再加一，若下一个循环位不为9，则又进入情况1返回；
        // 3、存在一种最特殊的情况，全是9，此时循环结束还未return，则数组0位升为1，最末尾添加一位0；
            for (int j = digits.size() - 1; j >= 0; j--) {
                if (digits[j] != 9) {
                    digits[j] ++;
                    return digits;
                } else {
                    digits[j] = 0;
                }
            }
            digits[0] = 1;
            digits.push_back(0);
            return digits;
        }
};