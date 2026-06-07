// print numbers 1 to 100
#include <iostream>
using namespace std;
int main() {
    for (int i = 1; i <= 100; i++) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}

// print even numbers from 1 to 50
#include <iostream>
using namespace std;
int main (){
    for(int i = 2; i<=50; i+=2){
        cout << i << " ";
    }
    cout << endl;
    return 0;
} 

//Sum of first n natural numbers
#include <iostream>
using namespace std;
int main() {
    int n;
    cout<< "Enter n :";
    cin >> n;

    int sum = n * (n + 1) / 2; // Using formula n(n+1)/2
    cout << "Sum of first " << n << " natural numbers: " << sum << endl;
    return 0;
}

// Multiplication table of a number
#include <iostream>
using namespace std;
int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    cout << "Multiplication table of " << num << ":" << endl;
    for (int i = 1; i <= 10; i++) {
        cout << num << " x " << i << " = " << num * i << endl;
    }
    return 0;
}

//Digits in a number 
#include <iostream>
using namespace std;
int main(){
    int n;
    int count = 0;
    cout << "Enter a number: ";
    cin >> n;

    while (n != 0) {
        n /= 10; // Remove the last digit
        count++; // Increment the count of digits
    }
    cout << "Number of digits: " << count << endl;
    return 0;

}

//Reverse a number
#include <iostream>
using namespace std;
int main() {
    int n, reversed = 0;
    cout << "Enter a number: ";
    cin >> n;

    while (n != 0) {
        int digit = n % 10; // Get the last digit
        reversed = reversed * 10 + digit; // Append the digit to the reversed number
        n /= 10; // Remove the last digit
    }
    cout << "Reversed number: " << reversed << endl;
    return 0;
}

//Palindrome number
#include <iostream>
using namespace std;
int main() {
    int n, reversed = 0, original;
    cout << "Enter a number: ";
    cin >> n;

    original = n; // Store the original number

    while (n != 0) {
        int digit = n % 10; // Get the last digit
        reversed = reversed * 10 + digit; // Append the digit to the reversed number
        n /= 10; // Remove the last digit
    }

    if (original == reversed) {
        cout << "The number is a palindrome." << endl;
    } else {
        cout << "The number is not a palindrome." << endl;
    }
    return 0;
}
