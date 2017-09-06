#include<bits/stdc++.h>
#define mx 1000007

using namespace std;

unsigned long long int fib[200],tiv[65];
unsigned long long int cheat[62] = {0,3,13,21,34,144,233,377,987,6765,46368,121393,317811,832040,1346269,
2178309,3524578,14930352,39088169,63245986,102334155,433494437,701408733,1134903170,1836311903,2971215073,
4807526976,20365011074,32951280099,53316291173,139583862445,225851433717,365435296162,1548008755920,2504730781961,
4052739537881,6557470319842,10610209857723,27777890035288,44945570212853,72723460248141,117669030460994,190392490709135,
308061521170129,498454011879264,806515533049393,1304969544928657,3416454622906707,5527939700884757,8944394323791464,
14472334024676221,23416728348467685,37889062373143906,61305790721611591,99194853094755497,160500643816367088,420196140727489673,
679891637638612258,1100087778366101931,2880067194370816120,4660046610375530309,};

bool isContain(unsigned long long n){
    while(n>0){
        int rem = n%10;
        if(rem == 3){
            return true;
        }
        n = n/10;
    }
    return false;
}


void fibs(){
    fib[1]  = 1;
    fib[2]  =  1;
    int m=1;

    for(int i=3; i<=200; i++) fib[i] = fib[i-1]+fib[i-2];
    for(int k=1; k<=200; k++){
        if(fib[k] % 3 == 0 || isContain(fib[k])){
            tiv[m++] = fib[k];
        }
        if(m>60) break;
    }
    cout << m << endl;
}


int main()
{
//    fibs();
//    for(int i=1; i<=60; i++)cout << tiv[i] << "," ;

    int n;
    while(scanf("%d",&n) != EOF){
        printf("%llu\n",cheat[n]);
    }



    return 0;
}
