#include <iostream>
#include <utility>
using namespace std;

void bubble(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-1; j++)
        {
            if (a[j]> a[j+1])
            {
                swap(a[j], a[j+1]);
            }
        } 
    }
}
int main()
{
    int n;
    cout << "Number of inputs: ";
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Index " << i+1 << ": ";
        cin >> a[i];
    }
    cout << "Before sorting," << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    bubble(a, n);
    cout << "After sorting," << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    
    
}