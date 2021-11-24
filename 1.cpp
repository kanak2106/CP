//finding sum of given target.

#include<bits/stdc++.h>
using namespace std;
int sumTarget(int arr[], int n, int target)
{   
    
    for (int i=0; i<n; i++)
    {   
       
        for(int j=0; j<n; j++)
        {
            if(arr[i]+ arr[j]==target)
            {
                return [i, j] ;
            }
        }
       
    }

}
int main()
{
    int n;
    cin>> n;

    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>> arr[i];
    }
    int target;
    cin>> target;
    sumTarget(arr, n, target);

 return 0;
}