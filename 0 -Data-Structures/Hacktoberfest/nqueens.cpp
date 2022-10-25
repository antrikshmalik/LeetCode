#include <iostream>
#include <cmath>
#include <climits>
#include <string>
using namespace std;
// Chinmay Srivastava
bool safe(int board[][10], int i, int j, int n)
{	
	for (int k = 0; k < n; k++)
	{	//verticallu and horizontally check karre hai 
		if (board[i][k] || board[k][j])//j ka i galti kar diya tha
		{
			return false;
		}
	}
	//right  diagonal(i dec and j inc)
	int x = i;
	int y = j;
	while (i >= 0 and j < n)
	{
		if (board[i][j])
		{
			return false;
		}
		i--;
		j++;
	}
	//left diagonal ( i and j both decreases )
	i = x;
	j = y;
	while (i >= 0 and j >= 0)
	{
		if (board[i][j])
		{
			return false;
		}
		i--;
		j--;
	}
	return true;
}

bool nqueen(int board[][10], int i, int n)
{
	//base case
	if (i == n)//jab last me pahunch jayenge toh khatam na last row pe
	{
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if(board[i][j]==1)
				cout<<"Q ";
				else
				cout<<"_ ";
			}
			cout << endl;
		}
		cout << endl;
		return true;
	}
	//recursive case
	for (int j = 0; j < n; j++)//puri row me har jagah place karke dekhna hai
	{
		if (safe(board, i, j, n) == true)//kya queen ko place karna safe hai??
		{	//agar hai toh place kardo queen ko at (i,j)
			board[i][j] = 1;
			//kya (i,j) pe rakhne ke baad neeche har jagah queen rakh paa rahe hai ?
			bool restsort = nqueen(board, i + 1, n);
			if (restsort == true)
			{	//agar haant toh return true
				return true;
			}
			// agar nahi toh next jaghah pe rakh ke dekho (i,j+1) pe aur (i,j) pe 0 kardo 
			board[i][j] = 0;
		}
		
	}
	//agar kahin hi nahi rakh  paaye toh bhai return false
	return false;
}

int main()
{
	int n;
	int board[10][10] = {0};
	cin >> n;
	nqueen(board, 0, n);
}
