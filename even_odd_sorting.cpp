#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
static bool cmp(int x,int y)
{
	if(x%2==0&&y%2==0)
		return x>y;
	if(x%2!=0&&y%2!=0)
		return x<y;
	if(x%2==0&&y%2!=0)
		return true;
	if(x%2!=0&&y%2==0)
		return false;
	}
int main()
{
	int n;
	cout<<"Enter size of array : ";
	cin>>n;
	vector<int>v(n);
	cout<<"Enter values : "<<"\n";
	for(int i=0;i<n;i++)
	{
		cin>>v[i];
    }
	sort(v.begin(),v.end(),cmp);
	for(int i=0;i<n;i++)
	{
		cout<<v[i]<<",";
	}	
	return 0;
}

