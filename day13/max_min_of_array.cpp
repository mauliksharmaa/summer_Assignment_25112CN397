#include <iostream>
#include <climits>
using  namespace std;

// Write a program to Find largest and smallest element.

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

    int Max = INT_MIN;
    int Min = INT_MAX;

    for ( int i=0; i<n; i++ ){
        if ( Max < nums[i] ) Max = nums[i];
        
        if ( Min > nums[i] ) Min = nums[i];
    }


    cout << "The largest element of array is " << Max << " and smallest is "<< Min;



}