#include <iostream>
#include <utility>
using namespace std;

void selection(int a[], int n)
{
    for (int i = 0; i < n-1; i++)
    {
        int min = i;
        for (int j = i+1; j < n; j++)
        {
            if (a[j] < a[min])
            {
                min = j;
            }
        }
        swap(a[i],a[min]);
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
    selection(a, n);

    cout << "After sorting," << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    
    
}