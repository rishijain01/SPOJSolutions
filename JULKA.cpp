#include <iostream>
#include<boost/multiprecision/cpp_int.hpp>
#include<boost/multiprecision/cpp_dec_float.hpp>
using namespace boost::multiprecision;
using namespace std;
using boost::multiprecision::cpp_dec_float_50;
int main() 
{
    int t=10;
    while(t--)
    {
        cpp_int n,dif;
        cpp_int a,b;
        cin>>n>>dif;
        if(dif%2==1&&n%2==1)
        {
            a=(n+dif)/2;
            b=(n-dif)/2;
            // a++;
           //  b++;
            cout<<a<<endl<<b<<endl;
            continue;
        }
        if(dif%2==1||n%2==1)
        {
            a=(n+dif)/2;
            b=(n-dif)/2;
           // a++;
        //    b++;
            cout<<a<<".5"<<endl<<b<<".5"<<endl;
            continue;
        }
        a=(n+dif)/2;
        b=(n-dif)/2;
        cout<<a<<endl<<b<<endl;
    }
	return 0;
}
 
