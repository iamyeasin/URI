#include<bits/stdc++.h>
#define sf scanf 
#define pf printf

using namespace std;

int main()
{
	int a;
	while(sf("%d",&a) != EOF)
	{
		if(a)pf("vai ter duas!\n");
		else if(!a)pf("vai ter copa!\n");
	}
	
	
	return 0;
}

