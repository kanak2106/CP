#include <bits/stdc++.h>
using namespace std;

int merge(int num1[],int num2[],int n,int  m)
{   
    int x;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        
        {
           x = num1[i]+num2[j];
        }
    }

    return x;
}
int main()
{
    int n, m;
    cin>> n>> m;

    

    int num1[n];
    int num2[m];
    for(int i=0; i< n; i++)
    {
        cin>> num1[i];
    }

    for(int i=0; i< m; i++)
    {
        cin>> num2[i];
    }

    merge(num1, num2, n , m);
 return 0;
}