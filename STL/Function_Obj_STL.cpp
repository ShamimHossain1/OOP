#include <iostream>
#include <functional>
#include <algorithm>

using namespace std;

int main()
{

    int arr[] = {54, 77, 1, 4, 13, 3};
    int n = sizeof(arr);
    sort(arr, arr+6 , greater<int>());
    // cout<<n;
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}