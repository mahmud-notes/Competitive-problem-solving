#include <iostream>
using namespace std ;
int main(){
    int T , num ;
    cin>>T ;
    int i ;
    for(i = 0 ; i<T ; i++){
        cin>>num ;
        if(num%2 == 0){
            cout<<num/2<<" "<<num/2<<endl;
        }else{
            cout<<(int)num/2<<" "<<num-(int)num/2<<endl;
        }
    }

    return 0 ;
}
