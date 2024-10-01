#include<iostream>
#include<utility>

using namespace std;
void quickSort(int A[], int l, int h);
int partition(int A[], int l, int h);

int main()
{
    int n;
    cin >> n;
    int A[n];

    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    int l = 0;
    int h = n-1;

    cout << "Before sorting, " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
    quickSort(A, l, h);

    cout << "After sorting, " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
}

void quickSort(int A[], int l, int h)
{
    int j;
    if (l < h)
    {
        j = partition(A, l, h);
        quickSort(A, l, j-1);
        quickSort(A, j+1, h);
    }
    
}

int partition(int A[], int l, int h)
{
    int pivot = A[l];
    int i=l, j=h;

    while (i<j)
    {
        while (A[i] <= pivot)
        {
            i++;
        }
        while (A[j] > pivot)
        {
            j--;
        }
        if (i<j)
        {
            swap(A[i], A[j]);
        } 
    }
    swap(A[l], A[j]);
    return j;
    
}