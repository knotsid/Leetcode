class Solution {
public:
    string dayOfTheWeek(int day, int month, int year) {
        
        //days in month
        int months[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};   
        
        //Week days array
        string dayName[7] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
        
        //on 1970 31 dec is thursday
        int sum = 4;
        
        //count days till last year + leap year also checked
        for(int i = 1971; i < year; i++){
            if(((i % 4 ==0) && (i % 100 != 0)) || (i%400 == 0)){
                sum += 366;
            }else{
                sum += 365;
            }
        }

        //count days till last month + leap year also checked
        for(int i = 1; i < month; i++){
            if( i == 2 && (((year % 4 ==0) && (year % 100 != 0)) || (year % 400 == 0))){
                sum += 1;
            }
            sum += months[i];
        }
        
        //count added till last day
        sum += day;
        
        //total days from 1971 till now mod 7
        return dayName[sum%7];
    }
};