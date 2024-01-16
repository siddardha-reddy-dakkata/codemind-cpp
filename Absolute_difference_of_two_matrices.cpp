//Absolute Diffrence of two matrices skillupcoder | level-38
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int m1[n][n];
    int m2[n][n];
    int res[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int r;
            cin>>r;
            m1[i][j]=r;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int g;
            cin>>g;
            m2[i][j]=g;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            res[i][j]=abs(m1[i][j]-m2[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j == n - 1) {
                cout<<res[i][j];
                continue;
            }
            cout<<res[i][j]<<" ";
        }
        cout << "
";
        
    }
}