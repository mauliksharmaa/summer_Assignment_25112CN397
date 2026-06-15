#include <iostream>
#include <utility>
using  namespace std;

// Write a program to reverse an array.


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


    // print before reversing 

    cout << "Orginal array - ";

    for ( int i=0; i<n; i++ ){
        cout << nums[i] << " ";
    }

    for ( int i=0; i <= n/2; i++ ){
        swap ( nums[i] , nums[n-1-i] );
    }

    // print after reversing 

    cout << endl << "Reversed array - ";
    
    for ( int i=0; i<n; i++ ){
        cout << nums[i] << " ";
    }





}