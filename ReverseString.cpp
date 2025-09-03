#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
#include <cstring>
using namespace std;

string trim(const char * my_str);

int main() {

cout << "\n\n Welcome to My Reverse a String Program!\n\n" << endl;

    // Part 1
    // Use the reverse() function from the library named algorithm

    string myStrToReverse = "A Long String to Reverse";

    cout << "\n The string before being reversed is: " << myStrToReverse << "\n\n";

   string myEasyReversedStr = myStrToReverse;
    reverse(myEasyReversedStr.begin(), myEasyReversedStr.end());

    cout << "\n My reversed string is:" << myEasyReversedStr << "\n\n";

    // Part 2
    // Use a for loop to swap characters
    for (int i=0; i<100; i++) {
        cout << "\n the value of i is" << i << "\n\n";
    }

const char *myStr = "this is a literal string" ;

    int strlength  = strlen(myStr);

    cout << "The length of my string object is: " << strlength << "\n\n";

    cout << "myStr[1] is..." << myStr[1] ;

string myTrimmedStr = trim(myStr);

    cout << "Length is:" << myTrimmedStr.length() << endl;

    cout << "myTrimmedStr is..." << myTrimmedStr << endl;


    return 0;
}
