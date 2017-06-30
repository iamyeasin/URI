#include<stdio.h>

int main()
{
    double arr[6];
    int counter=0;
    for(int i=0; i<=5; i++)
    {
        scanf("%lf",&arr[i]);
    }

    for(int j=0; j<=5; j++)
    {
        if(arr[j] > 0.00)
        {
            counter++;
        }
    }

    printf("%d valores positivos\n",counter);

    return 0;
}
