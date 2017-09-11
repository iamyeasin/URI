#include<bits/stdc++.h>
#define plas 1.61803398874989490000
#define minas -0.61803398874989490000


using namespace std;

int main()
{
    char line[512];
    gets(line);

    int sz = strlen(line);
    if(sz > 140) puts("MUTE");
    else puts("TWEET");

    return 0;
}
