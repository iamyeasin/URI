#include<bits/stdc++.h>

using namespace std;

int main()
{
    unsigned long long int a,b;
    bool arr[500000];

    while(scanf("%llu %llu",&a,&b) != EOF)
    {

        int i=0;
        while(a>0 || b>0)
        {
            int x = (a > 0 ) ? a&1 : 0;
            int y = (b > 0) ? b&1 : 0;

            if(!x && !y)
            {
                arr[i++] = 0;
//            cout << i << " " << arr[i-1] << endl;
            }
            else if(x && y )
            {
                arr[i++] = 0;
//            cout << i << " " << arr[i-1] << endl;
            }
            else
            {
                arr[i++] = 1;
//            cout << i << " " << arr[i-1] << endl;
            }

//        cout << x  << " " << y << endl;
            a = a >> 1;
            b = b >> 1;
        }

//    reverse(arr,arr+i);
        unsigned long long sum =0;
        for(int k=0; k<i; k++)
        {
            int x = arr[k];
            if(x&1)
            {
//            cout << x << "  " << sum  << " " << endl;;
                sum +=( x * pow(2,k));
            }
        }

        printf("%llu\n",sum);

    }

    return 0;
}
/*This one just ate .41sec but short*/

#include<bits/stdc++.h>

using namespace std;

int main()
{
	
	unsigned long long int a,b;
	
	while(scanf("%llu %llu",&a,&b) != EOF)
	{
		cout << (a^b) << endl;
		
	}
	
	
	return 0;
}
