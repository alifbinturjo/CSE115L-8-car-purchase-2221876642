#include <stdio.h>
#include <stdlib.h>
#include"splash.h"
#include"login.h"
#include"menu.h"
void car_det(void);
void downmenu(void);
void audi(void);
void a3(int prc);
void a4(int prc);
void a5(int prc);
void a6(int prc);
void a8(int prc);
void rs3(int prc);
void rs6(int prc);
void q2(int prc);
void q3(int prc);
void q5(int prc);
void q7(int prc);
void q8(int prc);
void r8(int prc);
void audilogo(void);
void bmw(void);
void m2(int prc);
void m4(int prc);
void m5(int prc);
void x2(int prc);
void x3(int prc);
void x4(int prc);
void x5(int prc);
void x6(int prc);
void x7(int prc);
void bmwlogo(void);
void mbenz(void);
void rr(void);
void honda(void);
void hyundai(void);
void mazda(void);

int main(void)
{
    splash();
    login();


    return 0;
}
void car_det(void)
{
    printf("_______  _____  _     _  ______      ______ _____ __   _  ______     _______ _______  ______ _______\n");
    printf("|______ |     | |     | |_____/     |_____/   |   | \\  | |  ____     |       |_____| |_____/ |______\n");
    printf("|       |_____| |_____| |    \\_     |    \\_ __|__ |  \\_| |_____|     |_____  |     | |    \\_ ______|\n\n\n\n\n");

    printf("\t\t\t[1]\tAUDI\n\n");
    printf("\t\t\t[2]\tBMW\n\n");
    printf("\t\t\t[3]\tMERCEDES BENZ\n\n");
    printf("\t\t\t[4]\tRANGE ROVER\n\n");
    printf("\t\t\t[5]\tHONDA\n\n");
    printf("\t\t\t[6]\tHYUNDAI\n\n");
    printf("\t\t\t[7]\tMAZDA\n\n");
    printf("\t\t\t[8]\tBACK TO MENU\n\n");

    int opt1;

    printf("\n\n\t\t\tENTER OPTION: ");
    scanf("%d", &opt1);

    switch(opt1)
    {
    case 1:
        audi();
        break;
    case 2:
        bmw();
        break;
    case 3:
        mbenz();
        break;
    case 4:
        rr();
        break;
    case 5:
        honda();
        break;
    case 6:
        hyundai();
        break;
    case 7:
        mazda();
        break;
    case 8:
        system("cls");
        menu();
        break;
    default:
        system("cls");
        car_det();
    }
}
void audi(void)
{
    system("cls");
audilogo();

printf("\t\t\t[1]\tAUDI A3\n\n");
printf("\t\t\t[2]\tAUDI A4\n\n");
printf("\t\t\t[3]\tAUDI A5\n\n");
printf("\t\t\t[4]\tAUDI A6\n\n");
printf("\t\t\t[5]\tAUDI A8\n\n");
printf("\t\t\t[6]\tAUDI RS3\n\n");
printf("\t\t\t[7]\tAUDI RS6\n\n");
printf("\t\t\t[8]\tAUDI Q2\n\n");
printf("\t\t\t[9]\tAUDI Q3\n\n");
printf("\t\t\t[10]\tAUDI Q5\n\n");
printf("\t\t\t[11]\tAUDI Q7\n\n");
printf("\t\t\t[12]\tAUDI Q8\n\n");
printf("\t\t\t[13]\tAUDI R8\n\n");
printf("\t\t\t[14]\tBACK\n\n");
printf("\t\t\t[15]\tBACK TO MENU\n\n");

int audiopt,prc,optt;

printf("\n\n\t\t\tENTER OPTION: ");
scanf("%d", &audiopt);

switch(audiopt)
{
case 1:
    system("cls");
    a3(prc);
    o:
    printf("\n\n\t\t\tENTER OPTION: ");
    scanf("%d", &optt);
    switch(optt)
    {
    case 2:
        system("cls");
        audi();
        break;
    case 3:
        system("cls");
        menu();
        break;
    default:
        system("cls");
        a3(prc);
        goto o;
        }
    break;
case 2:
    system("cls");
    a4(prc);
    o1:
    printf("\n\n\t\t\tENTER OPTION: ");
    scanf("%d", &optt);
    switch(optt)
    {
    case 2:
        system("cls");
        audi();
        break;
    case 3:
        system("cls");
        menu();
        break;
    default:
        system("cls");
        a4(prc);
        goto o1;
        }
     break;
case 3:
    system("cls");
    a5(prc);
    o2:
    printf("\n\n\t\t\tENTER OPTION: ");
    scanf("%d", &optt);
    switch(optt)
    {
    case 2:
        system("cls");
        audi();
        break;
    case 3:
        system("cls");
        menu();
        break;
    default:
        system("cls");
        a5(prc);
        goto o2;
        }
     break;
case 4:
    system("cls");
    a6(prc);
    o3:
    printf("\n\n\t\t\tENTER OPTION: ");
    scanf("%d", &optt);
    switch(optt)
    {
    case 2:
        system("cls");
        audi();
        break;
    case 3:
        system("cls");
        menu();
        break;
    default:
        system("cls");
        a6(prc);
        goto o3;
        }
     break;
case 5:
    system("cls");
    a8(prc);
    o4:
    printf("\n\n\t\t\tENTER OPTION: ");
    scanf("%d", &optt);
    switch(optt)
    {
    case 2:
        system("cls");
        audi();
        break;
    case 3:
        system("cls");
        menu();
        break;
    default:
        system("cls");
        a8(prc);
        goto o4;
        }
     break;
case 6:
    system("cls");
    rs3(prc);
    o5:
    printf("\n\n\t\t\tENTER OPTION: ");
    scanf("%d", &optt);
    switch(optt)
    {
    case 2:
        system("cls");
        audi();
        break;
    case 3:
        system("cls");
        menu();
        break;
    default:
        system("cls");
        rs3(prc);
        goto o5;
        }
     break;
case 7:
    system("cls");
    rs6(prc);
    o6:
    printf("\n\n\t\t\tENTER OPTION: ");
    scanf("%d", &optt);
    switch(optt)
    {
    case 2:
        system("cls");
        audi();
        break;
    case 3:
        system("cls");
        menu();
        break;
    default:
        system("cls");
        rs6(prc);
        goto o6;
        }
     break;
case 8:
    system("cls");
    q2(prc);
    o7:
    printf("\n\n\t\t\tENTER OPTION: ");
    scanf("%d", &optt);
    switch(optt)
    {
    case 2:
        system("cls");
        audi();
        break;
    case 3:
        system("cls");
        menu();
        break;
    default:
        system("cls");
        q2(prc);
        goto o7;
        }
     break;
case 9:
    system("cls");
    q3(prc);
    o8:
    printf("\n\n\t\t\tENTER OPTION: ");
    scanf("%d", &optt);
    switch(optt)
    {
    case 2:
        system("cls");
        audi();
        break;
    case 3:
        system("cls");
        menu();
        break;
    default:
        system("cls");
        q3(prc);
        goto o8;
        }
     break;
case 10:
    system("cls");
    q5(prc);
    o9:
    printf("\n\n\t\t\tENTER OPTION: ");
    scanf("%d", &optt);
    switch(optt)
    {
    case 2:
        system("cls");
        audi();
        break;
    case 3:
        system("cls");
        menu();
        break;
    default:
        system("cls");
        q5(prc);
        goto o9;
        }
     break;
case 11:
    system("cls");
    q7(prc);
    o10:
    printf("\n\n\t\t\tENTER OPTION: ");
    scanf("%d", &optt);
    switch(optt)
    {
    case 2:
        system("cls");
        audi();
        break;
    case 3:
        system("cls");
        menu();
        break;
    default:
        system("cls");
        q7(prc);
        goto o10;
        }
     break;
case 12:
    system("cls");
    q8(prc);
    o11:
    printf("\n\n\t\t\tENTER OPTION: ");
    scanf("%d", &optt);
    switch(optt)
    {
    case 2:
        system("cls");
        audi();
        break;
    case 3:
        system("cls");
        menu();
        break;
    default:
        system("cls");
        q8(prc);
        goto o11;
        }
     break;
case 13:
    system("cls");
    r8(prc);
    o12:
    printf("\n\n\t\t\tENTER OPTION: ");
    scanf("%d", &optt);
    switch(optt)
    {
    case 2:
        system("cls");
        audi();
        break;
    case 3:
        system("cls");
        menu();
        break;
    default:
        system("cls");
        r8(prc);
        goto o12;
        }
     break;
case 14:
    system("cls");
    car_det();
     break;
case 15:
    system("cls");
    menu();
     break;
default:
    system("cls");
    audi();
}
}
void a3(int prc)
{
    audilogo();
    prc=5000000;
    printf("\t\t\t[AUDI A3]\n\n\n");
    printf("\t\t\tENGINE: 1984CC\n\n");
    printf("\t\t\tMAX POWER: 228HP@5800RPM\n\n");
    printf("\t\t\tTORQUE: 380NM@1850RPM\n\n");
    printf("\t\t\tMILEAGE: 7.1-7.0LP100KM\n\n");
    printf("\t\t\tTOP SPEED: 250KMPH\n\n");
    printf("\t\t\tBODY TYPE: SEDAN\n\n");
    printf("\t\t\tPRICE: BDT%d\n\n\n",prc);
    downmenu();
}
void a4(int prc)
{
    audilogo();
    prc=7500000;
    printf("\t\t\t[AUDI A4]\n\n\n");
    printf("\t\t\tENGINE: 1984CC\n\n");
    printf("\t\t\tMAX POWER: 185HP@6000RPM\n\n");
    printf("\t\t\tTORQUE: 370NM@45000RPM\n\n");
    printf("\t\t\tMILEAGE: 6.3-5.9LP100KM\n\n");
    printf("\t\t\tTOP SPEED: 250KMPH\n\n");
    printf("\t\t\tBODY TYPE: SEDAN\n\n");
    printf("\t\t\tPRICE: BDT%d\n\n",prc);
    downmenu();
}
void a5(int prc)
{
    audilogo();
    prc=9500000;
    printf("\t\t\t[AUDI A5]\n\n\n");
    printf("\t\t\tENGINE: 1968CC\n\n");
    printf("\t\t\tMAX POWER: 140HP@4200RPM\n\n");
    printf("\t\t\tTORQUE: 400NM@3000RPM\n\n");
    printf("\t\t\tMILEAGE: 4.6-4.4LP100KM\n\n");
    printf("\t\t\tTOP SPEED: 235KMPH\n\n");
    printf("\t\t\tBODY TYPE: SEDAN\n\n");
    printf("\t\t\tPRICE: BDT%d\n\n",prc);
     downmenu();
}
void a6(int prc)
{
    audilogo();
    prc=10600000;
    printf("\t\t\t[AUDI A6]\n\n\n");
    printf("\t\t\tENGINE: 1968CC\n\n");
    printf("\t\t\tMAX POWER: 248HP@4300RPM\n\n");
    printf("\t\t\tTORQUE: 273NM@1600RPM\n\n");
    printf("\t\t\tMILEAGE: 26KMPL\n\n");
    printf("\t\t\tTOP SPEED: 155KMPH\n\n");
    printf("\t\t\tBODY TYPE: SEDAN\n\n");
    printf("\t\t\tPRICE: BDT%d\n\n",prc);
     downmenu();
}
void a8(int prc)
{
    audilogo();
    prc=21000000;
    printf("\t\t\t[AUDI A8]\n\n\n");
    printf("\t\t\tENGINE: 2995CC\n\n");
    printf("\t\t\tMAX POWER: 340HP@6400RPM\n\n");
    printf("\t\t\tTORQUE: 500NM@4500RPM\n\n");
    printf("\t\t\tMILEAGE: 8.0-7.7LP100KM\n\n");
    printf("\t\t\tTOP SPEED: 250KMPH\n\n");
    printf("\t\t\tBODY TYPE: SEDAN\n\n");
    printf("\t\t\tPRICE: BDT%d\n\n",prc);
     downmenu();
}
void rs3(int prc)
{
    audilogo();
    prc=5600000;
    printf("\t\t\t[AUDI RS3]\n\n\n");
    printf("\t\t\tENGINE: 2.5L TURBO INLINE-5 GAS\n\n");
    printf("\t\t\tMAX POWER: 400HP@6000RPM\n\n");
    printf("\t\t\tTORQUE: 368LBFT@2000RPM\n\n");
    printf("\t\t\tMILEAGE: 23MPG\n\n");
    printf("\t\t\tBODY TYPE: SEDAN\n\n");
    printf("\t\t\tPRICE: BDT%d\n\n",prc);
     downmenu();
}
void rs6(int prc)
{
    audilogo();
    prc=11300000;
    printf("\t\t\t[AUDI RS6]\n\n\n");
    printf("\t\t\tENGINE: 4.0L TWIN-TURBO V8 GAS\n\n");
    printf("\t\t\tMAX POWER: 591HP@6000RPM\n\n");
    printf("\t\t\tTORQUE: 590LBFT@2050RPM\n\n");
    printf("\t\t\tMILEAGE: 18MPG\n\n");
    printf("\t\t\tBODY TYPE: WAGON\n\n");
    printf("\t\t\tPRICE: BDT%d\n\n",prc);
     downmenu();
}
void q2(int prc)
{
    audilogo();
    prc=6600000;
    printf("\t\t\t[AUDI Q2]\n\n\n");
    printf("\t\t\tENGINE: 999CC\n\n");
    printf("\t\t\tMAX POWER: 116HP@5500RPM\n\n");
    printf("\t\t\tTORQUE: 300NM@3800RPM\n\n");
    printf("\t\t\tMILEAGE: 19.2KMPL\n\n");
    printf("\t\t\tTOP SPEED: 197KMPH\n\n");
    printf("\t\t\tBODY TYPE: SUV\n\n");
    printf("\t\t\tPRICE: BDT%d\n\n",prc);
     downmenu();
}
void q3(int prc)
{
    audilogo();
    prc=7500000;
    printf("\t\t\t[AUDI Q3]\n\n\n");
    printf("\t\t\tENGINE: 1498CC\n\n");
    printf("\t\t\tMAX POWER: 150HP@6000RPM\n\n");
    printf("\t\t\tTORQUE: 250NM@3500RPM\n\n");
    printf("\t\t\tMILEAGE: 4.8-5.1LP100KM\n\n");
    printf("\t\t\tTOP SPEED: 137MPH\n\n");
    printf("\t\t\tBODY TYPE: SUV\n\n");
    printf("\t\t\tPRICE: BDT%d\n\n",prc);
     downmenu();
}
void q5(int prc)
{
    audilogo();
    prc=12500000;
    printf("\t\t\t[AUDI Q5]\n\n\n");
    printf("\t\t\tENGINE: 1984CC\n\n");
    printf("\t\t\tMAX POWER: 185HP@6000RPM\n\n");
    printf("\t\t\tTORQUE: 370NM@4500RPM\n\n");
    printf("\t\t\tMILEAGE: 7.2-6.8LP100KM\n\n");
    printf("\t\t\tTOP SPEED: 237MPH\n\n");
    printf("\t\t\tBODY TYPE: SUV\n\n");
    printf("\t\t\tPRICE: BDT%d\n\n",prc);
     downmenu();
}
void q7(int prc)
{
    audilogo();
    prc=15800000;
    printf("\t\t\t[AUDI Q7]\n\n\n");
    printf("\t\t\tENGINE: 2967CC\n\n");
    printf("\t\t\tMAX POWER: 241.4BHP@4400RPM\n\n");
    printf("\t\t\tTORQUE: 550NM@2750RPM\n\n");
    printf("\t\t\tMILEAGE: 12.07KMPL\n\n");
    printf("\t\t\tTOP SPEED: 215KMPH\n\n");
    printf("\t\t\tBODY TYPE: SUV\n\n");
    printf("\t\t\tPRICE: BDT%d\n\n",prc);
     downmenu();
}
void q8(int prc)
{
    audilogo();
    prc=19900000;
    printf("\t\t\t[AUDI Q8]\n\n\n");
    printf("\t\t\tENGINE: 2995CC\n\n");
    printf("\t\t\tMAX POWER: 340BHP@64000RPM\n\n");
    printf("\t\t\tTORQUE: 500NM@4500RPM\n\n");
    printf("\t\t\tMILEAGE: 9.8KMPL\n\n");
    printf("\t\t\tTOP SPEED: 250KMPH\n\n");
    printf("\t\t\tBODY TYPE: SUV\n\n");
    printf("\t\t\tPRICE: BDT%d\n\n",prc);
     downmenu();
}
void r8(int prc)
{
    audilogo();
    prc=19900000;
    printf("\t\t\t[AUDI R8]\n\n\n");
    printf("\t\t\tENGINE: 5.2L V10 GAS\n\n");
    printf("\t\t\tMAX POWER: 602HP@8100RPM\n\n");
    printf("\t\t\tTORQUE: 413LBFT@6700RPM\n\n");
    printf("\t\t\tMILEAGE: 16MPG\n\n");
    printf("\t\t\tBODY TYPE: COUPE\n\n");
    printf("\t\t\tPRICE: BDT%d\n\n",prc);
     downmenu();
}

