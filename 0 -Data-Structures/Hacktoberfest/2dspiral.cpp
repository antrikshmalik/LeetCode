// 2dspiral.cpp
#include <iostream>
using namespace std;

void spiral(int a[100][100], int row, int col)
{
	int sr=0;
	int er=row-1;
	int sc=0;
	int ec=col-1;

	while(sr<=er && sc<=ec)
	{
		// print sr
		// sc to ec
		// sr++
		for(int i=sc; i<=ec; i++)
		{
			cout<<a[sr][i];
		}
		sr++;

		// print ec
		// sr to er
		// ec--

		for(int i=sr; i<=er; i++)
		{
			cout<<a[i][ec];
		}
		ec--;

		// print er
		// ec to sc
		// er--
		if(sr<er)
		{

			for(int i=ec; i>=sc; i--)
			{
				cout<<a[er][i];
			}
			er--;
		}

		// print sc
		// er to sr
		// sc++
		if(sc<ec)
		{
			for(int i=er; i>=sr; i--)
			{
				cout<<a[i][sc];
			}
			sc++;
		}


	}

	// 0  1  2  3
	// 4  5  6  7
	// 8  9  10 11
	// 12 13 14 15
}

int main()
{
	int a[100][100];
	int r,c;
	cin>>r>>c;
	int value=0;

	for(int i=0; i<r; i++)
	{
		for(int j=0; j<c; j++)
		{
			a[i][j]=value;
			value++;
		}
	}

	spiral(a,r,c);


	return 0;
}