// distinct

#include<bits/stdc++.h>
using namespace std;

void distinct(int arr[], int n)
{
    

    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(arr[i] == arr[j])

            {

                cout<< "True ";
                break;
            }

            else
            {
                cout<< "false";
                break;
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

    distinct(arr, n);
     
 return 0;
}