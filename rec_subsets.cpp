//program to create subsets using recursion
#include<bits/stdc++.h>
using namespace std;

void subset(int i,int n,int a[],vector<int>&res)
{
	if(i==n)
	{
		for(auto it:res)
		{
			cout<<it<<" ";
		}
		cout<<"\n";
		return;
	}
	//logic to pick
	if(i<n)
	{
		res.push_back(a[i]);
		subset(i+1,n,a,res);
		res.pop_back();
	}
	//logic to non-pick
	subset(i+1,n,a,res);
}

int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)cin>>a[i];
	vector<int>res;
	subset(0,n,a,res);
}
