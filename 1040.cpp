#include<bits/stdc++.h>

using namespace std;

int main()
{
    double N1,N2,N3,N4,N5;
    scanf("%lf %lf %lf %lf",&N1,&N2,&N3,&N4);

    N1 = N1*2.00;
    N2 = N2*3.00;
    N3 = N3*4.00;
    N4 = N4*1.00;

    double avrg = (N1 + N2 + N3 + N4)/(10.00);
    printf("Media: %.1lf\n",avrg);

    if(avrg >= 0)
    {
        if(avrg >= 7)
        {
            printf("Aluno aprovado.\n");
        }
        else if(avrg >= 5)
        {
            printf("Aluno em exame.\n");
            scanf("%lf",&N5);
            printf("Nota do exame: %.1lf\n",N5);

            double res = (avrg + N5)/2.0;
            if(res >= 5)
            {
                printf("Aluno aprovado.\n");
            }
            else
            {
                printf("Aluno reprovado.\n");
            }

            printf("Media final: %.1lf\n",res);

        }
        else
        {
            printf("Aluno reprovado.\n");
        }
    }



    return 0;
}
