

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int T , input , initialBalance , loadAmount   ;
    string inputString ;
    int sizeCount ;
    cin>>T ;
    int i,j ;
    for(i = 0 ; i <T ; i++){
        cin>>input; 
        sizeCount = 0 ;
        int reportAmount[input];
        initialBalance = 0 ;
        for(j = 0 ; j<input ; j++){
            cin>>inputString;
            if(inputString=="donate"){
                cin>>loadAmount;
                initialBalance = initialBalance+loadAmount;
            }else{
                reportAmount[sizeCount] = initialBalance ;
                sizeCount++;
            }
        }
        cout<<"Case "<<i+1<<":"<<endl;
        for(j=0;j<sizeCount;j++){
            cout<<reportAmount[j]<<endl;
        }
    }

    return 0;
}
