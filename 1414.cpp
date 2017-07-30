/*Total winning point is 3*b but my counted point is  draw. so rest of the matches is 3*b - draw */

#include<stdio.h>
#define sf scanf
#define pf printf

int main()
{
//    freopen("in.txt","rt",stdin);
//    freopen("out.txt","wt",stdout);

   int a,b;
    while(sf("%d %d",&a,&b),a){
        char team[256]; int p,draw=0;
        for(int i=1; i<=a; i++){
            sf("%s %d",team,&p);
            draw += p;
        }

        pf("%d\n",(b*3)-draw);

    }

    return 0;
}
