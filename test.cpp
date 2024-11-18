#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n , q;
    cin >> n >> q;
    vector<vector<int>> arr(n);
    

    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        vector<int> a(k);
        
        for (int i = 0; i < k; i++)
        {
            cin >> a[i]; 
        } 
        arr[i] = a;
    }

    for (int i = 0; i < q; i++)
    {
        int l , r;
        cin >> l >> r;

        cout<<arr[l][r]<<endl;

    }
    
    
   

    return 0;
}
