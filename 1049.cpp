#include<bits/stdc++.h>

using namespace std;

int main()
{
    char arr[100];
    cin>>arr;

    if(arr[0] == 'v' && arr[9] == 'o')
    {
        cin>>arr;
        if(arr[0] == 'a' && arr[1] == 'v')
        {
            cin>>arr;
            if(arr[0] == 'c' && arr[1]=='a' && arr[8] == 'o')
            {
                printf("aguia\n");
            }
            else
            {
                printf("pomba\n");
            }
        }
        else
        {
            cin>>arr;
            if(arr[0] == 'o' && arr[1] == 'n' && arr[6] == 'o')
            {
                printf("homem\n");
            }
            else
            {
                printf("vaca\n");
            }

        }
    }
    else
    {
        cin>>arr;
        if(arr[0] == 'i' && arr[1] == 'n' && arr[5] =='o')
        {
            cin>>arr;
            if(arr[0]== 'h' && arr[1] == 'e' && arr[9] == 'o')
            {
                printf("pulga\n");
            }
            else
            {
                printf("lagarta\n");
            }
        }
        else
        {
            cin>>arr;
            if(arr[0] == 'h' && arr[1] == 'e' && arr[9] == 'o')
            {
                printf("sanguessuga\n");
            }
            else
            {
                printf("minhoca\n");
            }
        }

    }



    return 0;
}

