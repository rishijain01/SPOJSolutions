#include <iostream>
using namespace std;
int main() 
{
	long int t;
	cin>>t;
	while(t--)
	{
		long int n,k,T,f;
		cin>>n>>k>>T>>f;
		cout<<n+k*((f-n)/(k-1))<<endl;
	}
	return 0;
} 
