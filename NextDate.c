#include<stdio.h>
int isLeapYear(int year){
    // return 1, if year is Leap Year
    // return 0, if year is not leap year
    
    return ((year % 4 == 0)  && (year %100 != 0));
}

int isLastDate(int d, int m, int y){
    int lastDate[] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
    if(m==2){
        if(!isLeapYear(y) && lastDate[2]==d){
            return 1;
        }else if(isLeapYear(y)){
            return (d==29);
        }
    }
    return (lastDate[m]==d);
}

int main(){
    int date = 29, month = 2, year = 2016;
    
    if(isLastDate(date,month,year) && month==12){
        printf("%d/%d/%d",1,1,year+1);
    }
    else if(isLastDate(date,month,year)){
        printf("%d/%d/%d",1,month+1,year);
    }else{
        printf("%d/%d/%d",date+1, month, year);
        
    }
    return 0;
} 
