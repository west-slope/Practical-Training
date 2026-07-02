#include <iostream>
#include<vector>
#include<algorithm>
#include<cstring>
using namespace std;

vector<vector<int>> threeSum(vector<int>& nums, int target)
{
	vector<vector<int>> res;//储存结果
	sort(nums.begin(), nums.end());
	for(int i=0;i<nums.size();i++)
	{
		if (i && nums[i] == nums[i - 1])continue;//除去重复项
		for (int j = i + 1,k=nums.size()-1; j < nums.size() - 2; j++)
		{
			if (j > i + 1 && nums[j] == nums[j - 1])continue;//除去重复项
			while(j<k-1&&nums[i]+nums[j]+nums[k-1]>=target)
			{
				k--;
			}
			if (nums[i] + nums[j] + nums[k] == target)
				res.push_back({ nums[i],nums[j],nums[k] });
		}
	}
	return res;
}
bool comp(const vector<int>& a, const vector<int>& b)
{
	if (a[0] != b[0])return a[0] < b[0];
	if (a[1] != b[1])return a[1] < b[1];
	return a[2] < b[2];
}
int main()
{
	int target, n;
	cin >> target >> n;
	vector<int>nums(n);
	for(int i=0;i<n;i++)
	{
		cin >> nums[i];
	}
	vector<vector<int>>res;
	res = threeSum(nums, target);//求出所有三元组
	sort(res.begin(), res.end(),comp);//排序
	for(auto line:res)
	{
		cout << line[0] << " " << line[1] << " " << line[2] << endl;
		
	}
	return 0;
}