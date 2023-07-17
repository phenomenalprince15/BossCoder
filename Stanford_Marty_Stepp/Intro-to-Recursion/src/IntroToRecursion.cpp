#include <iostream>
#include "console.h"
#include "vector.h"

using namespace std;

int power(int x, int n);
int fastPower(int x, int n);
int factorial(int n);
int mystery(int n);
bool isPalindrome(const string& s);

int main() {
    // comment out #include "console.h" and uncomment the next two lines to see a (bad) example of recursion
    // cout << "running main" << endl;
    // main();

    int result = power(5, 4);
    cout << "5^4 == " << result << endl << endl;

    result = fastPower(5, 4);
    cout << "5^4 calculated quickly is " << result << endl << endl;

    result = fastPower(5, 7);
    cout << "5^7 calculated quickly is " << result << endl << endl;

    result = factorial(5);
    cout << "5! == " << result << endl << endl;

    result = mystery(648);
    cout << "mystery(648) == " << result << endl << endl;

    Vector<string> words = {"madam", "racecar", "step on no pets", "python", "byebye"};
    for (string word : words) {
        bool wordIsPal = isPalindrome(word);
        cout << word << (wordIsPal ? " is" : " is not") << " a palendrome." << endl;
    }
    return 0;
}

int power(int x, int n) {
    // calculate x^n recursively
    if (n == 0) {
        return 1;
    }
    return x * power(x, n - 1);

}

int fastPower(int x, int n) {
    if (n == 0) {
        return 1;
    }
    if (n % 2 == 1) { // odd
        return x * fastPower(x, n - 1);
    } else { // even
        int y = fastPower(x, n / 2);
        return y * y;
    }
}

int factorial(int n) {
    // calculate the factorial of n
    if (n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

int mystery(int n) {
    if (n < 10) {
        return n;
    } else {
        int a = n / 10;
        int b = n % 10;
        return mystery(a + b);
    }
}

// Returns true if the given string reads the same
// forwards as backwards.
// Trivially true for empty or 1-letter strings.
bool isPalindrome(const string& s) {
    if (s.length() < 2) { // base case
        return true;
    } else { // recursive case
        if (s[0] != s[s.length() - 1]) {
            return false;
        }
        string middle = s.substr(1, s.length() - 2);
        return isPalindrome(middle);
    }
}
