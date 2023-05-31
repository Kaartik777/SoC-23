#include <iostream>
#include <chrono>
#include <math.h>
#include <vector>
using namespace std;
 


// Main() function: where the execution of program begins

int main()
{
    
    int t,n,q;
    long long int l,r,k;
    cin >> t;
    for(int i=0;i<t;i++){
        cin >> n >> q;
        vector<long long int> v;
        long long int a;
        
        for(int j=0 ; j<n ; j++)
        {
            cin>>a;
            v.push_back(a);
        }
        
        vector<long long int> prefix;
        prefix.push_back(v[0]);
        
        for(int m=1;m<n;m++){
            prefix.push_back(prefix[m-1]+v[m]);
        }
        
        for(int p=0;p<q;p++){
            
            cin >> l >> r >> k;
            
            long long int sumAdd = (k*(r-l+1))%2;
            long long int sumSub=0;
            if(l>1){
                sumSub = prefix[r-1]-prefix[l-2];
            }
            else{
                sumSub = prefix[r-1];
            }
            int final = (prefix[n-1]- sumSub +sumAdd)%2;
            
            // cout << "SumAdd " << sumAdd  << endl;
            // cout << "SumSub " << sumSub  << endl;
            // cout << "SumO " << prefix[n-1]  << endl;
            if(final==1){
                cout << "YES"<< endl;
            }
            else{
                cout << "NO"<< endl;
            }
        }
    }



    // auto end = std::chrono::high_resolution_clock::now();
    // auto elapsed = std::chrono::duration_cast<std::chrono::milliseconds>(end - begin);
    // printf("Time measured: %.3f milliseconds.\n", elapsed.count());
    
    return 0;
}