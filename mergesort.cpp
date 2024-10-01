#include <iostream>
#include <utility>

using namespace std;
void merge(int arr[], int left[], int Lt, int right[], int Rt)
{
    int i=0, j=0, k=0;
    while (i<Lt && j<Rt)
    {
        if (left[i] <= right[j])
        {
            arr[k++] = left[i++];
        }
        else
        {
            arr[k++] = right[j++];
        }
    }
    while (i<Lt)
    {
        arr[k++] = left[i++];
    }
    while (j<Rt)
    {
        arr[k++] = right[j++];
    }
}

void ms(int arr[], int n)
{
    if (n <= 1)
    {
        return;
    }
    
    int mid = n/2;

    int left[mid];
    int right[n-mid];

    for (int i = 0; i < mid; i++)
    {
        left[i] = arr[i];
    }

    for (int i = mid; i < n; i++)
    {
        right[i-mid] = arr[i];
    }
    ms(left, mid);
    ms(right, n-mid);
    merge(arr, left, mid, right, n-mid);
}

int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Before sorting, " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    ms(arr, n);

    cout << "After sorting, " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}