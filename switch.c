#include <stdio.h>

int main()
{
    char day;
    printf("Enter the first letter of day : ");
    scanf("%s",&day);

    switch(day) {

        case 'm' : printf("MONDAY");
        break;

        case 't' :printf(" TUESDAY");
        break;

        case 'w' :printf("WEDNESDAY");
        break;

        case 'T' :printf("THRUSDAY");
        break;
        
        case 'f' :printf("FRIDAY");
        break;

        case 's' :printf("SATURDAY");
        break;

        case 'S' :printf("SUNDAY");
        break;

        default :printf("NOT A VALID DAY");

    }
return 0;

}