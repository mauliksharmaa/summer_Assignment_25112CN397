#include <iostream>
using  namespace std;

// Write a program to Find missing number in array.


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

    int xr1 = 0;
    int xr2 = 0;
    for ( int i = 1; i<=n+1; i++ ){
        xr1 ^= i;
    }

    for (int i=0; i<n; i++ ){
        xr2 ^= nums[i];
    }

    cout << "The missing element is " << (xr1 ^ xr2);


}
