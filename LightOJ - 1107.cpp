#include <iostream>
using namespace std ;
int main(){
    int T ;
    int x1 , y1 , x2 , y2 ;
    int M ;
    int c , d ;
    int i , j ;
    cin>>T ;
    for(i = 0 ; i<T ; i++){
        cin>>x1>>y1>>x2>>y2;
        cin>>M;
        cout<<"Case "<<i+1<<":"<<endl;
        for(j = 0 ; j<M ; j++){
            cin>>c>>d;
            if((c>=x1&&c<=x2)&&(d>=y1&&d<=y2)){
                cout<<"Yes"<<endl;
            }else{
                cout<<"No"<<endl;
            }
        }
    }
    return 0;
}
