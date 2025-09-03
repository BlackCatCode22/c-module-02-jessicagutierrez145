// JGA 8/25/25
#include <iostream>
#include <string>

using namespace std;


int main()
{

string test1= "Welcome to my String Test Warmup";

    string myStrObject = "abcdefghi";

    cout << "\n The value of my string object is: " << myStrObject << endl;

cout << "The length of myStrobject is: " << myStrObject.length(9) << endl;

// Create a variable that holds the length of our string

    int lengthOfMyStrObject = 0;

    lengthOfMyStrObject = myStrObject.length();

    cout << "\n The value of my string object is: " << lengthOfMyStrObject << endl;

    cout << test1 << endl;

    cout << "size: " << test1.size() << endl;

    cout << "test1[0]: " << test1[0] << endl;

        return 0;


}
