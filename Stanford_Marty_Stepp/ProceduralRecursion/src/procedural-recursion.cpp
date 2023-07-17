#include <iostream>
#include "console.h"
using namespace std;

void generateSequences(int length, string sofar);
void generateLetterSequencesUgly(int length, string sofar);
void generateLetterSequencesNice(int length, string sofar);
void permute(string soFar, string rest);
void permute(string s);

int main() {
    generateSequences(4, "");
    // generateLetterSequencesUgly(2, "");
    generateLetterSequencesNice(2, "");
    permute("", "abcd");
    permute("efgh");
    return 0;
}

void generateSequences(int length, string sofar) {
    if (length == 0) {
        cout << sofar << endl;
    } else {
        generateSequences(length - 1, sofar + " H");
        generateSequences(length - 1, sofar + " T");
    }
}

void generateLetterSequencesUgly(int length, string sofar)
{
    if (length == 0) {
        cout << sofar << endl;
    } else {
        generateLetterSequencesUgly(length - 1, sofar + 'A');
        generateLetterSequencesUgly(length - 1, sofar + 'B');
        generateLetterSequencesUgly(length - 1, sofar + 'C');
        generateLetterSequencesUgly(length - 1, sofar + 'D');
        generateLetterSequencesUgly(length - 1, sofar + 'E');
        generateLetterSequencesUgly(length - 1, sofar + 'F');
        generateLetterSequencesUgly(length - 1, sofar + 'G');
        generateLetterSequencesUgly(length - 1, sofar + 'H');
        generateLetterSequencesUgly(length - 1, sofar + 'I');
        generateLetterSequencesUgly(length - 1, sofar + 'J');
        generateLetterSequencesUgly(length - 1, sofar + 'K');
        generateLetterSequencesUgly(length - 1, sofar + 'L');
        generateLetterSequencesUgly(length - 1, sofar + 'M');
        generateLetterSequencesUgly(length - 1, sofar + 'N');
        generateLetterSequencesUgly(length - 1, sofar + 'O');
        generateLetterSequencesUgly(length - 1, sofar + 'P');
        generateLetterSequencesUgly(length - 1, sofar + 'Q');
        generateLetterSequencesUgly(length - 1, sofar + 'R');
        generateLetterSequencesUgly(length - 1, sofar + 'S');
        generateLetterSequencesUgly(length - 1, sofar + 'T');
        generateLetterSequencesUgly(length - 1, sofar + 'U');
        generateLetterSequencesUgly(length - 1, sofar + 'V');
        generateLetterSequencesUgly(length - 1, sofar + 'W');
        generateLetterSequencesUgly(length - 1, sofar + 'X');
        generateLetterSequencesUgly(length - 1, sofar + 'Y');
        generateLetterSequencesUgly(length - 1, sofar + 'Z');
    }
}

void generateLetterSequencesNice(int length, string sofar)
{
    if (length == 0) {
        cout << sofar << endl;
    } else {
        for (char c = 'A'; c <= 'Z'; c++) {
            generateLetterSequencesNice(length - 1, sofar + c);
        }
    }
}

void permute(string soFar, string rest) {
    if (rest == "") {
        cout << soFar << endl;
    } else {
        for (int i = 0; i < rest.length(); i++) {
            string remaining = rest.substr(0, i) + rest.substr(i+1);
            permute(soFar + rest[i], remaining);
        }
    }
}

void permute(string s) {
    permute("", s);
}
