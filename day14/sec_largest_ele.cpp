#include <iostream>
#include <climits>
using  namespace std;

// Write a program to Second largest element.


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
    int sMax = INT_MIN;

    for ( int i=0; i<n; i++ ){ // iteration for largest element
        if ( Max < nums[i] ) Max = nums[i];
    }

    for ( int i=0; i<n; i++ ){// iteration for second largest element
        if ( sMax < nums[i] && Max > nums[i] ) sMax = nums[i];
    }

    cout << "The second largest element of array is " << sMax;




}