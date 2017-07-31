#include<bits/stdc++.h>

using namespace std;

int main()
{
    long kase;

    while(scanf("%d",&kase),kase){
        int arr[12],arr2[12],sum1=0,sum2=0;

        for(int i=1; i<=kase; i++){ scanf("%d",arr+i); sum1 += arr[i]; }
        for(int i=1; i<=kase; i++) { scanf("%d",arr2+i); sum2 += arr2[i]; }

        int counter=0,flag1=0,flag2=0,counter2=0;
        for(int i=1; i<=kase-2; i++){
            if(arr[i] == arr[i+1] && arr[i+1] == arr[i+2]){
               flag1 = 1;
            }
            if(arr2[i] == arr2[i+1] && arr2[i+1] == arr2[i+2]){
                flag2 = 1;
            }
            if(flag1 && flag2) break;
            else if(flag1){sum1 += 30; break; }
            else if(flag2) {sum2 += 30; break; }

        }

        if(sum1==sum2)puts("T");
        else if(sum1 < sum2)puts("L");
        else if(sum1 > sum2)puts("M");


    }



    return 0;
}
