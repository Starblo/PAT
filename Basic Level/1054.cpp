#include <iostream>
#include <cstdio>
#include <string.h>
using namespace std;

int main()
{
    int n, num = 0;
    char a[50], b[50];
    double temp, sum = 0.0;
    
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        scanf("%s", a);
        sscanf(a, "%lf", &temp);
        sprintf(b, "%.2f", temp);
        int flag = 0;
        
        for(int j = 0; j < strlen(a); j++)
            if(a[j] != b[j])
                flag = 1;
            
        if (flag || temp > 1000 || temp < -1000)
        {
            printf("ERROR: %s is not a legal number\n", a);
            continue;
        }
        else
        {
            sum += temp;
            num++;
        }
    }
    if (num == 1)
        printf("The average of 1 number is %.2lf", sum);
    else if (num != 0)
        printf("The average of %d numbers is %.2lf", num, sum / num);
    else if (num == 0)
        printf("The average of 0 numbers is Undefined");
    
    return 0;
}

