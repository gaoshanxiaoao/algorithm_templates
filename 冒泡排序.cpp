#include<iostream>

using namespace std;
int a[20];
int main()
{
	int n;cin>>n;
	for(int i = 1;i<=n;i++)
	{
		cin >> a[i];
	}
	
	for(int i =n;i>=1;i--)
	{
		for(int j = 1;j<n;j++)
		{
			if(a[j]>a[j+1])
			{
				swap(a[j],a[j+1]);
			}
		}
	}

	for(int i =1;i<=n;i++)
	{
		cout << a[i]<<" ";
	}

	return 0;
}