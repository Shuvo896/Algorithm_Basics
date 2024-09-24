#include<iostream>
#include<utility>
#include "selectionSort.cpp"
#include "BinarySearch.cpp"
#include "LinearSearch.cpp"
#include "bubbleSort.cpp"
#include "insertionSort.cpp"
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
    cout << "Before sorting, " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << " " << endl;
    cin.ignore();
    cout <<"Which sorting you wanna use?"<< endl;
    string sort;
    cout << "To use Selection sort type (Selection)" << endl;
    cout << "To use Bubble sort type (Bubble)" << endl;
    cout << "To use Insertion sort type (Insertion)" << endl;
    getline(cin, sort);
    if (sort == "Selection")
    {
        selectionSort(arr,n);
    }
    else if (sort == "Bubble")
    {
        bubbleSort(arr,n);
    }
    else if (sort == "Insertion")
    {
        insertionSort(arr,n);
    }
    cout << "After sorting, " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << " " << endl;

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