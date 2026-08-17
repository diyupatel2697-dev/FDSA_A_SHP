#include <iostream>
using namespace std;

int main()
{

    int arr[]={1,0,2,1,0,2,1,0,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"Array:"<<endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<""<<endl;
    // Find maximum element
    int max = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    // Create count array according to maximum
    int count[max + 1] = {0};
    int output[n];

    // Count frequency
    for (int i = 0; i < n; i++)
    {
        count[arr[i]]++;
    }



    // Counting Sort
    for (int i = 1; i <= max; i++)
    {
        count[i] += count[i - 1];
    }

    for (int i = n - 1; i >= 0; i--)
    {
    output[count[arr[i]] - 1] = arr[i];
    count[arr[i]]--;
    }
    for (int i = 0; i < n; i++)
    {
        arr[i] = output[i];
    }

     // Print sorted array
    cout << "Sorted array: ";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }



}
