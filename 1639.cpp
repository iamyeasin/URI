#include<bits/stdc++.h>
#include <stdio.h>
#include <iostream>
#include <string.h>
#include <algorithm>

using namespace std;

int main()
{
//            freopen("input.txt.txt","rt",stdin);
////        freopen("output.txt.txt","wt",stdout);
//            freopen("o2.txt","wt",stdout);

        char num[9],n[9];
        set < long > s,y;
        while(scanf("%s",n)){
            int len  = strlen(n);
            if(n[0] == '0' && len == 1)break;
            int x=0,counter=0;

            while(1){

                long nm = atol(n);
                long mt = nm * nm;
                s.insert(nm);
                if(counter >= 111 || !nm)break;
                int l = 7;

                while(mt>0){
                    num[l--] = mt%10 + '0';
                    mt /= 10;
                }

                for(int i=0; i<=l; i++)num[i]='0';
                num[8] = '\0';

                n[0] = num[2]; n[1] = num[3];
                n[2] = num[4]; n[3] = num[5];
                n[4] = '\0';
                counter ++;
            }

            printf("%d\n",s.size());
            s.clear();

        }



    return 0;
}
