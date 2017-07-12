#include<stdio.h>
#include<algorithm>
#include<iostream>
 
using namespace std;
 
int main()
{
	long arr[100000],n;
	int i,j,k;
 
	while(scanf("%d",&n)==1)
	{
 
		for(i = 0 ; i < n ; i++)
		{
			scanf("%d",&arr[i]);
		}
	 
		sort(arr,arr+n);
	 
		for(j = 0 ; j < n ; j++)
		{
			if(arr[j] % 2 == 0)
				cout<<arr[j]<<endl;

		}
	 
		for(k = n -1 ; k >= 0 ; k--)
		{
			if(arr[k] % 2 ==1)
				cout<<arr[k]<<endl;

		}
	}
	return 0;
}