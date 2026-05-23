//Print Age, Nme and College
#include <iostream>
using namespace std;
int main(){
    string name = "Anzal";
    int age = 20;
    string college = "VIT Bhopal";
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "College: " << college << endl;
    return 0;
}

//Sum of two integers
#include <iostream> 
using namespace std;
int main() {
    int a, b;
    cout << "Enter two integers: ";
    cin >> a >> b;
    int sum = a + b;
    cout << "Sum: " << sum << endl;
    return 0;
}

// Area of Rectangle
#include <iostream>
using namespace std;
int main() {
    float length, width;
    cout << "Enter length and width of the rectangle: ";
    cin >> length >> width;
    float area = length * width;
    cout << "Area: " << area << endl;
    return 0;
}

// Area of Circle
#include <iostream>
using namespace std;
int main() {
    float radius;
    const float PI = 3.14159;
    cout << "Enter radius of the circle: ";
    cin >> radius;
    float area = PI * radius * radius;
    cout << "Area: " << area << endl;
    return 0;
}
