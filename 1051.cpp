/*
FOR 1st 2000 rs there will be no tax. so 3002.00
so from 3002.00 we reduce 2000.00
remains 1002.00
then for next 1000.00 rs charge will be 0.08 or (8/100)
it will be for 1000 rs we will get (0.08*1000)/100;
then for rest of the 2 rs we get (2*18)/100.00;
*/
#include<stdio.h>

int main()
{
    float taxes,total;
    scanf("%f",&total);
    taxes = 0.00;

    if(total > 0.00 && total <= 2000.00)
    {
        printf("Isento\n");
    }
    else
    {
        total = total - 2000.00; // For 2000 NO TAX

        if(total > 0.00) // FOR NEXT TAX
        {
            if(total >= 1000.00) // IF NEXT TAX VALUE IS MORE THAN 1000
            {
                taxes = taxes+(1000.00*(8.00/100.00)); // THEN ADD TAX FOR 1000 RS
            }
            else
            {
                taxes = taxes+(total*(8.00/100.00));
            }
            total = total - 1000.00;
        }

        if(total > 0.00) // IF there TAX is more than 0
        {
            if(total >= 1500.00) // IF this value is more than 1500
            {
                taxes = taxes+(1500.00*18.00/100.00);
            }
            else
            {
                taxes = taxes+(total*18.00/100.00); // If it is less than 1000
            }

            total = total - 1500.00;
        }


        if(total > 0.00)
        {
            taxes = taxes+((total)*28/100.00); // for rest of the money it'll be 28%
        }

        printf("R$ %0.2lf\n",taxes);

    }



    return 0;
}
