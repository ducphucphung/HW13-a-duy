#include <vector>
using namespace std;
struct dovat
{
	int value;
	int weight;
}
vector <dovat> antrom;
bool cmp(dovat A, dovat B)
{
	if (A.value/A.weight > B.value/B.weight)
	{
		return (A.value/A.weight > B.value/B.weight);
	}
	else if (A.weight==B.weight)
	{
		return (A.value>B.value)
	}
	
}
int main()
{
	int num, k;
	cin >>num>>k;
	for (int i=0; i<n; i++)
	{
		int giatri, trongluong;
		dovat tmp
		tmp.value=giatri;
		tmp.weight=trongluong;
		antrom.push_back(tmp);		
	}
	sort(antrom.begin(), antrom.end(), cmp);
	cout<<endl;
	for(int i=0; i<antrom.size(); i++)
	{
		cout<<antrom[i].value<<" "<<antrom[i].weight<<endl;
	}
	return 0;
}
