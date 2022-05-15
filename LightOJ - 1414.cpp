
#include <iostream>
#include <string>

using namespace std;

enum month{January = 1,February = 2,March= 3,April= 4,May= 5,June= 6,July= 7,August= 8,September= 9,October= 10,November= 11,December= 12};

int monthpoint(string month){ 
        if(month=="January"){
            return 1 ; 
        }else if(month=="February"){
            return 2 ;
        }else if(month=="March"){
            return 3 ;
        }else if(month=="April"){
            return 4 ;
        }else if(month=="May"){
            return 5 ;
        }else if(month=="June"){
            return 6 ;
        }else if(month=="July"){
            return 7 ;
        }else if(month=="August"){
            return 8 ;
        }else if(month=="September"){
            return 9 ;
        }else if(month=="October"){
            return 10 ;
        }else if(month=="November"){
            return 11 ;
        }else if(month=="December"){
            return 12 ;
        }
    return 0 ;
}
int initialNum(int year){
    return (year/4)-(year/100)+(year/400);
}

int main()
{
    int i , x ;
    string m1 , m2 ; 
    int d1 , d2 , y1 , y2 ;
    int n ;
    int count  = 0 ;
    cin>>n ;
    for(i = 0 ; i<n ; i++){
        cin>>m1 ;
        scanf("%d,%d",&d1,&y1);
        cin>>m2 ;
        scanf("%d,%d",&d2,&y2);
        
    
        if(monthpoint(m1)<March){
            y1 = y1-1 ;
        }

        if(monthpoint(m2)<February||(monthpoint(m2)==February&&d2<29)){
            y2 = y2 -1 ;
        }
        
        int num1 = initialNum(y1);
        int num2 = initialNum(y2);
        
        count = num2 - num1 ;
    
        
    
        cout<<"Case "<<i+1<<": "<<count<<endl ;
    }
  
    return 0;
}
