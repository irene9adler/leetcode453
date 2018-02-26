//每次移动只能对n - 1个元素值+1
/*
Given a non-empty integer array of size n, find the minimum number of moves required to make all array elements equal, where a move is incrementing n - 1 elements by 1.

Example:

Input:
[1,2,3]

Output:
3

Explanation:
Only three moves are needed (remember each move increments two elements):

[1,2,3]  =>  [2,3,3]  =>  [3,4,3]  =>  [4,4,4]*/
//思路：

/*
首先，每次加一的元素肯定是数组中最小的n-1和元素
其次，把最小的n-1个元素都加1，相当于所有元素都加1，最大的元素减一，因为题目要求最后的元素值相同即可，所以所有元素加一操作完全可以去掉，即每一次的“移动”操作等价于把最大元素减一
再次，经过多次“移动”，必然能达到元素值完全相同，且最终状态为每个元素都等于初始数组的最小值，因为每次“移动”都是把最大值减一，只要数组中最大值不等于最小值，那么就会对最大值减一。
最后，移动的次数等于sum(nums)-min(nums)*len(nums)，
因为每次都只能减一，且最终状态为最小值，对于nums[i]，变化到最小值需要nums[i]-min(nums)
对于所有元素都变成最终状态则需要sum(nums)-min(nums)*len(nums)次移动*/

class Solution {
public:
    int minMoves(vector<int>& nums) {
        int res = 0;
        int sum = 0;
        int i;
        for(i = 0;i < nums.size();i++)
        {
            sum += nums[i];
        }
        sort(nums.begin(),nums.end());//注意这里是vector的排序方法
        res = sum - nums[0] * nums.size();
        return res;
    }
};
