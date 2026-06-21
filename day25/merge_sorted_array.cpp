#include <iostream>
#include <vector>
using namespace std;

// Write a program to Merge two sorted arrays.

vector<int> merg(vector<int> num1, vector<int> num2){
    int m = num1.size();
    int n = num2.size();
    vector<int> ans;

    int i = 0, j = 0;

    while ( i<m && j<n){
        if ( num1[i] < num2[j] ){
            ans.push_back(num1[i]);
            i++;
        }
        else{
            ans.push_back(num2[j]);
            j++;
        }
    }

    while ( i<m ){
        ans.push_back(num1[i]);
        i++;
    }
    while ( j<n ){
        ans.push_back(num2[j]);
        j++;
    }

    return ans;


}

int main(){
    vector<int> num1, num2;
    int m , n;

    cout << "Enter size of first array - ";
    cin >> m;
    cout << "Enter elements of first array (sorted)" << endl;
    for (int i = 0; i < m; i++) {
        int x;
        cin >> x;
        num1.push_back(x);
    }

    cout << "Enter size of second array - ";
    cin >> n;
    cout << "Enter elements of second array (sorted)" << endl;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        num2.push_back(x);
    }

    vector<int> ans = merg(num1,num2);

    for (int i=0; i<m+n; i++){
        cout << ans[i] << " ";
    }



}