/*Optimize the time .0.04 ate*/

#include<bits/stdc++.h>
#define sf scanf
#define pf printf


using namespace std;

long incr(long ip, double gr)
{
	return ip*gr;
}


int main()
{
	int kase;
	sf("%d",&kase);
	
	while(kase--)
	{
		
		long a,b,yr=0;bool flag = false;
		double g,gg;
		
		sf("%ld %ld %lf %lf",&a,&b,&g,&gg);
		double rt1 = (g*1.00)/100.00; double rt2 = (gg*1.00)/100.00;
		while(1)
		{
			if(yr > 100 || a>b)
			{
				if(yr > 100)
				{
					pf("Mais de 1 seculo.\n");
					flag=1;
				}
				break;
			}
			else
			{
				yr++;
				a += incr(a,rt1);
				b += incr(b,rt2);
				
			}
		}
		if(!flag)pf("%ld anos.\n",yr);
		
		
	}
	

    return 0;
}
