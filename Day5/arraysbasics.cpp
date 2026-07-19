//Input 5 numbers and print them
#include<iostream>
using namespace std;

int main(){
    int arr[5];
    cout << "Enter 5 numbers:\n";

    for (int i=0;i<5;i++){
    cin >> arr[i];
    }

    cout << "Array elements are:\n";

    for (int i=0;i<5;i++){
        cout << arr[i] << ' ';
    }

    return 0;
}