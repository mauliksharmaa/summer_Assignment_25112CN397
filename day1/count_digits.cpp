# include <iostream>
using namespace std;


//Write a program to Count digits in a number.

int main(){
    int n, i;
    int count=0;
    cout<<"Enter your number - ";
    cin>>n;

    if ( n<0 ){
        i = n*(-1);
    }
    else{ 
        i = n;
    }


    while ( i>0 ){
        i /= 10;
        count++;
    }

    cout<<"The number of digit(s) in number "<<n<<" are "<<count;

    
}