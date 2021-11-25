#include<iostream>
using namespace std;

int getlargest(int arr[], int n)
{
    int largest = 0;
    
    for(int i=0; i<n ; i++)
    {
        if(arr[i]>arr[largest])
        {
            largest=i;
        }
        
        return largest ; 
    }
}

int main()
{
    int n;
    cin>> n;
    
    int arr[n];
    
    for(int i=0; i<n; i++)
    
    cin>> arr[i];
    cout<< getlargest( arr, n);
}