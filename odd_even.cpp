#include <iostream>
using namespace std;

int main(){
    int a;
    cout << "Please Type your Number :  ";
    cin >> a;
    if(a==0){
        cout << "The Number is nor Even Neither Odd ";
        return 0;
    }
    else{
    if (a%2==0){
        if(a<0){
            cout << "The Number is even and Negetive";
            return 0;
        }
        else
        cout << "The Number is Even and Positive";
        return 0;
    }
    else{
        if(a<0){
            cout << "The Number is Odd and Negetive";
            return 0;
        }
        else
        cout << "The Number is Odd and Positive";
        return 0;
    }
}
}