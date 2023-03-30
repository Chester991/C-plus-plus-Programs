#include <iostream>
#include <string>

using namespace std;

int main() {
    int a, b, result;

    cout << "Enter two integers: ";
    cin >> a >> b;

    try {
        if (b == 0) {
            throw string("Divide by zero error");
        }
        result = a / b;
        cout << "Result: " << result << endl;
    }
    catch (const string& e) {
        cout << "Exception caught: " << e << endl;
    }

    return 0;
}
