#include <iostream>
#include <chrono>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
 


// Main() function: where the execution of program begins
vector<long long int> swap(vector<long long int>& v1){
    bool swapped = false;
    for(int i = v1.size() - 1; i >= 0; i--){
        for(int j = i - 1; j >= 0; j--){
            if(i != j){
                long long int *t1 = &v1[i];
                long long int *t2 = &v1[j];
                long long int n1 = *t1 & *t2;
                long long int n2 = *t1 | *t2;

                if(n1 != v1[i] || n2 != v1[j]){
                    //cout << "OSwapping " << v1[i] << " and " << v1[j] << endl;
                    v1[i] = n1;
                    v1[j] = n2;
                    //cout << "Swapping " << v1[i] << " and " << v1[j] << endl;
                    swapped = true;
                }
            }
        }
    }
    if(swapped){
        //cout << "Recursively calling swap" << endl;
        return swap(v1);
    }
    else{
        //cout << "No more swaps, returning result" << endl;
        return v1;
    }
}


    // long long int sumF=0;
    // for(int i= 0; i <v1.size();i++){
    //     //cout << v1[i]<<endl;
    //     sumF += (v1[i]*v1[i]);        
    // }
    // cout << sumF <<endl;

int main()
{
    
    int n,t;
    cin >> n;
    vector<long long int> g1;
    for(int i=0;i<n;i++){
        cin >> t;
        g1.push_back(t);
    }
    
    sort(g1.begin(), g1.end());
    vector<long long int> ans = swap(g1);
    // for(auto i= ans.begin();i !=ans.end();++i){
    //     cout << *i << endl;
    // }
    long long int sumF=0;
    for(int i= 0; i <ans.size();i++){
        //cout << v1[i]<<endl;
        sumF += (ans[i]*ans[i]);        
    }
    cout << sumF <<endl;
    // auto begin = std::chrono::high_resolution_clock::now();





    // auto end = std::chrono::high_resolution_clock::now();
    // auto elapsed = std::chrono::duration_cast<std::chrono::milliseconds>(end - begin);
    // printf("Time measured: %.3f milliseconds.\n", elapsed.count());
    
    return 0;
}