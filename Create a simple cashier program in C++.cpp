// Create a simple cashier program in C++//


#include <iostream>

using namespace std;

int main()
 {
    int select, payment, total;
    
   cout <<"Menu" <<endl<<"[1]Coke (P45)"<<endl<<"[2]Royal (P30)"<<endl<<"[3]Lemon juice (P50)"<<endl<<"Choice:";
   cin>>select;
   

   if (select == 1)
   {
       cout <<"input Payment:";
       cin >> payment;
       
       if (payment < 45)
       {
           cout <<"Insufficient Funds!"<<endl;
       }
       
       else if (payment > 45)
       {
           total = payment - 45;
           cout <<"Payment Successfull"<<endl <<"Total P:"<<endl;
       }
   }
   
        if (select == 2)
    {
        cout <<" Input payment:";
        cin>>payment;
        
        if (payment < 30)
        {
            cout <<"Insufficient Funds!"<< endl;
        }
        else if (payment > 30)
        {
            total = payment - 30;
            cout <<"Payment Successfull"<<endl <<"Total P:"<<endl;
        }
    }
        if (select == 3)
        {
            cout <<"Input payment:";
            cin >>payment;
            
            if (payment < 50)
            {
                cout <<"Insufficient Funds!";
            }
            else if (payment > 50)
            {
                total = payment - 50;
                cout <<"Payment Successfull"<<endl <<"Total P:"<<endl; Successfull";
            }
        }
      system("PAUSE");
    return 0;
}
