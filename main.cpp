//ÿ���ƶ�ֻ�ܶ�n - 1��Ԫ��ֵ+1
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
//˼·��

/*
���ȣ�ÿ�μ�һ��Ԫ�ؿ϶�����������С��n-1��Ԫ��
��Σ�����С��n-1��Ԫ�ض���1���൱������Ԫ�ض���1������Ԫ�ؼ�һ����Ϊ��ĿҪ������Ԫ��ֵ��ͬ���ɣ���������Ԫ�ؼ�һ������ȫ����ȥ������ÿһ�εġ��ƶ��������ȼ��ڰ����Ԫ�ؼ�һ
�ٴΣ�������Ρ��ƶ�������Ȼ�ܴﵽԪ��ֵ��ȫ��ͬ��������״̬Ϊÿ��Ԫ�ض����ڳ�ʼ�������Сֵ����Ϊÿ�Ρ��ƶ������ǰ����ֵ��һ��ֻҪ���������ֵ��������Сֵ����ô�ͻ�����ֵ��һ��
����ƶ��Ĵ�������sum(nums)-min(nums)*len(nums)��
��Ϊÿ�ζ�ֻ�ܼ�һ��������״̬Ϊ��Сֵ������nums[i]���仯����Сֵ��Ҫnums[i]-min(nums)
��������Ԫ�ض��������״̬����Ҫsum(nums)-min(nums)*len(nums)���ƶ�*/

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
        sort(nums.begin(),nums.end());//ע��������vector�����򷽷�
        res = sum - nums[0] * nums.size();
        return res;
    }
};
