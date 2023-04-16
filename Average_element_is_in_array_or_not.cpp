#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n],c=0,i;
    for(i=0;i<n;i++){
        cin >> a[i];
        c+=a[i];
    }
    int avg=c/n;
    for(i=0;i<n;i++){
        if(a[i]==avg){
            i=n+1;
            break;
        }
    }
    if(i==n+1){
        cout << "True";
    }
    else{
        cout << "False";
    }
    
}