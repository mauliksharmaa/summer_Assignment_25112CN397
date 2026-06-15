#include <iostream>
using  namespace std;

// Write a program to Linear search.


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

    cout << "Enter target element - ";
    int target;
    cin >> target;

    for ( int i=0; i<n; i++ ){
        if ( nums[i] == target ){
            cout << "Target found at index " << i;
            return 0;
        }
    }

    cout << "Target not found";



}