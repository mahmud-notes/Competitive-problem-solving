#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std ;
int main(){
    int T , j ;
    double  radius ;
    cin>>T ;
    for(j= 0 ; j<T ; j++){
        cin>>radius ;
        cout<<"Case "<<j+1<<": "<<fixed<<setprecision(2)<<((radius*2)*(radius*2))-(2*acos(0.0)*(radius*radius))<<endl;
    }

    return 0 ;
}
