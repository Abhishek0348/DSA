#include <iostream>
#include <cctype>
#include <string>

using namespace std;

void Correct_format(string s) {
    int lower = 0;
    int upper = 0;
    for (int i = 0; i < s.size(); i++) {
        if (islower(s[i])) {
            lower++;
        } else if (isupper(s[i])) {
            upper++;
        }
    }

    cout << "Lowercase count: " << lower << ", Uppercase count: " << upper << endl;

    if (lower > upper) {
        for (int i = 0; i < s.size(); i++) {
            s[i] = tolower(s[i]); 
        }
    } else if (upper > lower) {
        for (int i = 0; i < s.size(); i++) {
            s[i] = toupper(s[i]);
        }
    }

    cout << s << endl;
}

int main() {
    string s = "BABaaE";
    Correct_format(s);
    return 0;
}
