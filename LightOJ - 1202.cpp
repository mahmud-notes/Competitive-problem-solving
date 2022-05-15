#include <iostream>
#include <cmath>
using namespace std ;
int main(){
    long T , r1 , c1 , r2 , c2 ;
    cin>>T ;
    int i ;
    for(i = 0 ; i<T ; i++){
        cin>>r1>>c1>>r2>>c2 ;
        if((r1+c1)%2 != (r2+c2)%2){
            cout<<"Case "<<i+1<<": impossible"<<endl;
        }else{
            if(abs(r1-r2)==abs(c1-c2)){
                cout<<"Case "<<i+1<<": 1"<<endl;
            }else{
                cout<<"Case "<<i+1<<": 2"<<endl;
            }
        }
    }
    return 0;
}
