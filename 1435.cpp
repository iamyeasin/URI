/*Didn't get the head cool to prune. Ate .65 sec. Get time*/

#include<bits/stdc++.h>
#define sf scanf
#define pf printf

using namespace std;

int main()
{
	
	//~ freopen("in.txt","rt",stdin);
	//~ freopen("out.txt","wt",stdout);
	
	int n;
	while(sf("%d",&n),n)
	{
		if(n==1)
		{
			pf("  1\n\n");
			continue;
		}
		else if(n==2)
		{
			pf("  1   1\n  1   1\n\n");
			continue;
		}
		
		
		
		int matrix[500][500];
		for(int i=1; i<=n; i++)
		{
			for(int j=1; j<=n; j++)
			{
				matrix[i][j]=1;
			}
		}
		
		int x = 2, y=n-1;
		
		while(1)
		{
			int up=x;
			if(x > y)
			{
				matrix[n][n]++;
				break;
			}
			
			while(up <= n)
			{
				for(int j=x; j<=y; j++)
				{
					matrix[up][j]++;
				}
				up++;
			}
			x++;y--;
			
		}
		int digit=0;
		int nn = n/2;
		
		while(nn>0)
		{
			nn = nn/10;digit++;
		}
		
		
		for(int i=1; i<=(n/2)+1; i++)
		{
			for(int j=1; j<=(n); j++)
			{
				if(j==1)
				{
					pf("  %d",matrix[i][j]);
				}
				else if(j != n)
				{
					int num = matrix[i][j];
					if((num/10) > 0)
					{	
						pf("  %d%d",num/10,num%10);
					}
					else if((num/10) == 0)
					{
						pf("   %d",num);
						
					}
					
				}
				else if(j == n)
				{
					int num = matrix[i][j];
					if((num/10) > 0)pf("  %d%d\n",num/10,num%10);
					else if(!(num/10))pf("   %d\n",num);
				}
			
			}
			
		}
		int f = (n&1) ? n/2 : n/2-1;
		
		//~ cout << digit << endl; 
		for(int i=f; i>=1; i--)
		{
			for(int j=1; j<=(n); j++)
			{
				if(j==1)
				{
					pf("  %d",matrix[i][j]);
				}
				else if(j != n)
				{
					int num = matrix[i][j];
					if((num/10) > 0)
					{	
						pf("  %d%d",num/10,num%10);
					}
					else if((num/10) == 0)
					{
						pf("   %d",num);
						
					}
				}
				else if(j == n)
				{
					int num = matrix[i][j];
					if((num/10) > 0)pf("  %d%d\n",num/10,num%10);
					else if(!(num/10))pf("   %d\n",num);
				}
			}
		}
		
		pf("\n");
		
	}



	return 0;
}
