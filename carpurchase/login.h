#include<stdio.h>
#include<string.h>
#include<dos.h>

void login(void)
{
    printf("_______  _____  _     _  ______      ______ _____ __   _  ______     _______ _______  ______ _______\n");
    printf("|______ |     | |     | |_____/     |_____/   |   | \\  | |  ____     |       |_____| |_____/ |______\n");
    printf("|       |_____| |_____| |    \\_     |    \\_ __|__ |  \\_| |_____|     |_____  |     | |    \\_ ______|\n");
    printf("        _____   ______ _____ __   _\n");
    printf("|      |     | |  ____   |   | \\  |\n");
    printf("|_____ |_____| |_____| __|__ |  \\_|\n\n\n\n\n");

    char username[10];
    char password[10];
    int i = 0;
    int j = 3;

    while(i<3)
    {
        printf("\t\t\tREMAINING LOGIN ATTEMPTS: %d\n\n\n", j--);

        printf("\t\t\tENTER USERNAME: ");
        gets(username);
        printf("\n\t\t\tENTER PASSWORD: ");
        gets(password);

        if(strcmp(username,"user")==0 && strcmp(password,"pass")==0)
        {
            system("cls");
            printf("        _____   ______ _____ __   _\n");
            printf("|      |     | |  ____   |   | \\  |\n");
            printf("|_____ |_____| |_____| __|__ |  \\_|\n");
            printf("_______ _     _ _______ _______ _______ _______ _______ _______ _     _              \n");
            printf("|______ |     | |       |       |______ |______ |______ |______ |     | |      |     \n");
            printf("______| |_____| |_____  |_____  |______ ______| ______| |       |_____| |_____ |_____");
            sleep(2);
            break;
        }
        else if((strcmp(username,"user")!=0 || strcmp(password,"pass")!=0) && i<2)
        {
            system("cls");
            printf("        _____   ______ _____ __   _\n");
            printf("|      |     | |  ____   |   | \\  |\n");
            printf("|_____ |_____| |_____| __|__ |  \\_|\n");
            printf("_______  ______  ______  _____   ______\n");
            printf("|______ |_____/ |_____/ |     | |_____/\n");
            printf("|______ |    \\_ |    \\_ |_____| |    \\_\n\n\n\n\n");
            i++;
        }
        else if((strcmp(username,"user")!=0 || strcmp(password,"pass")!=0) && i<3)
        {
            system("cls");
            printf("        _____   ______ _____ __   _\n");
            printf("|      |     | |  ____   |   | \\  |\n");
            printf("|_____ |_____| |_____| __|__ |  \\_|\n");
            printf("_______ _______ _____        _______ ______ \n");
            printf("|______ |_____|   |   |      |______ |     \\\n");
            printf("|       |     | __|__ |_____ |______ |_____/\n\n\n\n\n");

            printf("\t\t\tREMAINING LOGIN ATTEMPTS: %d\n\n", j--);
            printf("\t\t\t      TRY AGAIN LATER\n\n\n");
            sleep(2);
            break;
        }
    }
}
