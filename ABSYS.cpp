#include<bits/stdc++.h>
using namespace std;
int main()
{
	long int t;
	cin>>t;
	while(t--)
	{
		string a,b,c,d,e;
		size_t pos=-1;
		long int fi,sec,thi,c1=0,c2=0;
		cin>>a>>b>>c>>d>>e;
		pos=a.find("machula");
		if(pos!=-1)
		{
			sec=stoi(c);
			thi=stoi(e);
			fi=thi-sec;
			c1=1;
		}
		pos=-1;
		pos=c.find("machula");
		if(pos!=-1)
		{
			fi=stoi(a);
			thi=stoi(e);
			sec=thi-fi;
			c2=1;
		}
		if(c1==0&&c2==0)
		{
			 fi=stoi(a);
			 sec=stoi(c);
			 thi=fi+sec;
		}
   // cout<<a<<b<<c<<d<<e;
		cout<<fi<<" "<<'+'<<" "<<sec<<" "<<'='<<" "<<thi<<endl;
	}
} 
