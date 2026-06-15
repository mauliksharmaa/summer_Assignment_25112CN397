#include <iostream>
using  namespace std;

// Write a program to Frequency of an element.


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

    int count = 0;

    for ( int i=0; i<n; i++ ){
        if ( target == nums[i]){
            count++;
        }
    }

    cout << "The element " << target << " comes " << count << " times.";


}