#include <iostream>
using  namespace std;

// Write a program to Move zeroes to end. 


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

    int j = 0;
    for (int i = 0; i < n; i++) {
        if (nums[i] != 0) {
            swap (nums[i], nums[j]);
            j++;
        }
    }

    cout << endl << "Processed array - ";

    for ( int i=0; i<n; i++ ){
        cout << nums[i] << " ";
    }



}