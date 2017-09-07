#include<bits/stdc++.h>
#define mx 1000007

using namespace std;

int main(){
        int days[] = {0,31,29,31,30,31,30,31,31,30,31,30,25};
        int d=0;

        int m,n;
        while(scanf("%d %d",&m,&n) != EOF){
                d=0;
            int mm = (12-m);
            for(int i=m; i<=12; i++){
                d+= days[i];
            }
            if(!(d-n))printf("E natal!\n");
            else if((d-n) < 0)printf("Ja passou!\n");
            else if((d-n) == 1)printf("E vespera de natal!\n");
            else printf("Faltam %d dias para o natal!\n",d-n);
        }
        
    return 0;
}
