#include <iostream>
using namespace std;
int main(){
    int rate,rs,samosa,chutta;
    cout <<"rate of samosa:";
    cin >> rate;
    cout<<"available money:";
    cin >> rs;
    samosa = rs/rate;
    cout <<"number of samosa:"<< samosa <<endl;
    chutta = rs%rate;
    cout <<"left money:"<< chutta <<endl;
    return 0;
}
