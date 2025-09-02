// ================================================
//               Language: C++ / Cpp
//               Topic   : [Condition]
//               Problem : 👉👉 [2] ProfitLoss.
//               Want    : 
// ================================================

#include <iostream>
using namespace std;
int main(){
    int cp;
   
    cout<<"Enter Your Cosing price ";
    cin>>cp;
    int sp;
    cout<<"Enter selling prce ";
    cin>>sp;
    if(cp<sp){
        cout<< "Profit is" <<sp-cp<<endl;
    }else if(cp>sp){
        cout<< "loss is" <<cp-sp <<endl;

    }else{
        cout<<"no loss n o profit " <<endl;
    }
    return 0 ;
}