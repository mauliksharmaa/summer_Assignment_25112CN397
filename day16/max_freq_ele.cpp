#include <iostream>
using  namespace std;

// Write a program to Find maximum frequency element.

int main(){
    int nums[100];
    int n;
    cout << "Enter size of the array - ";
    cin >> n ;

    // input array

    cout << "Enter elements of array " << endl;

    for ( int i=0; i<n; i++ ){
        cin >> nums[i];
    }

    int maxf = 0;
    int ele = nums[0];

    for (int i = 0; i < n; i++) {
        int curf = 0;

        for (int j = 0; j < n; j++) {
            if (nums[i] == nums[j]) {
                curf++;
            }
        }

        if (curf > maxf) {
            maxf = curf;
            ele = nums[i];
        }
    }

    cout << "The maximum frequency element is " << ele << " (comes " << maxf << " times)";


}