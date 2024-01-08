#include<bits/stdc++.h>
using namespace std;
int main()
{
	string name[100];
	int like[100];
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>name[i]>>like[i];
	int comp;
	string comps;
	for(int i=0;i<n-1;i++)
	{
		for(int k=0;k<n-1;k++)
		{
			if(like[k]<like[k+1])
			{
				comp=like[k];
				like[k]=like[k+1];
				like[k+1]=comp;
				
				comps=name[k];
				name[k]=name[k+1];
				name[k+1]=comps;
			}
		}
	}
	for(int i=0;i<n;i++)
		cout<<name[i]<<" "<<like[i]<<endl;
}
