#include <iostream>

using namespace std;

int main()
{
    long long n,ans = 0;
    cin >> n;
    long long values[n];
///Getting user input to make an array
    for(int i =0; i < n; i++){
        cin>> values[i];
    }
///itereing throug the array
    for(int i = 1; i < n; i++){
///if previous number is greater than the current number of the array
        if(values[i] < values[i-1]){
        ///ans is o + previus number - cureent itereation
            ans = ans + (values[i-1] - values[i]);

            ///current = previous
            values[i] = values[i-1];

        }
    }

    ///print the number of steps
    cout << ans;


    return 0;
}
