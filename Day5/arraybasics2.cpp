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