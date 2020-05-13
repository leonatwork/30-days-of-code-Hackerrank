#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main()
{
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    int n;
    double f;
    string str;

    // Declare second integer, double, and String variables.
    cin >> n;
    cin >> f;
    cin.ignore();
    getline(cin, str);
    // Read and save an integer, double, and String to your variables.
    // Note: If you have trouble reading the entire string, please go back and review the Tutorial closely.

    // Print the sum of both integer variables on a new line.
    cout << n + i << "\n";
    cout << fixed << setprecision(1) << f + d << "\n";
    cout << s + str;
    // Print the sum of the double variables on a new line.

    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.

    return 0;
}