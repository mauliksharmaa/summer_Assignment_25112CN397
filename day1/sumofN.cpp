# include <iostream>
using namespace std;

//Write a program to Calculate sum of first N natural numbers.


int main(){
    int a, sum=0;
    cout<<"Enter any natural number - ";
    cin>>a;

    for (int i=1; i<=a; i++){
        sum += i;
    }

    cout<< "The sum till integer "<< a<< " is "<< sum;


}