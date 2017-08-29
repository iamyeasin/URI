#include<bits/stdc++.h>
#define mx 1000007

using namespace std;

int main()
{
    int n,m;
    int arr[102][104];
    while(scanf("%d%d",&n,&m) != EOF){
            for(int i=1; i<=n; i++){
                for(int j=1; j<=m; j++){
                    scanf("%d",&arr[i][j]);
                }
            }

            int player[102]={0},p=0;
            for(int i=1; i<=n; i++){
                int f=0;
                for(int j=1; j<=m; j++){
                        if(arr[i][j] > 0){
                            f++;
                        }
                }
                if(f == m)p++;
            }

            printf("%d\n",p);
    }

    return 0;
}
