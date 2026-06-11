#include <iostream>
using  namespace std;

// Write a program to Count even and odd elements.


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


    int cEven = 0, cOdd = 0;

    for ( int i=0; i<n; i++ ){
        if ( nums[i] % 2  == 0 ) cEven ++;
        else cOdd ++;
    }

    cout << "The array has "<< cEven << " even and " << cOdd << " odd elements";


}