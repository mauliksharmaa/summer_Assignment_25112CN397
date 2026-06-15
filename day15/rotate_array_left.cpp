#include <iostream>
using  namespace std;

// Write a program to Rotate array left


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

    cout << "Orginal array - ";

    for ( int i=0; i<n; i++ ){
        cout << nums[i] << " ";
    }

    int ans[100];
    int i = 0, j = 1;

    while ( i < n ){
        if ( j == n ) j=0;
        ans [i] = nums [j];

        j++; 
        i++;
    }

    cout << endl << "Rotated array - ";

    for ( int i=0; i<n; i++ ){
        cout << ans[i] << " ";
    }
}