#include <iostream>
using  namespace std;

// Write a program to Find sum and average of array.

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

    int sum = 0;

    for ( int i=0; i<n; i++ ){
        sum += nums[i];
    }

    float avg = sum/n;

    cout << "The sum of all elements of array is " << sum << " and average is "<< avg;



}