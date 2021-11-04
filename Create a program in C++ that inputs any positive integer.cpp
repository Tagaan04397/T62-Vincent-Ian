//Create a program in C++ that inputs any positive integer//

#include <iostream>
using namespace std;

int main (){
    int n;
//inputted number//
    cout << "Input Any Positive Integers:";
    cin >> n;

//while loop//
    while(n!= 1){
        if(n%2==1)
            n=(3*n)+1;
        else
            n/=2;

    cout <<"Current Given Value is "<<n<< endl;
    }

    return 0;
}