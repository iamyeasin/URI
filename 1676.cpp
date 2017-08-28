
/*
2 3 4 5 6 7 8 9 10 11 12
2 queue te gele array hoy 3 5 7 9 11 13 15 17 [2nd index 4,next 2nd index 6 etc..]
then 3 queue te gele array 5 7 11 13 17 19 23 25 29 31 [3rd index 9,next 3rd index 15, next 3rd in]
then 5 queue te gele array 7 11 13 17 23 25 29 31 37 41 43 47

*/


#include<bits/stdc++.h>
#define mx 100007
#define inf -1107

using namespace std;

int arr[mx],luck[mx],cat[mx];

void call(){
        memset(luck,0,sizeof(luck));
        int l=1,x=1;
        luck[l++] = 2;
        for(int i=3; i<mx; i+=2) arr[x++] = i; // made evens out.

        int it=1,it2=2;
        while( it < x){
                if(arr[it]>0){
                    luck[l++] = arr[it];
                    int test = arr[it];
                    arr[it] = inf;
                    int counter=0,m=it+1;

                    while(m < x){
                        if(arr[m] > 0 ){
                            counter++;
                        }
                        if(counter == test){
                            arr[m] = inf;
                            counter=0;
                        }
                        m++;
                    }

                }
                while(1){
                    it++;
                    if(arr[it] || it>x) break;
                }
        }

        int c=1;
        for(int i=1; i<=l; i++){
            if(luck[i] > 0){
                cat[c++] = luck[i];
            }
        }
}


int main()
{
    call();
    long n;
    while(scanf("%ld",&n),n){
        cout << cat[n] << endl;
    }

    return 0;
}
