#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int constant(int num1,int num2, int num3) {

    return num1 + num2 + num3;
}
string date(string name) {
    reverse(name.begin(), name.end());
    return name;
}

int main() {
    int num1;
    int num2;
    int num3;
    string name;

cout << "\n Please enter a value! " ;
    cin >> num1;
    cout << "\n The value for the number is" << num1;

    cout << "\n Please enter a value! " ;
    cin >> num2;
    cout << "\n The value for the number is" << num2;

    cout << "\n Please enter a value! " ;
    cin >> num3;
    cout << "\n The value for the number is" << num3;



int sum = constant(num1, num2, num3);
    cout << "\n The sum is" << sum;


    cout << "\n Please enter a name! " ;
    cin >> name;
    cout << "\n The name is" << name;

    string test = date(name);
    cout << "\n The name is" << test;
}