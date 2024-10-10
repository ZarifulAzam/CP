<<<<<<< HEAD
#include <iostream>
using namespace std;

int main() {
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif

    string s;
    cin >> s;

    for (int i = 0; i < s.size(); i++) 
    {
        if (s[i] == '.') 
        {
            cout << '0';
        } 
        if (s[i] == '-' && s[i + 1] == '.') 
        {
            cout << '1';
            i++;
        } 
        if (s[i] == '-' && s[i + 1] == '-') 
        {
            cout << '2';
            i++;
        }
    }
    cout<<"\n";

    return 0;
}
=======
#include <iostream>
using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    string s;
    cin >> s;

    for (int i = 0; i < s.size(); i++) 
    {
        if (s[i] == '.') 
        {
            cout << '0';
        } 
        if (s[i] == '-' && s[i + 1] == '.') 
        {
            cout << '1';
            i++;
        } 
        if (s[i] == '-' && s[i + 1] == '-') 
        {
            cout << '2';
            i++;
        }
    }
    cout<<"\n";

    return 0;
}
>>>>>>> ecc4f46e283d1725cb7b4bec06ce3701cc1d2556
