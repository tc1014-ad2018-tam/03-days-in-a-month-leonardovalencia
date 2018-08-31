

int main() {

    int month;
    unsigned int year;

    //Here we are asking the user for the month and year
    printf("Give me the month please\n");
    //Here the user will give us the month
    scanf("%i", &month);
    printf("Now give me the year please\n");
    scanf("%i", &year);

    switch (month) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 9:
        case 11:
            printf("This month has 31 days\n");
            break;

        case 4:
        case 6:
        case 8:
        case 10:
        case 12:
            printf("This month has 31 days\n");
            break;
        case 2:
            if ((year % 4 == 0) & ((year % 100 != 0) || (year % 400 == 0))) { printf("This month has 29 days\n "); }
            else { printf("This month has 28 days\n"); }
            break;
        default:
            printf("Sorry that´s not a month\n");

    }


    return 0;
}