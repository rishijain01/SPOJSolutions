#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() 
{
	long int t;
	cin>>t;
	while(t--)
	{int ar[10][5]={{0,0,0,0,0},
	           {1,1,1,1,1},
	           {1,2,4,8,6},
	           {1,3,9,7,1},
	           {1,4,6,4,6},
	           {1,5,5,5,5},
	           {1,6,6,6,6},
	           {1,7,9,3,1},
	           {1,8,4,2,6},
	           {1,9,1,9,1}};
	 long long int b;
	 string a;
	 cin>>a>>b;
	 int aa=a[a.length()-1]-'0';
	 if(b%4==0&&b>0)
	 b=4;
	 else b=b%4;
	 cout<<ar[aa][b]<<"\n";
	}
	return 0;
} 
