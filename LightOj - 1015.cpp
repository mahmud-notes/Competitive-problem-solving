#include <iostream>
using namespace std ;
int main(){
    int T  , totalDust , i , j , unit , student ;
    cin>>T;
    for(i = 0 ; i<T ; i++){
        cin>>student ;
        totalDust = 0 ;
        for(j = 0 ; j<student ; j++){
            cin>>unit ;
            if(unit>=0){
                totalDust+=unit;
            }
        }
        cout<<"Case "<<i+1<<": "<<totalDust<<endl ;
    }
    return 0 ;
}
