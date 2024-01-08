#include<iostream>
using namespace std;
int main()
{
	string code;
	string ans;
	cin>>ans;
	bool out=false;
	int i;
	int lens=ans.length();
	while(cin>>code)
	{
		out=false;
		if(code=="0") break;
		int len=code.length();
		for(i=0;i<len;i++)
		{
			if(code[i]==ans[0] && code[i+lens-1]==ans[lens-1])
			{
				out=true;
				for(int comp=i;comp<i+lens;comp++)
				{
					if(code[comp]==ans[comp-i])
						continue;
					else
					{
						out=false;
						break;
					}
				}
				if(out==true) break;
			}
			if(out==true) break;
		}
		if(out==false) cout<<"Password Error"<<endl;
		else cout<<i+1<<" "<<i+lens<<endl;
	}
  return 0;
}
