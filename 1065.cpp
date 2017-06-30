#include<stdio.h>

int main()
{
    int arr[5],counter=0;
    for(int i=0; i<=4; i++)
    {
        scanf("%d",&arr[i]);
    }

    for(int j=0; j<=4; j++)
    {
        if(!(arr[j]&1))
        {
            counter++;
        }
    }

    printf("%d valores pares\n",counter);

    return 0;
}
