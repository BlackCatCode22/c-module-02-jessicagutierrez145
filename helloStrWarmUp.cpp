//
// Created by Jessica Gutierrez Argueta on 9/8/25.
//

#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <cstring>

using namespace std;

int main() {

    cout << "Hello Welcome to my Reverse String Program." ;

    string num1 = "My String" ;

    int a = num1.length();
    for (int i = 0; a/2; ++i) {
        char temp = num1[i];
        num1[i]= num1[a - 1 - i] ;
        num1[a - 1 - i] = temp;


            }
}



