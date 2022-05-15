#include <iostream>
using namespace std ;
int main(){
    int T ,temp;
    cin>>T ;
    long W , i , j ,n , m ;
    for(i = 0 ; i<T ; i++){
        cin>>W ;
        if(W%2==0){
            m = 2 ;
            n = W/2 ;

            while(n%2==0){
                n = n/2;
                m*=2 ;
            }
            cout<<"Case "<<i+1<<": "<<n<<" "<<m<<endl;
        }else{
            cout<<"Case "<<i+1<<": Impossible"<<endl;
        }
    }
    return 0 ;
}
