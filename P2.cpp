#include<iostream>
using namespace std;
int count(int n,int a,int b)
{
	if(n==1) return a;
	else if(n==2) return b;
	return count(n-1,a,b)+count(n-2,a,b);
}
int main()
{
	int num;
	cin>>num;
	while(num--)
	{
		int n;
		int a,b;
		cin>>a>>b;
		cin>>n;
		cout<<count(n,a,b)<<endl;
	}	
}
