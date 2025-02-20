#include<iostream>
using namespace std;
int a[110];
int main()
{
	int n;cin >> n;
	for(int i =1;i<=n;i++)
	{
		cin >> a[i];
	}
	for(int i =1;i<=n;i++)
	{
		int min_1 = a[i];
		int pos = i;
		for(int j =i+1;j<=n;j++)
		{
			if(min_1 > a[j])
			{
				min_1 = a[j];
				pos = j;
			}
		}
		swap(a[i],a[pos]);
	}

	for(int i = 1;i<=n;i++)
	{
		cout << a[i]<<" ";
	}

	return 0;
}