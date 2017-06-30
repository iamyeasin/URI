/*Find time and optimize the time. 0.004 is a lot of time*/


#include<bits/stdc++.h>
#define sf scanf
#define pf printf

using namespace std;

int main()
{	
	
	//~ freopen("in.txt","rt",stdin);
	//~ freopen("out.txt","wt",stdout);
	
	//~ while(1)
	//~ {
		//~ char day[5];
		int sd,sh,sm,ss,fd,fh,fm,fs;
		
		sf("Dia %d",&sd);
		sf("%d : %d : %d\n",&sh,&sm,&ss);
		
		sf("Dia %d",&fd);
		sf("%d : %d : %d",&fh,&fm,&fs);
		
		
		//~ cout << sd << " " << sh << " " << sm << " "<< ss<< " " << fd << " " << fh << " " << fm << " " << fs << endl;
		//~ break;
		
		
		int sec=0,min=0,hr=0,day=0,counter =0;
		
		while(1)
		{
			if(sd == fd && sh == fh && sm == fm && ss == fs) break;
			else
			{
				sec++;
				ss++;
				
				if(ss > 59)
				{
					ss=0;
					sm++;
					
				}
				if(sm > 59)
				{
					sm = 0;
					sh++;
				}
				if(sh > 24)
				{
					sh = 1;
					sd++;
					
				}
			}
			
			counter++;
			//~ cout << sd << " " << sh << " " << sm << " "<< ss << endl;
			//~ if(counter > 320) break;
			
		}
		
		int sc = (sec%60); // Seconds;
		min = (sec-sc)/60;
		int mins = min%60; // Minuts
		hr = (min-mins)/60;
		int dd = hr%24; // Hours
		day  = (hr-dd) / 24;  // Dias or days
		
		
		pf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n",day,dd,mins,sc);
		
		
		
	//~ } // EOF loop
	
	
	
	
	
	return 0;
	
}
