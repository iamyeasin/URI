#include<bits/stdc++.h>
#define sf scanf
#define pf printf

using namespace std;

int main()
{
	//~ freopen("in.txt","rt",stdin);
	//~ freopen("out.txt","wt",stdout);
	
	int n;
	int matrix[500][500];
	
	while(sf("%d",&n),n)
	{
		for(int i=1; i<=n; i++)
		{
			for(int j=1; j<=n; j++)
			{
				matrix[i][j] = 0;
			}
		
		}
		
		
		if(n==1) {pf("  1\n\n"); continue;}
		else if(n == 2){ pf("  1   2\n  2   1\n\n"); continue;}
		else
		{
			for(int i=1; i<=n; i++)
			{
				int k=1;
				for(int j=i; j>=1; j--,k++)
				{
					matrix[i][k] = j;
					matrix[k][i] = j;
				}
			}
			
		
		for(int i=1; i<=n; i++)
		{
			for(int j=1; j<=n; j++)
			{
				int num = matrix[i][j];
				
				
				if(j==1)
				{
					if(num>0 && num <= 9)pf("  %d",num);
					else if(num > 9 && num <= 99) pf(" %d",num);
					else if(num == 100) pf("100");
				}
				else if(j != n)
				{
					if(num>0 && num <= 9)pf("   %d",num);
					else if(num > 9 && num <= 99) pf("  %d",num);
					else if(num == 100) pf(" 100");
				}
				else if(j == n)
				{
					if(num>0 && num <= 9)pf("   %d\n",num);
					else if(num > 9 && num <= 99) pf("  %d\n",num);
					else if(num == 100) pf(" 100\n");
				}
			
			}
			//~ pf("\n");
			
		}
		
		pf("\n");
	
		}
		
	}
	
	
	
	return 0;
}
