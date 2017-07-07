#include<bits/stdc++.h>
#define sf scanf
#define pf printf

using namespace std;

int unit(int n)
{
    switch(n)
    {
    case 3 :
        pf("I");
    case 2 :
        pf("I");
    case 1 :
        pf("I");
        break;
    case 4 :
        pf("I");
    case 5 :
        pf("V");
        break;
    case 6 :
        pf("VI");
        break;
    case 7 :
        pf("VII");
        break;
    case 8 :
        pf("VIII");
        break;
    case 9 :
        pf("IX");
        break;
//        case 10 : pf("X"); break;

    }


}

int ten(int n)
{
    switch(n)
    {
    case 3 :
        pf("X");
    case 2 :
        pf("X");
    case 1 :
        pf("X");
        break;
    case 4 :
        pf("X");
    case 5 :
        pf("L");
        break;
    case 6 :
        pf("LX");
        break;
    case 7:
        pf("LXX");
        break;
    case 8 :
        pf("LXXX");
        break;
    case 9 :
        pf("XC");
        break;
//        case 100 : pf("C"); break;

    }

}


int hnd(int n)
{
    switch(n)
    {
    case 3 :
        pf("C");
    case 2 :
        pf("C");
    case 1 :
        pf("C");
        break;
    case 4 :
        pf("C");
    case 5 :
        pf("D");
        break;
    case 6 :
        pf("DC");
        break;
    case 7 :
        pf("DCC");
        break;
    case 8 :
        pf("DCCC");
        break;
    case 9 :
        pf("CM");
        break;

    }

}

void num(int n)
{
    hnd(n/100);
    n = n%100;
    ten(n/10);
    n = n%10;
    unit(n);

}


int main()
{
    int n;
    cin >> n;

    num(n);
    cout<<endl;




    return 0;
}
