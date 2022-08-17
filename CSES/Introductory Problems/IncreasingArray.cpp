#include<iostream>
#include<vector>
using namespace std;
#define int long long
//trying out some new things
//https://cses.fi/problemset/task/1094

int solve(vector<int>&nums, int n)
{
	int ans=0;
	for(int i=1; i<n; i++)
	{
		if(nums[i]<=nums[i-1]){
		ans+=(nums[i-1]-nums[i]);
		nums[i]=nums[i-1];
        }
	}
	return ans;
}
signed main()
{
	int n;
	cin>>n;
	vector<int> nums(n);
	for(int i=0; i<n; i++)
		cin>>nums[i];
	cout<<solve(nums, n);
}