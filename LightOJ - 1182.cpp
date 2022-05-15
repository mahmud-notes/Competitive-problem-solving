#include <iostream>
using namespace std ;
int main(){
    int T ;
    long count = 0  , N;
    cin>>T ;
    int i ;
    for(i = 0 ; i < T ; i++){
        count= 0 ;
        cin>>N;
        while((int)N/2!=0){
            if(N%2 == 1){
                count++;
            }
            N = (int)N/2 ;
        }
        count++ ;
        if(count%2 == 0){
            cout<<"Case "<<i+1<<": even"<<endl;
        }else{
            cout<<"Case "<<i+1<<": odd"<<endl;
        }

    }
    return 0 ;
}
