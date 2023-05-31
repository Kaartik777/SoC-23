#include <iostream>
#include <chrono>
#include <math.h>
using namespace std;
 


// Main() function: where the execution of program begins
long long int ret(long long int n){
    long long int ans = (n*4)+(n-1)+2*(((pow(n,2)+n)/2)-1-n-n+1)+3;
    return ans;
}
int main()
{
    int t;
    cin >> t;
    // auto begin = std::chrono::high_resolution_clock::now();
    for (int i=0;i<t;i++){
        long long int n;
        cin >> n;
        cout << ret(n)<< endl;
    }


    // auto end = std::chrono::high_resolution_clock::now();
    // auto elapsed = std::chrono::duration_cast<std::chrono::milliseconds>(end - begin);
    // printf("Time measured: %.3f milliseconds.\n", elapsed.count());
    
    return 0;
}