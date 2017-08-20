#include<bits/stdc++.h>
#include<iostream>
#include<cstdio>
#include<algorithm>
#define N 1000
#include<map>
#define MOD 1000000007

using namespace std;

int main(){

    char word[5600],let[640];
    int w=0;

    while(1){
        w=0;
        gets(word);
        if(word[0] == '*')break;

        int len = strlen(word);
        for(int i=1; i<len; i++){
            if(isspace(word[i-1])){
                let[w++] = word[i];
            }
        }
        let[w++] = word[0]; // For the last word

        let[w] = '\0'; int f=1;
        for(int i=1; i<w; i++){

            char ch = let[0] &~(1<<5); // converting to lower case, cool biwise trick

            if((let[i] &~(1<<5)) != ch){
                puts("N"); f=0;
                break;
            }
        }
        if(f)puts("Y");

        memset(word,'\0',sizeof(word));
        memset(let,'\0',sizeof(let));
    }

    return 0;
}
