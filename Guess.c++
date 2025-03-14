#include<iostream>
using namespace std;
int main() {
    int l = 1, r = 1e6, md, ans;
    while (l <= r)
    {
        md = (r+l)/2;
        cout << "Your number { >= || < } ?! " << md << endl;

        string resposne; cin >> resposne;
        if (resposne == ">=")
        {
            ans = md; // <5
            l = md + 1;
        }
        else
            r = md - 1;
    }
    cout << "=================================\n\n";
    cout << "Your Guess Is: " << ans << ":)" << endl << endl;
    cout << "=================================\n";

    
}
