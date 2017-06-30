#include<bits/stdc++.h>

using namespace std;

int main()
{
    int inter,gre,in,gr,goals,draw,x,xx,yy;

    in = gr = goals = draw = xx = yy =  0;

    while(scanf("%d %d",&in,&gr))
    {
        printf("Novo grenal (1-sim 2-nao)\n");

        goals++;

        if(in == gr)
        {
            draw++;
        }
        if(in > gr)
        {
            xx++;
        }
        else
        {
            yy++;
        }

        scanf("%d",&x);


        if(x == 2)
        {

            printf("%d grenais\n",goals);
            printf("Inter:%d\n",xx);
            printf("Gremio:%d\n",yy);
            printf("Empates:%d\n",draw);

            if(xx > yy)
            {
                printf("Inter venceu mais\n");
            }
            else if(xx < yy)
            {
                printf("Gremio venceu mais\n");

            }
            else if(xx & yy)
            {
                printf("Nao houve vencedor\n");
            }

            break;
        }

    }



    return 0;
}

