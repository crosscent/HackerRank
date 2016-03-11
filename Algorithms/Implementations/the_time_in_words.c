#include <stdio.h>
char * time_dict[] = {"o' clock", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve", "thirteen", "fourteen", "quarter", "sixteen", "seventeen", "eighteen", "nineteen", "twenty", "twenty one", "twenty two", "twenty three", "twenty four", "twenty five", "twenty six", "twenty seven", "twenty eight", "twenty nine", "half"};

int main()
{
    int hour, minute;
    scanf("%d", &hour);
    scanf("%d", &minute);

    if (minute > 30) {
        if (hour == 12) {
            hour = 1;
        } else {
            hour +=1;
        }
        minute = 60 - minute;

        if (minute == 1 ) {
            printf("%s minutes to %s", time_dict[minute], time_dict[hour]);
        } else if (minute == 15) {
            printf("%s to %s", time_dict[minute], time_dict[hour]);
        } else {
            printf("%s minutes to %s", time_dict[minute], time_dict[hour]);
        }
    } else if (minute == 1) {
        printf("%s minute past %s", time_dict[minute], time_dict[hour]);
    } else if (minute == 0) {
        printf("%s %s", time_dict[hour], time_dict[minute]);
    } else if (minute == 15 || minute == 30) {
        printf("%s past %s", time_dict[minute], time_dict[hour]);
    } else {
        printf("%s minutes past %s", time_dict[minute], time_dict[hour]);
    }
    return 0;
}
