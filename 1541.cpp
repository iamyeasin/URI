#include<bits/stdc++.h>
#define sf scanf 
#define pf printf

using namespace std;

int main()
{
	int a,b,c;
	while(1)
	{
		sf("%d",&a);
		if(!a)break;
		sf("%d %d",&b,&c);
		double land = trunc( sqrt(a*b *(100.00/(c*1.00)))); // 100 arear moddhe ami joto tuku bebohar korte parbo
		cout << land << endl;
			
	}
	
	
	return 0;
}

