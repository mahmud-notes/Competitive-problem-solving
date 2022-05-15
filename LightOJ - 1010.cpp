#include <iostream>
using namespace std ;
int findMax(int a , int b ){
    if(a>b){
        return a ;
    }else{
        return b ;
    }
}
int main(){
    int T  , i , m , n;
    cin>>T ;
    for(i = 0 ; i<T ; i++){
        cin>>m>>n;
        if(m == 1 || n == 1){
            cout<<"Case "<<i+1<<": "<<findMax(m,n)<<endl;
        }else if(m == 2 || n == 2 ){
            if(((findMax(m,n)%4)%2)==0){
                cout<<"Case "<<i+1<<": "<<findMax(m,n)+findMax(m,n)%4<<endl;
            }else{
                cout<<"Case "<<i+1<<": "<<findMax(m,n)+1<<endl;
            }
        }else{
            cout<<"Case "<<i+1<<": "<<((m*n)+1)/2<<endl;
        }
    }
    return 0 ;
}
