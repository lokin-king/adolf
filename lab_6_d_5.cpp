#include <iostream>

using namespace std;

struct Date {
    int day;
    int month;
    int year;
};

bool vis_year(int year) {
    return (year % 4 == 0 && year % 100 != 0 )||( year % 400 == 0);
}
int dayinmon(int month, int year) {
    if (month == 2) {
        return vis_year(year) ? 29 : 28;
    }
    if (month == 4 || month == 6 || month == 9 || month == 11) {
        return 30;
    }
    return 31;
}
int starsh(Date date1, Date date2) {
    int dayss = 0;
    if ((date1.year > date2.year) || (date1.year == date2.year && date1.month > date2.month) ||
        (date1.year == date2.year && date1.month == date2.month && date1.day > date2.day)) {
        swap(date1, date2);
    }
    while (date1.year < date2.year || date1.month < date2.month || date1.day < date2.day) {
        dayss++;
        date1.day++;
        if (date1.day > dayinmon(date1.month, date1.year)) {
            date1.day = 1;
            date1.month++;
            if (date1.month > 12) {
                date1.month = 1;
                date1.year++;
            }

        }

    }
    return dayss;
}




int main() {
    Date pi_1, pi_2;
    int months, days;
    cout << "pi_1:rik mis day:";
    cin >> pi_1.year >> pi_1.month >> pi_1.day;
    cout << endl <<"pi_2:rik mis day:";
    cin >> pi_2.year >> pi_2.month >> pi_2.day;
    int day_rizny = starsh(pi_1, pi_2);
    if (day_rizny == 0) {
        cout << "bliznec zub dayo";
    }
    else
    {
        months = day_rizny / 30;
        days = day_rizny % 30;
        cout << "starsh na " << months << " month i " << days << " day";
    }
    
    
   

    return 0;
}
