#include <iostream>
using namespace std;

int main() {
    cout << "Welcome to my Largest of Three Program" << endl;

    int num1 = 105;
    int num2 = 95;
    int num3 = 75;
    int largest = 0;

    cout << " \n The value of num1 is " << num1;

    cout << " \n The value of num2 is " << num2 << "\n\n";

    if (num1 > num2) {
        cout << "num1 has the value of " << num1 << " and is greater than num2 which has a value of " << num2 << endl;
    }
    else {
        cout << "num2 has the value of " << num2 << " and is greater than num1 which has a value of " << num1;
    }
    cout <<"\n\n This is the largest of Three Program...\n\n";
    if (num1 > num2) {
        if (num1 > num3) {
            largest = num1;
            cout << "num1 has the value of " << num1 << " and is the largest int!\n";
        }
        else {
            largest = num3;
            cout << "\n num3 has the value of " << num3 << " and is the largest int!\n";
        }
    }
    else {
        if (num2 > num3)
            largest = num1;
        cout << "\n num2 has the value of " << num2 << " and is the largest int!\n";
    }
     {
        largest = num3;
        cout << "\n num3 has the value of " << num3 << " and is the largest int!\n";

}
    return 0;
}