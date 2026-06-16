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

//function to check even number
#include <iostream>
using namespace std;
bool isEven(int num) {
    return num % 2 == 0;
}
int main(){
    if (isEven(10)) {
        cout << "10 is even." << endl;
    } else {
        cout << "10 is odd." << endl;
    }
    return 0;
}

//Function to find the factorial of a number
#include <iostream>
using namespace std;
int factorial(int n){
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i; // Multiply fact by i
    }
    return fact;
}
int main() {
    cout << "Factorial of 5 is: " << factorial(5) << endl;
    return 0;
}

//Palindrome number using function
#include <iostream>
using namespace std;
bool isPalindrome(int n) {
    int original = n; // Store the original number
    int reversed = 0;

    while (n != 0) {
        int digit = n % 10; // Get the last digit
        reversed = reversed * 10 + digit; // Append the digit to the reversed number
        n /= 10; // Remove the last digit
    }

    return original == reversed; // Check if original and reversed are the same
}
int main() {
    if (isPalindrome(121)) {
        cout << "121 is a palindrome." << endl;
    } else {
        cout << "121 is not a palindrome." << endl;
    }
    return 0;
}