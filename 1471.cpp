#include<bits/stdc++.h>
#define sf scanf
#define pf printf

using namespace std;

bool ret[100004];

int main(){
    //    freopen("input.txt","rt",stdin);
    //    freopen("output.txt","wt",stdout);
   
    int a,b;
    while(scanf("%d %d",&a,&b) != EOF){
        for(int i=1; i<=b; i++){
            long n; cin >> n;
            ret[n] = 1;
        }
        int fl=0,counter=0; // to check everyone is alive
        for(int i=1; i<=a; i++){
            if(!ret[i]){
                counter++;
                if(counter== (a-b))printf("%d \n",i);
                else printf("%d ",i);
                fl = true;
            }
        }
        if(!fl)printf("*\n");
        memset(ret,0,sizeof(ret));
    }

    return 0;
}



/*
#include<bits/stdc++.h>
#define sf scanf
#define pf printf

using namespace std;

bool ret[100004]; int nret[100004];

int main(){

//    freopen("input.txt","rt",stdin);
//    freopen("output.txt","wt",stdout);

    int a,b;
    while(scanf("%d %d",&a,&b) != EOF){
        for(int i=1; i<=b; i++){
            long n; cin >> n;
            ret[n] = 1;
        }
        int fl=0,c=1; // to check everyone is alive

        for(int i=1; i<=a; i++){
            if(!ret[i]){
                nret[c++]=i;
//                cout << nret[c-1] << endl;
            }
        }

        sort(nret,nret+c);
        for(int i=1; i<=(a-b); i++){
            if(i == (a-b))printf("%d \n",nret[i]);
            else printf("%d ",nret[i]);
            fl=1;
        }

        if(!fl)printf("*\n");
        memset(ret,0,sizeof(ret));
        memset(nret,0,sizeof(nret));
    }

    return 0;
}
*/
