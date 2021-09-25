#include <vector>
using namespace std;
int main()
{
	vector <int> vecto = {1, 2, 3, 4, 5};
	vector <int> :: iterator itr;
	vector <int> :: reverse_iterator ritr;
	cout<<"print theo chi so duyet:";
	for (int i=0; i< vecto.size(); i++)
	{
		cout<<vecto[i]<<" "
	}
	cout<<endl;
	cout<<"print theo interator:"
	for (itr=vecto.begin(); itr!=vecto.end(); itr++)
	{
		cout<<*itr<<" ";
	}
	cout<<endl;
	cout<<"print theo interator duyet nguoc"
	for (ritr=vecto.rbegin(); ritr!=vecto.rend(); ritr++)
	{
		cout<<*ritr<<" "
	}
	cout<<endl;
	return 0;
}

