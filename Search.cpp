#include<iostream>
#include<utility>
#include "selectionSortUinp.cpp"
#include "BinarySearch.cpp"
using namespace std;

int main()
{
    int n, index;
    cout << "The number of inputs you wanna give: ";
    cin >> n;
    int arr[n];
    cout << "Give the input values," <<endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    selectionSortUinp(arr,n);

    int search;
    cout << "The number you wanna search: ";
    cin >> search;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
    
    index = binarySearch(arr, 0, n-1, search);
    cout << "The number is at index: ";
    cout << index+1 << endl;
    
}