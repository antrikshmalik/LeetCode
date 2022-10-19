//mergearray
#include <iostream>
using namespace std;

void mergearray(int a[], int m, int b[], int n)
{
	int i=m-1;
	int j=n-1;
	int k=m+n-1;
	while(i>=0 and j>=0)
	{
		if(a[i]>b[j])
		{
			a[k]=a[i];
			i--;
			k--;
		}
		else
		{
			a[k]=b[j];
			j--;
			k--;

		}
	}

	while(j>=0)
	{
		a[k]=b[j];
		j--;
		k--;
	}

	for(i=0; i<=m+n-1; i++)
	{
		cout<<a[i]<<endl;
	}

}

int main()
{
	int a[5]={1,3,5,7,8};
	int m=5;
	int b[3]={2,4,6};
	int n=3;
	mergearray(a,m,b,n);
	return 0;
	
	cout<<"helkloo"
}
