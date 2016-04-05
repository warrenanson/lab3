#include <iostream>
#include <fstream>
#include <algorithm>
#include <vector>
using namespace std;

//vector<int>vec(n);

int main()
{
	int n,sum=0;
	ifstream infile("file.in",ios::in);
	infile>>n;
	vector<int>vec(n);
	for(int i=0;i<n;i++)
		infile>>vec[i];

	sort(vec.begin(), vec.end());
//	for(int i=0;i<n;i++)
//		cout<<vec.at(i)<<" ";

	
	for(int i=n-1;i>n-6;i--)
		sum=sum+vec[i];
	cout<<sum<<endl;

	return 0;
}
