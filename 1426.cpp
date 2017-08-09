//For a typing practice I wrote that code that way.. such an idioT!

#include<bits/stdc++.h>
#define sf scanf
#define pf printf

using namespace std;

int arr[11][11]= {0};

int main(){

    long kase;
    cin >> kase;

    for(int i=1; i<=kase; i++){
        for(int j=1; j<=9; j+=2){
            for(int k=1; k<=j; k+=2){
                cin >> arr[j][k];
            }
        }

        arr[3][2] = abs(((arr[3][1] + arr[3][3]) - arr[1][1])/2); // x4
        arr[2][1] = arr[3][1] + arr[3][2];
        arr[2][2] = (arr[3][2] + arr[3][3]);
        arr[5][2] = abs((arr[3][1] - (arr[5][1] + arr[5][3]))/2);
        arr[4][1] = arr[5][1]+arr[5][2];
        arr[4][2] = arr[5][2] + arr[5][3];
        arr[5][4] = abs((arr[3][3] - (arr[5][3] + arr[5][5]))/2);
        arr[4][3] = arr[5][3]+arr[5][4];
        arr[4][4] = arr[5][4] + arr[5][5];
        arr[7][2] = abs((arr[5][1] - (arr[7][1] + arr[7][3]))/2);
        arr[7][4] = abs((arr[5][3] - (arr[7][3] + arr[7][5]))/2);
        arr[7][6] = abs((arr[5][5] - (arr[7][5] + arr[7][7]))/2);

        arr[6][1] = arr[7][1]+arr[7][2];
        arr[6][2] = arr[7][2]+arr[7][3];
        arr[6][3] = arr[7][3]+arr[7][4];
        arr[6][4] = arr[7][4]+arr[7][5];
        arr[6][5] = arr[7][5]+arr[7][6];
        arr[6][6] = arr[7][6]+arr[7][7];

        arr[9][2] = abs((arr[7][1] - (arr[9][1] + arr[9][3]))/2);
        arr[9][4] = abs((arr[7][3] - (arr[9][3] + arr[9][5]))/2);
        arr[9][6] = abs((arr[7][5] - (arr[9][5] + arr[9][7]))/2);
        arr[9][8] = abs((arr[7][7] - (arr[9][7] + arr[9][9]))/2);

        arr[8][1] = arr[9][1]+arr[9][2];
        arr[8][2] = arr[9][2]+arr[9][3];
        arr[8][3] = arr[9][3]+arr[9][4];
        arr[8][4] = arr[9][4]+arr[9][5];
        arr[8][5] = arr[9][5]+arr[9][6];
        arr[8][6] = arr[9][6]+arr[9][7];
        arr[8][7] = arr[9][7]+arr[9][8];
        arr[8][8] = arr[9][8]+arr[9][9];



        for(int i=1; i<=9; i++){
            for(int j=1; j<=i; j++){
                if(j!=i)printf("%d ",arr[i][j]);
                else if(i==j)printf("%d\n",arr[i][j]);
            }
        }
        arr[11][11] = {0};
    }

    return 0;
}
