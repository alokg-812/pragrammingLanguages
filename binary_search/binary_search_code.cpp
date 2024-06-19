#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[10] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    int n = 10;
    int target = 11;
    int lb = 0;
    int ub = n - 1;
    
    while (lb <= ub) {
        int mid = (lb + ub) / 2;
        if (arr[mid] == target) {
            cout << mid << endl;
            return 0;
        }
        else if (arr[mid] < target) {
            lb = mid + 1;
        }
        else {
            ub = mid - 1;
        }
    }
    
    cout << "Target not found in the array." << endl;
    return 0;
}
