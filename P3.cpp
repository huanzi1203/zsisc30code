#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		int i,r,x;
		float k=0;
		cin>>i>>r>>x;
		for(int t=1;t<=i;t++)
		{
			int money;
			cin>>money;
			if(t==r) k+=money*2;
			k+=money;
		}
		if(k>=x)
		k*=1.1;
		cout<<k<<endl;
	}
}
