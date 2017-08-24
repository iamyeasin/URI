#include<bits/stdc++.h>
#include <stdio.h>
#include <iostream>
#include <string.h>
#include <algorithm>

using namespace std;

bool isCons(char ch){
    if(ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u'){
        return true;
    }
    return false;
}


int main()
{
    long l,n;
    scanf("%ld %ld",&l,&n);

    vector< string > s1,s2,sl;

    for(int i=1; i<=l; i++){
        string s , ss;
        cin >> s >> ss;
        s1.push_back(s);
        s2.push_back(ss);
    }


    for(int j=1; j<=n; j++){
        string fs;
        int f=0;
        cin >> fs;

        for(int i=0; i<l; i++){
            if(s1[i] == fs){
                cout << s2[i] << endl;
                f=1;
                break;
            }
        }

        if(!f){
            int sz = fs.size();

            if((isCons(fs[sz-2])) && fs[sz-1] == 'y'){
                fs[sz-1] = 'i';
                fs += "es";
                cout << fs << endl;
            }
            else if((fs[sz-1] == 'o' || fs[sz-1] == 's' || (fs[sz-1] == 'h' && fs[sz-2] == 'c') || (fs[sz-1] == 'h' && fs[sz-2] == 's') || fs[sz-1] == 'x')){
                fs += "es";
                cout << fs << endl;
            }
            else{
                fs+="s";
                cout << fs << endl;
            }
        }
    }




    return 0;
}
