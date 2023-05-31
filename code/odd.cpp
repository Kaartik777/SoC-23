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
        for(int i=0 ; i<n ; i++)
        {
            cin>>a;
            v.push_back(a);
        }
        for(int p=0;p<q;p++){
            long long int sumAdd=0;
            // cout <<v[0]<<" "<< v[4] <<endl; 
            cin >> l >> r >> k;
            long long int sumF =0;
            for(int j=0 ; j<l-1 ; j++)
            {
                sumF += v[j];
            }
            sumF = sumF%2;
            //cout << "sumF" << sumF << endl;
            long long int sumL =0;
            for(int m=r ; m<n ; m++)
            {
                
                sumL += v[m];
            }
            sumL = sumL%2;
            //cout << "sumL" << sumL << endl;
            int leftSum = sumF^sumL; // 1 will be odd
            //cout << "leftSum " << leftSum  << endl;
            sumAdd = (k*(r-l+1))%2;
            //cout << "Sum " << sumAdd  << endl;
            int final;
            final = leftSum^sumAdd;
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