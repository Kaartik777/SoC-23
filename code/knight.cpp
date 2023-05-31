#include <iostream>
#include <chrono>
#include <math.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;

    long long int prev_ans = 0;
    for (long long int j = 1; j <= t; j++) {
        if(j==1){
            cout << 0 << endl;
        }
        else{
        long long int ans = (j*j*(j*j-1))/2 - 4*(j-1)*(j-2);
        cout << ans  << endl;
        }
        
    }
}

