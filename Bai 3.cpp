#include <vector>
using namespace std;
struct toado
{
	int x;
	int y;
}
bool cmp (toado A, toado B)
{
	return (A.x>B.x)
}
bool cmp1 (toado A, toado B)
{
	return (A.x>B.x)
}
int main()
{
	vector <toado> vecto;
	for (int i=0; i<5; i++)
	{
		int n, m;
		cin>>n>>m
		toado tmp;	
		tmp.x=n;
		tmp.y=m;
		vecto.push_back(tmp);	
	}
	for (int i=0; i<5; i++)
	{
		cout<<vecto[i].x<<vecto[i].y;	
	}
	sort(vecto.begin(),a.end(), cmp);
	for (int i=0; i<5; i++)
	{
		cout<<vecto[i].x<<vecto[i].y;
    }
    sort(vecto.begin(),a.end(), cmp1);
	for (int i=0; i<5; i++)
	{
		cout<<vecto[i].x<<vecto[i].y;
    }
    return 0;
}

