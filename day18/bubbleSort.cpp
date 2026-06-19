#include <iostream>
using  namespace std;

// Write a program to Bubble sort.

int main(){
    int nums[100];
    int n;
    cout << "Enter size of the array - ";
    cin >> n ;

    cout << "Enter elements of array " << endl;

    for ( int i=0; i<n; i++ ){
        cin >> nums[i];
    }

    cout << "Unsorted array - ";
    for (int i=0; i<n; i++){
        cout << nums[i] << " ";
    }
     
    for (int i=0; i<n-1; i++){
        for (int j=0; j<n-i-1; j++){
            if ( nums[j] > nums[j+1] ) {
                swap (nums[j] , nums[j+1]);
            }
        }
    }

    cout << endl << "Sorted array - ";
    for (int i=0; i<n; i++){
        cout << nums[i] << " ";
    }


}