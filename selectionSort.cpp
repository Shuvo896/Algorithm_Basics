#include<iostream>
#include<utility>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int temp;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    
    for (int i = 0; i < n-1; i++)
    {
        int minIndex = i;
        for (int j = i+1; j < n; j++)
        {
            if(arr[j]< arr[minIndex])
            {
                minIndex = j;
            }
        }
        std :: swap(arr[i], arr[minIndex]);
        // cout << " \n"; 
        
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
    
}