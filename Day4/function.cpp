//Function to print your name 
#include <iostream>
using namespace std;
void printName() {
    cout << "Mohammad Anzal Khan" << endl;
}
int main() {
    printName();
    return 0;
} 

//Function to add two numbers
#include <iostream>
using namespace std;
int add(int a, int b) {
    return a + b;
}
int main(){
    cout<< add(10,20)<< endl;
    return 0;
}

//Function to find square of a number
#include <iostream>
using namespace std;
int square(int num) {
    return num * num;
}
int main(){
    cout << "Square of 5 is: " << square(5) << endl;
    return 0;
}

//Function to find the largest of two numbers
#include <iostream>
using namespace std;
int largest(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}
int main(){
    cout << "Largest of 10 and 20 is: " << largest(10, 20) << endl;
    return 0;
}