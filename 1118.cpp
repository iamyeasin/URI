#include<bits/stdc++.h>
#define sf scanf
#define pf printf

using namespace std;

int main()
{
	double x,y,flag;
	int tc;

	while(1)
	{
		flag = 0;
		sf("%lf",&x);

		if(x >= 0.0  && x <= 10.00)
		{
			while(1)
			{
				sf("%lf",&y);
				if(y >= 0.00 && y <= 10.00)
				{
					pf("media = %0.2lf\n",((x+y)/2.00));
					break;
				}
				else
				{
					pf("nota invalida\n");
				}
			}
		}
		else
		{
			pf("nota invalida\n");
			continue;
		}

		while(1)
		{
			sf("%d",&tc);
			pf("novo calculo (1-sim 2-nao)\n");

			if(tc == 1)break;
			else if(tc == 2)
			{
				flag=1;
				break;
			}

		}

		if(flag)break;
	}





	return 0;
}
