/*******
#include<bits/stdc++.h>
#define sf scanf
#define pf printf
#define mx 100090

using namespace std;

int main()
{
	int x;
	while(sf("%d",&x) == 1)
	{
		if(!(x%6))
		{
			puts("Y");	
		}
		else 
		{
			puts("N");
		}
	}
	
	

    return 0;

}
*****/





#include<bits/stdc++.h>
#define sf scanf
#define pf printf
#define mx 100090

using namespace std;

int arr[460];

void ang()
{
	int x=0;
	for(int i=0; i<=180; i++)
	{
		arr[x++] = 6*i; 
	}
}


int main()
{
	ang();
	
	int x;
	while(sf("%d",&x) == 1)
	{
		if(binary_search(arr,arr+185,x))
		{
			puts("Y");	
		}
		else 
		{
			puts("N");
		}
	}
	
	

    return 0;

}
