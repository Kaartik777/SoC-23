#include <iostream>
#include <chrono>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
 


// Main() function: where the execution of program begins
void swap(vector<long long int> v1){
    for(int i= 0; i <v1.size();i++){
        for(int j= i;j <v1.size();j++){
            if (i!=j){
                
                long long int *t1= &v1[i];
                long long int *t2= &v1[j];
                long long int n1 = *t1 & *t2;
                long long int n2 = *t1 | *t2;
                
                if(n1!=v1[i]||v1[j]&&n2!=v1[i]||v1[j]){
                    v1[i]=n1;
                    v1[j]= n2;
                    // break;
                    //cout << "changed"<<endl;
                }
   
            }
        }
    }
    long long int sumF=0;
    for(int i= 0; i <v1.size();i++){
        //cout << v1[i]<<endl;
        sumF += (v1[i]*v1[i]);        
    }
    cout << sumF <<endl;
}

int main()
{
    
    int n,t;
    cin >> n;
    vector<long long int> g1;
    for(int i=0;i<n;i++){
        cin >> t;
        g1.push_back(t);
    }
    // for(auto i= g1.begin();i !=g1.end();++i){
    //     cout << *i << endl;
    // }
    sort(g1.begin(), g1.end());
    swap(g1);

    // auto begin = std::chrono::high_resolution_clock::now();





    // auto end = std::chrono::high_resolution_clock::now();
    // auto elapsed = std::chrono::duration_cast<std::chrono::milliseconds>(end - begin);
    // printf("Time measured: %.3f milliseconds.\n", elapsed.count());
    
    return 0;
}