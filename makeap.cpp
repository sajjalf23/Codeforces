#include<iostream>
#include<math.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int f ,s,t;
        cin >> f >> s >> t;
        double fx , sx, tx;
        if((t + f)%(2*s)==0 && (t + f)/(2*s) > 0){
            cout << "Yes" << endl;
        }
        else if(((2*s)-t)%f == 0 && ((2*s)-t)/f > 0){
            cout << "Yes" << endl;
        }
        else if(((2*s)-f)%t == 0 && ((2*s)-f)/t > 0){
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }
    }
}