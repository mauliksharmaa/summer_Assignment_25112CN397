#include <iostream>
using  namespace std;

// Write a program to Input and display array

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


    // display array 

    cout << "The enetered array was - ";
    for ( int i=0; i<n; i++ ){
        cout << nums[i] << " ";
    }
}