/*Get a suitable solution idiot! */

#include<bits/stdc++.h>
#define sf scanf 
#define pf printf

using namespace std;

int main()
{
	//~ freopen("in.txt","rt",stdin);
	//~ freopen("out.txt","wt",stdout);
	
	int mat[256][256];
	int n;
	
	while(sf("%d",&n) != EOF)
	{
		int x=0,y=n-1;
		for(int i=0; i<n; i++)
		{
			for(int j=0; j<n; j++)
			{
				mat[i][j] = 0;
				mat[i][x] = 2;
				mat[i][y] =3;
			}
			x++;y--;
		}
		
		int res = n/3,half = n-(2*res);
		int xx;
		xx= res;
		
		for(int i=0; i<half; i++)
		{
			int pos = res;
			for(int j=0; j<half; j++)
			{
				mat[xx+i][pos+j] = 1;
		
			}
		}
		mat[n/2][n/2] = 4;
		
		
		for(int i=0; i<n; i++)
		{
			for(int j=0; j<n; j++)
			{
				pf("%d",mat[i][j]);
			}
			pf("\n");
		}
		
		pf("\n");
	}
	
	
	return 0;
}
