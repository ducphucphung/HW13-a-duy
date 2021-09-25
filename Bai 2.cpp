#include <vector>
#include <iostream>
using namespace std;
int main()
{
	vector <int> A(100);
	vector <int> B(100);
	vector <int> C(100);
	int row, col;
	freopen("input.txt", "r", stdin);
	cout<<"Nhap so hang cua :";
	cin>>row;
	cout<<"Nhap so cot:";
	cin>>col;
	for (int i=0; i<row;i++)
	for (int j=0; j<col; j++)
	{
		int tmp;
		cin>>tmp;
		A[i].push_back(tmp);
	}
	for (int i=0; i<row;i++)
	for (int j=0; j<col; j++)
	{
		int tmp;
		cin>>tmp;
		B[i].push_back(tmp);
	}
	for(int i=0; i<row; i++)
	{
		for (int j=0; j<col; j++)
		{
			C[i].push_back(A[i][j]+B[i][j]);
		}
	}
		for(int i=0; i<row; i++)
	{
		for (int j=0; j<col; j++)
		{
			cout<<C[i][j]<<" ";
		}
	}
}
