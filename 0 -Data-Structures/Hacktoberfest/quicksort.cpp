// quicksort.cpp
#include <iostream>
using namespace std;

int partition(int *a, int s, int e)
{
	int i=s-1;
	for(int j=s; j<=e-1; j++)
	{
		if(a[e]>=a[j])
		{
			i++;
			swap(a[i],a[j]);
		}
	}
	swap(a[i+1],a[e]);
	return i+1;
}

void quicksort(int *a, int s, int e)
{
	// base case
	if(s>=e)
	{
		return;
	}

	// recursive case
	int j = partition(a,s,e);
	quicksort(a,s,j-1);
	quicksort(a,j+1,e);

}

int main()
{
	int a[7]={1,6,3,9,7,2,4};
	int n= sizeof(a)/sizeof(int);

	quicksort(a,0,n-1);

	for(int i=0; i<n; i++)
	{
		cout<<a[i]<<" ";
	}

	return 0;
}