

#include <iostream>
#include <string>
#include <cmath>

using namespace std;
int returnIntValue(char c){
    if(c=='0'){
        return 0 ;
    }else{
        return 1 ;
    }
}
int returnBinaryToDecimal(char inputBitString[8]){
        int intValue  = 0 ;
        int j , k ;
        for(j = 0  , k = 7 ; j<8 ; j++ , k--){
           intValue = intValue+returnIntValue(inputBitString[j])*pow(2,k);
       }
       return intValue ;
}

int main()
{
   int T ; 
   int i , j , k ; 
   int ip1_a , ip1_b , ip1_c , ip1_d ;
   char ip2_a[8] , ip2_b[8],ip2_c[8],ip2_d[8]; 
   
   string binaryIP ;
   cin>>T ;
   
   for(i = 0 ; i<T ; i++){
       scanf("%d.%d.%d.%d",&ip1_a,&ip1_b,&ip1_c,&ip1_d);
       cin>>binaryIP ;
       for(int j = 0 ; j<8 ; j++){
           ip2_a[j] = binaryIP[j];
       }
        for(int j = 9 , k=0 ; j<17 ; j++,k++){
           ip2_b[k] = binaryIP[j];
       }
       for(int j = 18 , k=0 ; j<26 ; j++,k++){
           ip2_c[k] = binaryIP[j];
       }
       for(int j = 27 , k=0 ; j<35 ; j++,k++){
           ip2_d[k] = binaryIP[j];
       }
       
        if(ip1_a==returnBinaryToDecimal(ip2_a)&&ip1_b==returnBinaryToDecimal(ip2_b)&&ip1_c==returnBinaryToDecimal(ip2_c)&&ip1_d==returnBinaryToDecimal(ip2_d)){
            cout<<"Case "<<i+1<<": Yes"<<endl;
        }else{
            cout<<"Case "<<i+1<<": No"<<endl;
        }
   }

    return 0;
}