void audilogo(void)
{
printf("      ^?PGBBGY!.  .^JPBBBGY!.  .~JPBBBGY~.  .~YGBBBPJ~.     \n");
printf("   ^B@@#5?7?JG&@&B@&B5?7?YG&@##@&BY?7?YB&@##@&GY?7?5B@@#~   \n");
printf("  G@&!        .&@@@?       :@@@@!       ~@@@@^        ^#@#. \n");
printf(" #@P          &@Y:@@!     .@@7^@@^     :@@~!@@:         J@@.\n");
printf("~@@          J@&  7@&     P@B  Y@#     B@P  G@G          #@Y\n");
printf("!@&          Y@#  !@&     G@G  J@&     #@Y  P@B          B@5\n");
printf(" &@J         .@@! &@J     :@@^.@@7     ~@@::@@^         ~@@:\n");
printf(" .&@G.        :@@@@Y       ~@@@@?       7@@@@!        .5@@^ \n");
printf("   ?&@&5!^:^~?G@@&@#Y!^:^~JG@@@@BY!^:^!JB@@@@BJ~^:^!Y#@@Y   \n");
printf("     :?G#&&&&B5~. :JG#&&&&BY~  ^JB#&&&&BY^  ^YB&&&&#GJ^     \n\n\n");
}
void bmw(void)
{
    system("cls");
    bmwlogo();

printf("\t\t\t[1]\tBMW M2\n\n");
printf("\t\t\t[2]\tBMW M4\n\n");
printf("\t\t\t[3]\tBMW M5\n\n");
printf("\t\t\t[4]\tBMW X2\n\n");
printf("\t\t\t[5]\tBMW X3\n\n");
printf("\t\t\t[6]\tBMW X4\n\n");
printf("\t\t\t[7]\tBMW X5\n\n");
printf("\t\t\t[8]\tBMW X6\n\n");
printf("\t\t\t[9]\tBMW X7\n\n");
printf("\t\t\t[10]\tBACK\n\n");
printf("\t\t\t[11]\tBACK TO MENU\n\n");

int bmwopt,prc,optt;

printf("\n\n\t\t\tENTER OPTION: ");
scanf("%d", &bmwopt);

switch(bmwopt)
{
    case 1:
    system("cls");
    m2(prc);
    o:
    printf("\n\n\t\t\tENTER OPTION: ");
    scanf("%d", &optt);
    switch(optt)
    {
    case 2:
        system("cls");
        bmw();
        break;
    case 3:
        system("cls");
        menu();
        break;
    default:
        system("cls");
        m2(prc);
        goto o;
        }
    break;
    case 2:
    system("cls");
    m4(prc);
    o1:
    printf("\n\n\t\t\tENTER OPTION: ");
    scanf("%d", &optt);
    switch(optt)
    {
    case 2:
        system("cls");
        bmw();
        break;
    case 3:
        system("cls");
        menu();
        break;
    default:
        system("cls");
        m4(prc);
        goto o1;
        }
    break;
    case 3:
    system("cls");
    m5(prc);
    o2:
    printf("\n\n\t\t\tENTER OPTION: ");
    scanf("%d", &optt);
    switch(optt)
    {
    case 2:
        system("cls");
        bmw();
        break;
    case 3:
        system("cls");
        menu();
        break;
    default:
        system("cls");
        m5(prc);
        goto o2;
        }
    break;
    case 4:
    system("cls");
    x2(prc);
    o3:
    printf("\n\n\t\t\tENTER OPTION: ");
    scanf("%d", &optt);
    switch(optt)
    {
    case 2:
        system("cls");
        bmw();
        break;
    case 3:
        system("cls");
        menu();
        break;
    default:
        system("cls");
        x2(prc);
        goto o3;
        }
    break;
    case 5:
    system("cls");
    x3(prc);
    o4:
    printf("\n\n\t\t\tENTER OPTION: ");
    scanf("%d", &optt);
    switch(optt)
    {
    case 2:
        system("cls");
        bmw();
        break;
    case 3:
        system("cls");
        menu();
        break;
    default:
        system("cls");
        x3(prc);
        goto o4;
        }
    break;
    case 6:
    system("cls");
    x4(prc);
    o5:
    printf("\n\n\t\t\tENTER OPTION: ");
    scanf("%d", &optt);
    switch(optt)
    {
    case 2:
        system("cls");
        bmw();
        break;
    case 3:
        system("cls");
        menu();
        break;
    default:
        system("cls");
        x4(prc);
        goto o5;
        }
    break;
    case 7:
    system("cls");
    x5(prc);
    o6:
    printf("\n\n\t\t\tENTER OPTION: ");
    scanf("%d", &optt);
    switch(optt)
    {
    case 2:
        system("cls");
        bmw();
        break;
    case 3:
        system("cls");
        menu();
        break;
    default:
        system("cls");
        x5(prc);
        goto o6;
        }
    break;
    case 8:
    system("cls");
    x6(prc);
    o7:
    printf("\n\n\t\t\tENTER OPTION: ");
    scanf("%d", &optt);
    switch(optt)
    {
    case 2:
        system("cls");
        bmw();
        break;
    case 3:
        system("cls");
        menu();
        break;
    default:
        system("cls");
        x6(prc);
        goto o7;
        }
    break;
    case 9:
    system("cls");
    x7(prc);
    o8:
    printf("\n\n\t\t\tENTER OPTION: ");
    scanf("%d", &optt);
    switch(optt)
    {
    case 2:
        system("cls");
        bmw();
        break;
    case 3:
        system("cls");
        menu();
        break;
    default:
        system("cls");
        x7(prc);
        goto o8;
        }
    break;
    case 10:
    system("cls");
    car_det();
     break;
case 11:
    system("cls");
    menu();
     break;
default:
    system("cls");
    bmw();
}
}
void bmwlogo(void)
{
printf("         .!YB&PB@@&P&&BY!.         \n");
printf("      :Y&@@@@@^7B@J:&@@@@@&5:      \n");
printf("    ~5#@@@@@@@?@5J@Y@@@@@@@#&&~    \n");
printf("  .YJ#Y7PG@@@&BGGP^~?P&@@@J5BY@B.  \n");
printf(" ^@&57?&55#5J???J?     .J#&B7PB&@^ \n");
printf(".@@@@@BPGY?JJJJJJ?        P&&@@@@@.\n");
printf("B@@@@@@&JJJJJJJJJ?         G@@@@@@B\n");
printf("@@@@@@@PJJJJJJJJYJ         ^@@@@@@@\n");
printf("@@@@@@@^         JYJJJJJJJJP@@@@@@@\n");
printf("B@@@@@@P         ?JJJJJJJJJ&@@@@@@B\n");
printf(".@@@@@@@P        ?JJJJJJ?Y&@@@@@@@.\n");
printf(" ^@@@@@@@&J.     ?J???J5B@@@@@@@@^ \n");
printf("  .#@@@@@@@@&P?~^PGGB&@@@@@@@@@#.  \n");
printf("    ~#@@@@@@@@@@@@@@@@@@@@@@@#~    \n");
printf("      :Y&@@@@@@@@@@@@@@@@@&Y:      \n");
printf("         .!YB&@@@@@@@&BY!.         \n\n\n");
}
void m2(int prc)
{

}
void m4(int prc)
{

}
void m5(int prc)
{

}
void x2(int prc)
{

}
void x3(int prc)
{

}
void x4(int prc)
{

}
void x5(int prc)
{

}
void x6(int prc)
{

}
void x7(int prc)
{

}
void mbenz(void)
{
    system("cls");
printf("               .:^~~~~^:.               \n");
printf("          .~Y#&@@@@@@@@@@&#5~.          \n");
printf("       .7B@@@&BY7~^&&^~7YG&@@@#7.       \n");
printf("      Y@@@#7.     .@@.     .7B@@@Y.     \n");
printf("    ~&@@P:        7@@7        .P@@@!    \n");
printf("   J@@&:          B@@B          ^&@@J   \n");
printf("  7@@#.          .@@@@.          .&@@?  \n");
printf(" .@@@.           ~@@@@~           :@@@. \n");
printf(" 7@@G            G@@@@G            G@@? \n");
printf(" Y@@J         :Y&@@@@@@&5:         Y@@5 \n");
printf(" 7@@G      .?#@@@@@@@@@@@@#?.      G@@? \n");
printf(" .@@@.   ~B@@@@&GJ~..~JG&@@@@B~   .@@@. \n");
printf("  7@@#^5&@&G?^.          .^?G&@&5^#@@?  \n");
printf("   J@@@G:.                     :P@@@Y   \n");
printf("    ~@@@Y.                    .Y@@@!    \n");
printf("     .Y@@@G!.              .~G@@@Y.     \n");
printf("       .7#@@@&P?~^:..:^~?P&@@@#7.       \n");
printf("          .~5#@@@@@@@@@@@@#5!.          \n");
printf("               .:^~!!~^:.               \n\n\n");

printf("\t\t\t[1]\tMERCEDES BENZ C180\n\n");
printf("\t\t\t[2]\tMERCEDES BENZ C200\n\n");
printf("\t\t\t[3]\tMERCEDES BENZ GLS450\n\n");
printf("\t\t\t[4]\tMERCEDES BENZ GLE450\n\n");
printf("\t\t\t[5]\tMERCEDES BENZ CLA180\n\n");
printf("\t\t\t[6]\tMERCEDES BENZ CLS350\n\n");
printf("\t\t\t[7]\tBACK TO MENU\n\n");

int mbenzopt;

printf("\n\n\t\t\tENTER OPTION: ");
scanf("%d", &mbenzopt);
}
void rr(void)
{
    system("cls");
printf(" .::^^::^^::::           ::::         ^^:::       .:^:    .:::^^:::^^:      :^^:::^^::^^^  \n");
printf(" &@@&&&&&&&&@@#:       .P@@@@G.       &@@@@#?.    J@@G   .&@@&&&&&&&&@&!   :@@@&&&&&&&&&&: \n");
printf(".&@@?!~~!!~~B@@P      ~&@@J:B@&7      &@@7Y&@@G~. ?@@G   7@@5 .^!~~!7GBY   .@@@YJYYYJJY7.  \n");
printf(" &@@&&&&&&@@@@5.    .P@@@#YJ5@@@B.    &@@:  ~B@@&YP@@G   !@@?  !#BBB#@@B   :@@@BGGGGGGBJ   \n");
printf(".&@@:     ~B@@5.   !&@@PYYYY5YJ#@@?   &@@:    .J&@@@@B   :@@&GGGGGGG#@@P   .@@@BBBGBBBBBB. \n");
printf(" ?J?        !?J!  .?JJ^        .7JJ^  7JJ.       ^JJJ~    .!JYJJJYYJJJ~    .???YYJJJYYJJJ. \n");
printf("                                                                                           \n");
printf(" 7?JYYJJYYYJJ7:     :7JYYJJJYYJJ?^   :YJ?.        :JJY:   ?J?JYYJJJYYYY.    JJJJJYYYJJYJ7. \n");
printf(" @@@GPPPPPPP&@@7   :@@@BBBBBBBB#@@5   ?@@&~      Y@@@7    &@@#GGGGGGGGB:   :@@@GPPPPPPP&@@~\n");
printf(".&@@PYYYY5YJ#@@5   !@@#        :@@#    .G@@P.  ^#@@G.    .&@@BGGGGGGB5     .@@@5YY5YYJY&@@?\n");
printf(" &@@GPPPPP&@@@!    ~@@&. ......!@@#      7&@&~J@@&7       &@@PJJYYYJJ?.    :@@@GPPPPG@@@&! \n");
printf(".&@@.     .J&@#~   .#@@&&&&&&&&@@@5       .G@@@@G.       .&@@&&&&&&&&&@^   .@@&      .5@@B:\n");
printf(" :^:        .:::     :^::^^^::^^:.          :^^:          .:^^:::^^::^^.    :::        .:^^\n\n\n");

printf("\t\t\t[1]\tRANGE ROVER AUTOBIOGRAPHY\n\n");
printf("\t\t\t[2]\tRANGE ROVER VELAR\n\n");
printf("\t\t\t[3]\tRANGE ROVER EVOQUE\n\n");
printf("\t\t\t[4]\tRANGE ROVER SPORT\n\n");
printf("\t\t\t[5]\tBACK TO MENU\n\n");

int rropt;

printf("\n\n\t\t\tENTER OPTION: ");
scanf("%d", &rropt);
}
void honda(void)
{
    system("cls");
printf("         ....::::::^^:::::....          \n");
printf("   ~YPPPP5YJ???77!!!!!!!77??JY55PPPY^   \n");
printf(" 7@&7.  B&#                  #&B  .7&@! \n");
printf("J@B     &@@7                7@@&     #@7\n");
printf("@@.     G@@&                &@@G     ^@&\n");
printf("@@      Y@@@!              !@@@Y     .@@\n");
printf("@@      7@@@&              &@@@7     .@@\n");
printf("@@      ^@@@@7            ?@@@@^     .@@\n");
printf("@@      .@@@@@.          .@@@@@.     .@#\n");
printf("&@:      @@@@@&:        :&@@@@@      :@P\n");
printf("5@7      #@@@@@@&BGPPGB&@@@@@@&      ?@!\n");
printf("^@B      G@@@@@@&P5555P&@@@@@@B      #@.\n");
printf(" #@.     J@@@@@J        J@@@@@5     :@P \n");
printf(" ^@#     !@@@@#          B@@@@7     &@. \n");
printf("  ~@&?.  .@@@@:          .@@@@.  :J@&:  \n");
printf("    ^YGGP5PPP5??777!!777??5PPP5PGGJ:    \n");
printf("         ....:::^^^^^^^^::.....         \n\n\n");

printf("\t\t\t[1]\tHONDA CIVIC 10TH GEN\n\n");
printf("\t\t\t[2]\tHONDA CIVIC 11TH GEN\n\n");
printf("\t\t\t[3]\tHONDA ACCORD\n\n");
printf("\t\t\t[4]\tHONDA INSIGHT\n\n");
printf("\t\t\t[5]\tHONDA VEZEL\n\n");
printf("\t\t\t[6]\tBACK TO MENU\n\n");

int hondaopt;

printf("\n\n\t\t\tENTER OPTION: ");
scanf("%d", &hondaopt);
}
void hyundai(void)
{
    system("cls");
printf("                    ....                     \n");
printf("          .:!JPB#&&@@@@@@@&&#BPJ!:.          \n");
printf("      .~P&@@@&G&@@@P::^^^^~7J5G#@@@#5~.      \n");
printf("    ~B@@&P!.  5@@@B           .7&@@@@@@G^    \n");
printf("  .#@@G^     B@@@@.        :?#@@@@@@::G@@B.  \n");
printf(" .@@@~     .&@@@@@7...:~JG&@@@@@@@@~   ~@@@. \n");
printf(" ?@@B     .&@@@@@@@@@@@@@@@@@@@@@@?     B@@7 \n");
printf(" :@@@.    #@@@@@@@@@&GY??5&@@@@@@Y     :@@@: \n");
printf("  ^&@@?  G@@@@@@B?^.      ^@@@@@Y    .J@@&^  \n");
printf("    ?&@@#@@@&Y:           ?@@@@!  :?B@@&?    \n");
printf("      :J#@@@#Y7~^...     :@@@@BP&@@@#J:      \n");
printf("          .~JG#&&&&&&&&&&@@@&&#GY!:          \n");
printf("                 ..::::::...                 \n\n\n");

printf("\t\t\t[1]\tHYUNDAI TUCSON\n\n");
printf("\t\t\t[2]\tHYUNDAI ELANTRA\n\n");
printf("\t\t\t[3]\tHYUNDAI SONATA\n\n");
printf("\t\t\t[4]\tBACK TO MENU\n\n");

int hyundaiopt;

printf("\n\n\t\t\tENTER OPTION: ");
scanf("%d", &hyundaiopt);
}
void mazda(void)
{
    system("cls");
printf("           .^!7?JY5555YYJ7!^.           \n");
printf("      .~5#@@@&#GP5YJJJY5G#&@@@#5!.      \n");
printf("    .P@@@@P~.              .^5@@@@P.    \n");
printf("   ?@@@@7                      !@@@@?   \n");
printf("  J@@@@@P!:                 .:7P@@@@@J  \n");
printf(" :@@@@@@@@@@#P!.        .7P#@@@@@@@@@@: \n");
printf(" Y@@@&^JG&@@@@@@#!    7#@@@@@&BP?^&@@@Y \n");
printf(" P@@@#     .^7P&@@#::#@@&P!:.     G@@@G \n");
printf(" ?@@@&          ^B@@@@B^          &@@@J \n");
printf(" .@@@@7           !@@?           !@@@@. \n");
printf("  !@@@@^           ~7           ^@@@@!  \n");
printf("   ~&@@@J.                    .J@@@&~   \n");
printf("     ?&@@@G!:             .:7G@@@&?     \n");
printf("       :?G&@@@&&#BBBBBB#&&@@@&G7:       \n");
printf("           .:^!7JYY555YJ7~^.            \n");

printf("\t\t\t[1]\tMAZDA MX5\n\n");
printf("\t\t\t[2]\tMAZDA AXELA\n\n");
printf("\t\t\t[3]\tBACK TO MENU\n\n");

int mazdaopt;

printf("\n\n\t\t\tENTER OPTION: ");
scanf("%d", &mazdaopt);
}
void downmenu(void)
{
    printf("\t\t\t[1]\tPURCHASE\n\n");
    printf("\t\t\t[2]\tBACK\n\n");
    printf("\t\t\t[3]\tBACK TO MENU\n\n");
}
