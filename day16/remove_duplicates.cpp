#include <iostream>
using  namespace std;

// Write a program to Remove duplicates from array.



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

    int ans [ 100 ];

    int j = 0 ;
    for ( int i=0; i<n; i++ ){
        bool prev = false;
        for (int k=0; k<i; k++){
            if (nums[i] == nums[k]) prev = true;
        }

        if ( prev ) continue;

        ans [j] = nums[i];
        j++;
    }


    cout << endl << "Processed array - ";

    for ( int i=0; i<j; i++ ){
        cout << ans[i] << " ";
    }


}