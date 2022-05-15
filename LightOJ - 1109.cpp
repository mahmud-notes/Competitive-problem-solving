
#include <iostream>

using namespace std;
struct number{
    int number ;
    int countNumber ;
};
 

int main()
{
    int T ,inputNum;
    struct number myNumber[1000];
    int i , j , k  , count , n = 1000 ; 
    for(i = 1 ; i<=1000 ; i++){
        count = 0 ;
        for(j = 1 ; j<=i ; j++){
            if(i%j==0){
                count++ ;
            }
        }
        myNumber[i-1].number = i;
        myNumber[i-1].countNumber=count;
    }
        for (i = 0; i < n-1; i++) {
            for (j = 0; j < n-i-1; j++){
                if (myNumber[j].countNumber == myNumber[j+1].countNumber){
                    if(myNumber[j].number < myNumber[j+1].number){
                        int number1 = myNumber[j+1].number;
                        myNumber[j+1].number = myNumber[j].number;
                        myNumber[j].number = number1;
                        int count1 = myNumber[j+1].countNumber;
                        myNumber[j+1].countNumber = myNumber[j].countNumber;
                        myNumber[j].countNumber = count1;
                    }
                }else if (myNumber[j].countNumber > myNumber[j+1].countNumber){
                        int number1 = myNumber[j+1].number;
                        myNumber[j+1].number = myNumber[j].number;
                        myNumber[j].number = number1;
                        int count1 = myNumber[j+1].countNumber;
                        myNumber[j+1].countNumber = myNumber[j].countNumber;
                        myNumber[j].countNumber = count1;
                }
            }  
        }
        
    cin>>T ; 
    for(k = 0 ; k<T ; k++){
        cin>>inputNum;
        cout<<"Case "<<k+1<<": "<<myNumber[inputNum-1].number<<endl;
    }   

    return 0;
}
