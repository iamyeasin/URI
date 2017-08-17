#include<stdio.h>
#define sf scanf
#define pf printf

using namespace std;

int bits[] = {0,32,16,8,4,2,1};
bool h[64],m[64];

void print(){
    pf(" ____________________________________________\n");
    pf("|                                            |\n");
    pf("|    ____________________________________    |_\n");
    pf("|   |                                    |   |_)\n");
    pf("|   |   8         4         2         1  |   |\n");
    pf("|   |                                    |   |\n");
    pf("|   |   ");


//    if(h[1]) pf("o     "); else pf("      ");
    if(h[3]) pf("o         "); else pf("          ");
    if(h[4]) pf("o         "); else pf("          ");
    if(h[5]) pf("o         "); else pf("          ");
    if(h[6]) pf("o  |   |\n"); else pf("   |   |\n");


    pf("|   |                                    |   |\n");
    pf("|   |                                    |   |\n");
    pf("|   |   ");


    if(m[1]) pf("o     "); else pf("      ");
    if(m[2]) pf("o     "); else pf("      ");
    if(m[3]) pf("o     "); else pf("      ");
    if(m[4]) pf("o     "); else pf("      ");
    if(m[5]) pf("o     "); else pf("      ");
    if(m[6]) pf("o  |   |\n"); else pf("   |   |\n");


     pf("|   |                                    |   |\n");
     pf("|   |   32    16    8     4     2     1  |   |_\n");
     pf("|   |____________________________________|   |_)\n");
     pf("|                                            |\n");
     pf("|____________________________________________|\n");
}


int main(){
//
//    freopen("in.txt","rt",stdin);
//    freopen("out.txt","wt",stdout);

    long hh,mm;
    while(sf("%d:%d",&hh,&mm) != EOF){
        for(int i=0; i<66; i++){
            h[i]=0; m[i]=0;
        }

        for(int i=1; i<7; i++){
            if(hh >= bits[i]){
                h[i] = 1; hh %= bits[i];
            }
            if(mm >= bits[i]){
                m[i] = 1; mm %= bits[i];
            }
        }

        print();
        puts("");

    }



    return 0;
}
