#include<bits/stdc++.h>

using namespace std;

int main()
{
    int day1,day2;
    int H1,M1,S1;
    int H2,M2,S2;
    scanf("Dia %d\n",&day1);
    scanf("%d : %d : %d\n",&H1,&M1,&S1);
    scanf("Dia %d\n",&day2);
    scanf("%d : %d : %d",&H2,&M2,&S2);

    int S = S2-S1;
    int M = M2-M1;
    int H = H2-H1;
    int D = day2 - day1;

    if(S < 0)
    {
        S += 60;
        M--;
    }
    if(M < 0)
    {
        M += 60;
        H--;
    }
    if(H < 0)
    {
        H += 24;
        D--;
    }

    printf("%d dia(s)\n",D);
    printf("%d hora(s)\n",H);
    printf("%d minuto(s)\n",M);
    printf("%d segundo(s)\n",S);

    return 0;
}
