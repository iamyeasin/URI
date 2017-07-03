#include<stdio.h>
#define sf scanf 
#define pf printf

//~ using namespace std;

int main()
{
	int a;
	while(sf("%d",&a) != EOF)
	{	
		int maxx=0,n;
		for(int i=1; i<=a; i++)
		{
			sf("%d",&n);
			if(n > maxx) maxx=n;
		}
		
		if(maxx < 10)pf("1\n");
		else if(maxx >= 10 && maxx < 20)pf("2\n");
		else pf("3\n");
	}
	
	
	
	
	return 0;
}

