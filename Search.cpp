#include<iostream>
#include<utility>
#include "selectionSortUinp.cpp"
#include "BinarySearch.cpp"
#include "LinearSearch.cpp"
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

    cin.ignore();

    string whatTypeOfSearch;
    cout << "If you want to use Linear Search type (LS)" << endl;
    cout << "If you want to use Linear Search type (BS)" << endl;
    getline(cin, whatTypeOfSearch);

    if (whatTypeOfSearch == "LS")
    {
        index = LinearSearch(arr ,n ,search);
    }
    else if (whatTypeOfSearch == "BS")
    {
        index = binarySearch(arr, 0, n-1, search);
    }
    if (index != -1)
    {
        cout << "The number is at index: " << index+1 << endl;
    }
    else
    {
        cout << "Number not found" << endl;
    }
    
    return 0;
    
}