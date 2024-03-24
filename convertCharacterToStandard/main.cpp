#include <iostream>
#include <string>

using namespace std;

int main()
{
    ///Converting characters to ASCII encoding

    char c;
    cin >> c;
    int ascii = static_cast<int>(c);
    cout << "ASCII value of " << c << " is " << ascii;
    return 0;
}
