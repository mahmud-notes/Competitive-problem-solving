#include <iostream>
using namespace std ;
int main(){
    int T , A , B ;
    long i , n , j , temp , temp2 ;
    cin>>T ;
    for(i = 0 ; i<T ; i++){
        cin>>A>>B ;
        j = 1 ;
        n = 1 ;
        temp= 0 ;
        while(j<A){
            if(n%3==0){
                temp++;
            }
            n = (n*10)+j+1;
            j++ ;
        }
        j = 1 ;
        n = 1 ;
        temp2= 0 ;
        while(j<=B){
            if(n%3==0){
                temp2++;
            }
            n = (n*10)+j+1;
            j++ ;
        }
        cout<<"Case "<<i+1<<": "<<temp2-temp<<endl ;
    }
    return 0 ;
}
