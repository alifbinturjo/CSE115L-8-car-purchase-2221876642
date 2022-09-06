#include<stdio.h>

void menu(void)
{
    printf("_______  _____  _     _  ______      ______ _____ __   _  ______     _______ _______  ______ _______\n");
    printf("|______ |     | |     | |_____/     |_____/   |   | \\  | |  ____     |       |_____| |_____/ |______\n");
    printf("|       |_____| |_____| |    \\_     |    \\_ __|__ |  \\_| |_____|     |_____  |     | |    \\_ ______|\n\n\n\n\n");

    printf("\t\t\t[1]\tAVAILABLE CARS & DETAILS & PURCHASE\n\n");
    printf("\t\t\t[2]\tTAX TABLE(BANGLADESH)\n\n");
    printf("\t\t\t[3]\tABOUT US\n\n");
    printf("\t\t\t[4]\tEXIT\n\n");

    int opt;

    printf("\n\n\t\t\tENTER OPTION: ");
    scanf("%d", &opt);

    switch(opt)
    {
    case 1:
        system("cls");
        car_det();
        break;
    }

}
