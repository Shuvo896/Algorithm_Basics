#include<iostream>
using namespace std;

int binarySearch(int arr[], int start, int end, int search)
{
    
    if (start>end)
    {
        return -1;
    }
    int mid = (start+end)/2;

    if (arr[mid] == search)
    {
        return mid;
    }
    else if (arr[mid] < search)
    {
        return binarySearch(arr, mid+1, end, search);
    }
    else
    {
        return binarySearch(arr, start, mid-1, search);
    } 
}