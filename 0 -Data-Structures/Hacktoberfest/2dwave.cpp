// 2dwave.cpp
#include <iostream>
using namespace std;
int main()
{
	int a[3][4];
	int value=0;

	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			a[i][j]=value;
			value++;
		}
	}

	for(int i=0; i<3; i++)
	{
		if(i%2==0)
		{
			for(int j=0; j<3; j++)
			{
				cout<<a[j][i];
			}
		}
		else
		{
			for(int j=2; j>=0; j--)
			{
				cout<<a[j][i];
			}
		}
		cout<<endl;
	}

	return 0;
}

// 0 1 2
// 3 4 5
// 6 7 8