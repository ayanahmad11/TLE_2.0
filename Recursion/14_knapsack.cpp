#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int knapSack(vector<int> &items,vector<int>&values, int n , int W)
{

    // Base Case
    if (n == 0 || W == 0)
        return 0;

    // If weight of the nth item is more
    // than Knapsack capacity W, then
    // this item cannot be included
    // in the optimal solution
    if (items[n - 1] > W)
        return knapSack(items,values,n - 1,W);

    // Return the maximum of two cases:
    // (1) nth item included
    // (2) not included
    else
        return max(knapSack(items,values,n-1,W), 
         values[n - 1] + knapSack(items,values,n-1,W-items[n-1]));
}


void ayan() {
    int n, w;
    cin >> n >> w;
     vector<int> items,values;

    for (int i = 0; i < n; ++i) {
        int x,z;
        cin>>x>>z;
        items.push_back(x);
        values.push_back(z);

    }
    
    // for(auto z:items) cout<<z<<" "; 
    // Output the result of the knapsack function
    cout << knapSack(items,values, n, w) << endl;
}

int main() {
    ayan(); // Call the function to execute it
    return 0;
}
