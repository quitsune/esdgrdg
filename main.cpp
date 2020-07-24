#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    int a[n][2];
    for(int i {0};i<n;i++){
        for(int j {0};j<2;j++){
            a[i][j]=0;
            cin>>a[i][j];
        
    }}
    int c {0};
    
    int lt {0};
    for(int i {0};i<n;i++){
        
        
        if(a[i][1]>lt) lt=a[i][1];
    }     
        
    
                
            
        for(int t {1};t<=lt;t++){
            
           int  cm {0};
          for(int i {0};i<n;i++){
            
            if((a[i][1]>t)&&(a[i][0]<=t)) cm++;
                
              }
             if(cm>c)c=cm;
            
    }
    cout<<c;
    return 0;
}
