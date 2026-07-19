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
        cout << arr[i] << " ";
    }

    return 0;
}

//Print array in reverse 
#include<iostream>
using namespace std;

int main(){
    int arr[5];
    cout << "Enter 5 numbers:\n";

    for (int i=0;i<5;i++){
    cin >> arr[i];
    }

    cout << "Reverse Order:\n";

    for (int i=4;i>=0;i--){
        cout << arr[i] << " ";
    }

    return 0;
}

//Sum of 5 elements
#include<iostream>
using namespace std;

int main(){
    int arr[5];
    int sum = 0;

    cout << "Enter 5 numbers:\n";
    for (int i=0;i<5;i++){
    cin >> arr[i];
    }

    for (int i=0;i<5;i++){
        sum+=arr[i];
    }

    cout << "Sum =" << sum ;

    return 0;
}

//Average of Elements
#include<iostream>
using namespace std;

int main(){
    int arr[5];
    int sum = 0;

    cout << "Enter 5 numbers:\n";
    for (int i=0;i<5;i++){
    cin >> arr[i];
    }

    for (int i=0;i<5;i++){
        sum+=arr[i];
    }
   
    float average = float(sum)/5; 

    cout << "Average = " << average;

    return 0;

}

//Largest element
#include<iostream>
using namespace std;
int main (){

    int arr[5];
    cout << "Enter 5 numbers:\n";
     for (int i=0;i<5;i++){
    cin >> arr[i];
     }
    int largest = arr[0];
    
    for (int i=1;i<5;i++){
      if(arr[i] > largest) {
        largest = arr[i]
      }
    }
    cout << "Largest = " << largest;
    return 0;
}


//Smallest element
#include<iostream>
using namespace std;
int main (){

    int arr[5];
    cout << "Enter 5 numbers:\n";
     for (int i=0;i<5;i++){
    cin >> arr[i];
     }
    int smallest = arr[0];
    
    for (int i=1;i<5;i++){
      if(arr[i] < smallest) {
        smallest = arr[i]
      }
    }
    cout << "smallest = " << smallest;
    return 0;
}

//Count even and odd numbers
#include<iostream>
using namespace std;
int main(){

    int arr[5];
    int even = 0;
    int odd = 0; 

    cout << "Enter 5 numbers:\n";

    for (int i = 0; i < 5; i++){
        cin >> arr[i];
    }
    
    
    for (int i = 0; i < 5; i++){
       if (arr[i] % 2 == 0)
          even++;
        else
          odd++;
    }
    
    cout << "Even = " << even << endl;
    cout << "Odd = " << odd << endl; 

    return 0 ;
    
}


