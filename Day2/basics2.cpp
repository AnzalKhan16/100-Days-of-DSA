// Swap two numbers
#include <iostream>
using namespace std;    
int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    
    // Swap using a temporary variable
    int temp = a;
    a = b;
    b = temp;

    cout << "After swapping: " << endl;
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;

    return 0;
}

//Celcius to Fahrenheit
#include <iostream> 
using namespace std;
int main() {
    float celsius;
    cout << "Enter temperature in Celsius: ";
    cin >> celsius;
    float fahrenheit = (celsius * 9 / 5) + 32;
    cout << "Temperature in Fahrenheit: " << fahrenheit << endl;
    return 0;
}

//Simple Interest
#include <iostream>
using namespace std;
int main() {
    float principal, rate, time;
    cout << "Enter principal amount: ";
    cin >> principal;
    cout << "Enter rate of interest: ";
    cin >> rate;
    cout << "Enter time (in years): ";
    cin >> time;
    
    float simpleInterest = (principal * rate * time) / 100;
    cout << "Simple Interest: " << simpleInterest << endl;
    
    return 0;
}

//Largest of three numbers
#include <iostream> 
using namespace std;
int main() {
    int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;
    if (a >= b && a >= c) {
        cout << "Largest number: " << a << endl;
    } else if (b >= a && b >= c) {
        cout << "Largest number: " << b << endl;
    } else {
        cout << "Largest number: " << c << endl;
    }

    return 0;
}