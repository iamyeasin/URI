#include<bits/stdc++.h>
#define mx 1000007

using namespace std;

int main()
{
    int kase=1;
    char s[500],ss[500];

    while(gets(s) != '\0'){
        gets(ss);
        int l1 = strlen(s);
        int l2 = strlen(ss);
        if(l2 < l1){
            printf("Caso #%d:\nNao existe subsequencia\n",kase++);
        }

 bool flag=1;
        if(l1 == l2){
            if(!(strcmp(s,ss))){
                flag=0;
                printf("Caso #%d:\nQtd.Subsequencias: 1\nPos: 1\n",kase++);
            }
            else{
                    flag=0;
                printf("Caso #%d:\nNao existe subsequencia\n",kase++);
            }
        }

        if(l1<l2){
            int counter=0,j,x=0,pos=0;
            for(int i=0; i<l2; i++){
                if(ss[i] == s[0]){
                    for(j=1; j<l1; j++){
                        if(s[j] != ss[i+j])break;
                    }
                    if(j == l1){
                                counter++;pos=i+1;
                    }
                }
            }
            if(counter > 0){
                printf("Caso #%d:\nQtd.Subsequencias: %d\nPos: %d\n",kase++,counter,pos);
            }else{
                  printf("Caso #%d:\nNao existe subsequencia\n",kase++);
            }
        }

        puts("");
    }


    return 0;
}
