#include<iostream>
#include<stdio.h>
#include<math.h>

using namespace std;

int main()
{
    float n1,n2,n3,n4,n5,n6;
    cin>>n1>>n2>>n3>>n4;

    float avrg = n1+n2+n3+n4;
    float  sum = avrg/4.00;
    printf("Media: %0.1f\n",sum);

    if(sum >= 7.00)
    {
        cout<<"Aluno aprovado."<<endl;
    }
    else if(sum < 5.00)
    {
        cout<<"Aluno reprovado."<<endl;
    }
    if(sum >= 5.00 && sum <= 6.9)
    {
        cout<<"Aluno em exame."<<endl;
        cin>>n5;
        float sum2 = sum+n5;

        printf("Nota do exame: %0.1f\n",n5);

        if(sum2 >= 5.0)
        {
            cout<<"Aluno aprovado."<<endl;
            printf("Media final: %0.1f\n",sum2/2.00);

        }
        else if(sum2 < 5.0)
        {
            cout<<"Aluno reprovado."<<endl;
            printf("Media final: %0.1f\n",sum2/2.00);
        }
    }



    return 0;
}
