/***************************************/
/* Dylan Hoover Santa Clara University */
/*       COEN 79 Lab 1 Program 2       */
/***************************************/

#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;

//reverse function using reverse algorithm from <algorithm>
string reverse(string const &str){
    string rev(str.rbegin(), str.rend());
    return rev;
}

int main(int argc, const char * argv[]){

    //initialize variables
    string first = "";
    string second = "";

    //ask for string
    cout << "Input string of 10 numbers with no spaces.\n";
    //get the only the first string
    getline(cin, first);
    
    //set second the reverse of first
    second = reverse(first);

    //first line
    cout << first;
    cout << setw(15) << second << endl;

    //second line
    cout << setw(11) << first;
    cout << setw(15) << second << endl;

    //third line
    cout << setw(12) << first;
    cout << setw(15) << second << endl;

    //fourth line
    cout << setw(13) << first;
    cout << setw(15) << second << endl;

    //fifth line
    cout << setw(14) << first;
    cout << setw(15) << second << endl;


    return 0;
}