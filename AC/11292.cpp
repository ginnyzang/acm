#include<iostream>
#include<algorithm>
using namespace std;


int main()
{
	int n,m;
	while(cin>>n>>m)
	{
		if(n==0&&m==0)
			break;
		int D[n];		//dragon
		int H[m];		//hero
		int cost=0;     //cost
		int kill=0;		//num of dragon killed
		for(int i=0;i<n;i++)
		{
			cin>>D[i];
		}
		for(int i=0;i<m;i++)
		{
			cin>>H[i]; 
		}
		sort(D,D+n);
		sort(H,H+m);
		for(int i=0;i<m;i++)
		{
			if(H[i]>=D[kill])
			{
				cost+=H[i];
				kill+=1;
			}
			if(kill==n)
				break;
		}
		if(kill<n)
		{
			cout<<"Loowater is doomed!"<<endl;
		}
		else
		{
			cout<<cost<<endl;
		}
	}
	
	
} 
