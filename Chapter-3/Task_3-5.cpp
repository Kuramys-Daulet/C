#include <iostream>
using namespace std;

int main(){
    int today, nextDay;
    cout << "Enter today's day: ";
    cin >> today;
    cout << "Enter the number of days elapsed since today: ";
    cin >> nextDay;
    int sumDays = today + nextDay;



    if(sumDays <=7){
        if (sumDays==1){cout << "Понедельник";};
        if (sumDays==2){cout << "Вторник";};
        if (sumDays==3){cout << "Среда";};
        if (sumDays==4){cout << "Четверг";};
        if (sumDays==5){cout << "Пятница";};
        if (sumDays==6){cout << "Суббота";};
        if (sumDays==7){cout << "Воскресенье";};
    }

    if(sumDays > 7){
        while (sumDays>7){sumDays-=7;};
        if (sumDays==1){cout << "Понедельник";};
        if (sumDays==2){cout << "Вторник";};
        if (sumDays==3){cout << "Среда";};
        if (sumDays==4){cout << "Четверг";};
        if (sumDays==5){cout << "Пятница";};
        if (sumDays==6){cout << "Суббота";};
        if (sumDays==7){cout << "Воскресенье";};
    }


}