/*Just draw a 24 hour format clock . Then calculate the time.*/


#include<bits/stdc++.h>
#define sf scanf
#define pf printf

using namespace std;

int main()
{	
	while(1)
	{
		long sh,fh,sm,fm,mm=0;
		cin >> sh >> sm >> fh >> fm;
		
		if(sh == sm && sm == fh  && fh == fm)
		{
			pf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
		}
		else
		{
			
			
			while(1)
			{
				if(sm == fm && sh == fh) break;
				else
				{
					mm++;
					sm++;
					if(sm > 59)
					{
						sm = 0;
						sh++;
					}
					
					if(sh > 24) sh = 1;
				}
				
			}
		
		int min = (mm % 60);
		int hr = (mm-min)/60;
		
		pf("%d %d\n",mm,hr,min);

		}
	} // EOF loop
	
	
	
	
	
	return 0;
	
}

