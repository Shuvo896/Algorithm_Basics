#include<iostream>
#include<utility>
using namespace std;

int main()
{
    int n;
    int arr[] = {2, 4, 6, 7, 11, 21};
    int search;
    cin >> search;
    for (int i = 1; i <= 6; i++)
    {
        if (arr[i] == search)
        {
            cout << "index: ";
            cout << i+1;
        }
    } 
}