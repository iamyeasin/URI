#include<bits/stdc++.h>
#define mx 1000007

using namespace std;

int main()
{
    int a,b;
    scanf("%d",&a);

    while(a--){
        int c,d;
        scanf("%d %d %d",&b,&c,&d);
        if(b<10)printf("0%d:",b);
        else printf("%d:",b);

        if(c<10)printf("0%d - ",c);
        else printf("%d - ",c);

        if(d)puts("A porta abriu!");
        else puts("A porta fechou!");

    }


    return 0;
}
