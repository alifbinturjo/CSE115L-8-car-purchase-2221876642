#include<stdio.h>
#include<string.h>

void menu(void)                                     //print menu
{
    printf("_______  _____  _     _  ______      ______ _____ __   _  ______     _______ _______  ______ _______\n");
    printf("|______ |     | |     | |_____/     |_____/   |   | \\  | |  ____     |       |_____| |_____/ |______\n");
    printf("|       |_____| |_____| |    \\_     |    \\_ __|__ |  \\_| |_____|     |_____  |     | |    \\_ ______|\n\n\n\n\n");

    printf("\t\t\t[1]\tAVAILABLE CARS & DETAILS & PURCHASE\n\n");
    printf("\t\t\t[2]\tTAX TABLE(BANGLADESH)\n\n");
    printf("\t\t\t[3]\tMESSAGE\n\n");
    printf("\t\t\t[4]\tABOUT US\n\n");
    printf("\t\t\t[5]\tEXIT\n\n");

    int opt;

    printf("\n\n\t\t\tENTER OPTION: ");
    scanf("%d", &opt);

    switch(opt)
    {
    case 1:
        system("cls");
        car_det();
        break;
    case 2:
        system("cls");
        tax();
        break;
    case 3:
        system("cls");
        message();
        break;
    case 4:
        system("cls");
        about();
        break;
    case 5:
        system("cls");
        printf("_______ _     _ _______ __   _ _     _      __   __  _____  _     _\n");
        printf("   |    |_____| |_____| | \\  | |____/         \\_/   |     | |     |\n");
        printf("   |    |     | |     | |  \\_| |    \\_         |    |_____| |_____|");
        sleep(2);
        break;
    default:
        system("cls");
        menu();

    }

}
