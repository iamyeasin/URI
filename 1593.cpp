#include<bits/stdc++.h>
#define sf scanf
#define pf printf

using namespace std;

string bigNum;
int ok;

void bigDiv(){
    int len = bigNum.size();
    string qut = "";
    int carry = 0;
    for(int i=0; i<len; i++){

        int x = (bigNum[i] - '0') + carry;
        if(x > 0){
            if(x < 2){
                qut += (0 +'0');
                carry = 10;
            }else{

                qut += ((x >> 1) +'0');
                if(!(x&1)){
                    carry = 0;
                }
                else carry = 10;
            }
        }
        else if(x == 0) qut += '0';
    }
    bigNum = qut;


}



int main(){

    long kase;
    sf("%ld",&kase);

    for(int i=1; i<=kase; i++){
        cin >> bigNum;
        int parity =0;

        while(1){
            int x = bigNum.size(),flag=0;
            for(int i=0; i<=x; i++){
                if(bigNum[i] > '0' && bigNum[i] <= '9')flag = 1;
            }
            if(!flag)break;

            if((bigNum[x-1])&1){
                parity++;
            }

            bigDiv();

        }
        pf("%d\n",parity);


    }



    return 0;
}
