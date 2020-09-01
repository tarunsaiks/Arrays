#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector<int> v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
		// cout << v.capacity() << endl;
		// cout << v[i] << "\n";
	}
	v.resize(5);
	cout << v.size() << endl;
	for (int i = 0; i < 11; i++)
	{
		cout << v[i] << " ";
	}
	return 0;
}
