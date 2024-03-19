#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int counter = 1,ans = 1;
    for(int i = 0; i < s.length()-1; i++){
        if( s[i] == s[i + 1]){
            counter = counter + 1;
        }else
            counter = 1;
            ans = max(ans,counter);
    }
    cout<<ans<<endl;

    return 0;
}
