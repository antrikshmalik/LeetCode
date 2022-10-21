//mergearray
#include <iostream>
using namespace std;

void mergearray(int arr1[], int m, int arr2[], int n)
{
	int newArr[m+n];
	for (int i = 0; i < n; ++i)
	{
		newArr[i] = arr1[i];
	}
	for (int i=0,j=n; j<(m+n),i<m; j++,i++)
	{
		newArr[j] = arr2[i];
	}
    
    	cout<<endl<<"Combined array: "<<endl;
	for (int k = 0; k < (m+n); ++k)
	{
		cout<<newArr[k]<<" ";
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
	
	cout<<"helloo";
}
