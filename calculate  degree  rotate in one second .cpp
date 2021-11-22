// An Ball is spinning and creates 3000 revolutions per minutes. calculate the degrees it rotates in one second.//


#include <iostream>

using namespace std;

int main()
 {
    int sum, rpm, rot, sec;
    
    
    cout<< "Enter rpm: ";
    cin >>rpm;
    
    
    cout << "Enter rotation: ";
    cin >>rot; 
    
    
    cout << "Enter seconds:  ";
    cin >> sec;
    
    
    sum = rpm * rot / sec;
    
    
    cout << "Total in one second: "<< sum ;
    
    return 0;
}
