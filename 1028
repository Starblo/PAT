#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Date
{
    string name;
    int year;
    int month;
    int day;
};

int date_comp(Date a, Date b);

int main()
{
    int n;//the number of the input
    int max_year = 0, max_month = 0, max_day = 0, min_year = 9999, min_month = 9999, min_day = 9999;//most old and most young
    string max_name, min_name;//most old and most young
    int i, count = 0;
    int year, month, day;//temp
    string name;//temp
    Date temp_date, max_date, min_date;//limit of the date
    
    max_date.name = "max";
    max_date.year = 2014;
    max_date.month = 9;
    max_date.day = 6;
    min_date.name = "min";
    min_date.year = 1814;
    min_date.month = 9;
    min_date.day = 6;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> name;
        scanf("%d/%d/%d", &year, &month, &day);
        temp_date.year = year;
        temp_date.month = month;
        temp_date.day = day;
        if (date_comp(temp_date, max_date) > 0 || date_comp(temp_date, min_date) < 0)
            continue;
        else
        {
            count++;
            if (year > max_year || (year == max_year && month > max_month) || (year == max_year && month == max_month && day > max_day))
            {
                max_year = year;
                max_month = month;
                max_day = day;
                max_name = name;
            }
            if(year < min_year || (year == min_year && month < min_month) || (year == min_year && month == min_month && day < min_day))
            {
                min_year = year;
                min_month = month;
                min_day = day;
                min_name = name;
            }
        }
    }
    cout << count;
    if (count)
        cout << " " << min_name << " " << max_name;
    return 0;
}

int date_comp(Date a, Date b)
{
    if(a.year > b.year)
        return 1;
    else if(a.year < b.year)
        return -1;
    else
    {
        if(a.month > b.month)
            return 1;
        else if(a.month < b.month)
            return -1;
        else
        {
            if(a.day > b.day)
                return 1;
            else if(a.day < b.day)
                return -1;
            else
                return 0;
        }
    }
}
