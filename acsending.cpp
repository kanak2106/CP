#include<bits/stdc++.h>
using namespace std;

int solve(int arr[],int  e)


{
    int count=0;
    for(int i=0; i<e; i++)
    {
        for(int j= i+1; j<e; j++)
        {
            if(arr[i]> arr[j])
            {
                count++;
                swap(arr[i], arr[j]);
            }
        }
    }
    return count;
}


int main()
{
    int test;
    cin>> test;

    while(test--)
    {   
        int e;
        cin>> e;
        int arr[e];

        for(int i=0; i<e ; i++)
        {
            cin>>arr[i];

        }

        cout<< solve(arr, e) << endl;
        
    }

 return 0;
}