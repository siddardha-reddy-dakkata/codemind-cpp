#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n],i,c=0;
    for(i=0;i<n;i++){
        cin >> a[i];
    }
    for(i=1;i<n-1;i++){
        if(a[i]%2!=0){
            if(a[i-1]%2==0 && a[i+1]%2==0){
                c++;
            }
        }
    }
    cout << c;
}