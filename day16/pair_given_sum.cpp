#include <iostream>
using  namespace std;

// Write a program to Find pair with given sum.



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

    int sum;
    cout << "Enter the sum - " ;
    cin >> sum;


    for ( int i=0; i<n; i++ ){
        for ( int j = 0; j<n; j++){
            if ( i != j && nums[i] + nums[j] == sum ){
                cout << "The pair with given sum is " << nums[i] << " and " << nums[j];
                return 0 ;
            }
        }
    }

    cout << "No such pair found";
    


}