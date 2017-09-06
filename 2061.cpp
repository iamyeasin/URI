#include<bits/stdc++.h>
#define mx 1000007

using namespace std;

int main()
{
    int n,m;
    cin >> n >> m;
    int c=0,p=0,tabs=n;

    while(m--){
        char word[500];
        scanf("%s",&word);
        if(word[0] == 'f')tabs += 1;
        else c++;
    }

    printf("%d\n",abs(tabs-c));


    return 0;
}
