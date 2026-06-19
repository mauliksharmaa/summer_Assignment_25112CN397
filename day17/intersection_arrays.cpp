#include <iostream>
#include <set>
using namespace std;

// Write a program to intersection of arrays.

bool found ( int target, int arr[] , int n ){
    for (int i=0; i<n; i++){
        if ( target == arr[i] ) return true;
    }
    return false;
}

int main() {
    int n1, n2;

    cout << "Enter size of first array: ";
    cin >> n1;
    int arr1[n1];

    cout << "Enter elements of first array: ";
    for (int i = 0; i < n1; i++) {
        cin >> arr1[i];
    }

    cout << "Enter size of second array: ";
    cin >> n2;
    int arr2[n2];
    cout << "Enter elements of second array: ";

    for (int i = 0; i < n2; i++) {
        cin >> arr2[i];
    }

    set <int> inter;

    for (int i=0; i<n1; i++){
        if ( found (arr1[i] , arr2 , n2) ){
            inter.insert ( arr1[i] );
        }
    }

    cout << "Intersection of entered arrays - ";
    
    for ( int x : inter ){
        cout << x << " ";
    }


}