#include<bits/stdc++.h>

using namespace std;

int main()
{
    int x,y,al,gas,die;
    al=gas=die=0;

    while(1)
    {
        scanf("%d",&x);
        if(x == 4)
        {
            printf("MUITO OBRIGADO\n");
            printf("Alcool: %d\n",al);
            printf("Gasolina: %d\n",gas);
            printf("Diesel: %d\n",die);

            break;
        }

            switch(x)
            {
                case 1:
                    al++;
                    break;
                case 2:
                    gas++;
                    break;
                case 3:
                    die++;
                    break;
                deafult:
                    continue;
            }
    }


    return 0;
}
