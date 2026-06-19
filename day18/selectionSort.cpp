#include <iostream>
using  namespace std;

// Write a program to selection sort.

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
     
    for (int i=0; i<n; i++){
        int key = i;
        for (int j=i+1 ; j<n; j++){
            if ( nums[key] > nums[j] ) {
                key = j;
            }
        }
        swap ( nums[i] , nums[key]);
    }

    cout << endl << "Sorted array - ";
    for (int i=0; i<n; i++){
        cout << nums[i] << " ";
    }


}