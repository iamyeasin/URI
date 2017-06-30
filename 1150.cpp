#include<bits/stdc++.h>

using namespace std;

int main()
{
    int x,y,f1,f2,sum;
    f1= f2= y=sum=0;
    scanf("%d",&x);

    while(1)
    {
        if(!f2)
        {
            scanf("%d",&y);
            if(y>x)
            {
                f2 = 1;
                break;
            }
        }

    }
    int counter = 0;
    //cout<<x<<" "<<y<<endl;
    for(int i=x; i<y; i++)
    {
        sum = sum+i;
        counter++;
        //cout<<sum<<endl;
        if(sum >= y)
        {
            printf("%d\n",counter);
            break;
        }
    }


    return 0;
}
