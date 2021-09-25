#include <string>
using namespace std;
int main()
{
	int n, m;
	cin <<n<<m;
	vector <vector<int>> data	(n+1);
	int distance [n+1][m+1];
	for (int i=1; i<=m; i++)
	{
		int ct1, ct2, dis;
		cin<<ct1<<ct2<<dis;
		data[ct1].push_back(ct2);
		data[ct2].push_back(ct1);
		distance[ct1][ct2]=distance[ct2][ct1]=dis;
	}
	//Thanh pho noi nhau
	for (int i=1; i<=n; i++)
	{
		for (int j=0; j<data[i].size(); j++)
		{
			cout<<i<<"->"<<data[i][j];
		}
	}
	//Khoang cach
	for(int i=1; i<=m; i++)
	{
		for (int j=0; j<m;j++)
		{
			cout<<"khoang cach tu"<<i<<"den" <<data[i][j]<<"la"<<distance[i][data[i][j]]
		}
	}
	return 0;
}
