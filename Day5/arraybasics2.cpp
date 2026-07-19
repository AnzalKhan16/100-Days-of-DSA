//Linear Search 
#include<iostream>
using namespace std;
int main(){
    int arr[5] = {10,25,7,81,50}
    int key = 81;
    bool found = false;

    for (int i = 0 ;i < 5; i++){
        if (arr[i] == key){
            cout << "Found at index" << i;
            found = true;
            break;
        }
    }
    if(!found)
      cout << "Element not found";
      return 0;
}

// Second largest 
#include<iostream>
using namespace std;
int main(){
    int arr[5] = {10,80,30,40,50}
    int largest = arr[0];
    int secondlargest = -1;

    for (int i = 1 ; i < 5; i++){
        if (arr[i] > largest){
            secondlargest = largest;
            largest = arr[i];
        }
        else if (arr[i] > secondlargest && arr[i] != largest){
            secondlargest = arr[i];
        }
    }

    cout << secondlargest;
    return 0;
}