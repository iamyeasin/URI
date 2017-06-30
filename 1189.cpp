#include<bits/stdc++.h>

using namespace std;

int main()
{
    double num[12][12];
    int n;
    char ch;
    scanf("%c",&ch);


    for(int i=0; i < 12; i++)
    {
        for(int j=0; j < 12; j++)
        {
            scanf("%lf",&num[i][j]);
        }
    }
    double sum = 0;
    int counter = 0,i,j;

    for(j=0; j<5; j++) // First e 0 column er sob gula green box er value jog korsi. pore 1 er sob gula..
                        //eivabe 4 porjonto loop ghuraisi.
    {
        for(i=j+1;  i < 12-j-1; i++) // protibar i theika j porjonto eivabe loop ghuraisi
        {
            sum += num[i][j]; // Just row tare column hisebe cinta korsi. ar column da re row hisebe.
            counter++;
        }
    }

    //cout<<counter<<endl;
    if(ch == 'S')
    {
        printf("%.1lf\n",sum);
    }
    else if(ch == 'M')
    {
        printf("%.1lf\n",(sum*1.00)/counter*1.0);
    }



    return 0;
}
