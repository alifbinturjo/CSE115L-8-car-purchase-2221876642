#include <stdio.h>
#include <stdlib.h>
#include<dos.h>
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
void m3(int prc);
void m5(int prc);
void x2(int prc);
void x3(int prc);
void x4(int prc);
void x5(int prc);
void x6(int prc);
void x7(int prc);
void bmwlogo(void);
void mbenz(void);
void c180(int prc);
void c200(int prc);
void gls450(int prc);
void gle450(int prc);
void cla180(int prc);
void cls350(int prc);
void mbenzlogo(void);
void rr(void);
void rrauto(int prc);
void rrvelar(int prc);
void rrevoque(int prc);
void rrsport(int prc);
void rrlogo(void);
void honda(void);
void civic10(int prc);
void civic11(int prc);
void accord(int prc);
void insight(int prc);
void vezel(int prc);
void hondalogo(void);
void hyundai(void);
void tucson(int prc);
void elantra(int prc);
void sonata(int prc);
void hyundailogo(void);
void mazda(void);
void mx5(int prc);
void axela(int prc);
void mazdalogo(void);
void purchase(int prc);
void tax(void);

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
        downmenu();
    printf("\n\n\t\t\tENTER OPTION: ");
    scanf("%d", &optt);
    switch(optt)
    {
    case 1:
        prc=5000000;
        purchase(prc);
        break;
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
        downmenu();
    printf("\n\n\t\t\tENTER OPTION: ");
    scanf("%d", &optt);
    switch(optt)
    {
        case 1:
        prc=7500000;
        purchase(prc);
        break;
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
        downmenu();
    printf("\n\n\t\t\tENTER OPTION: ");
    scanf("%d", &optt);
    switch(optt)
    {
        case 1:
        prc=9500000;
        purchase(prc);
        break;
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
        downmenu();
    printf("\n\n\t\t\tENTER OPTION: ");
    scanf("%d", &optt);
    switch(optt)
    {
        case 1:
        prc=10600000;
        purchase(prc);
        break;
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
        downmenu();
    printf("\n\n\t\t\tENTER OPTION: ");
    scanf("%d", &optt);
    switch(optt)
    {
        case 1:
        prc=21000000;
        purchase(prc);
        break;
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
        downmenu();
    printf("\n\n\t\t\tENTER OPTION: ");
    scanf("%d", &optt);
    switch(optt)
    {
        case 1:
        prc=5600000;
        purchase(prc);
        break;
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
        downmenu();
    printf("\n\n\t\t\tENTER OPTION: ");
    scanf("%d", &optt);
    switch(optt)
    {
        case 1:
        prc=11300000;
        purchase(prc);
        break;
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
        downmenu();
    printf("\n\n\t\t\tENTER OPTION: ");
    scanf("%d", &optt);
    switch(optt)
    {
        case 1:
        prc=6600000;
        purchase(prc);
        break;
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
        downmenu();
    printf("\n\n\t\t\tENTER OPTION: ");
    scanf("%d", &optt);
    switch(optt)
    {
        case 1:
        prc=7500000;
        purchase(prc);
        break;
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
        downmenu();
    printf("\n\n\t\t\tENTER OPTION: ");
    scanf("%d", &optt);
    switch(optt)
    {
        case 1:
        prc=12500000;
        purchase(prc);
        break;
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
        downmenu();
    printf("\n\n\t\t\tENTER OPTION: ");
    scanf("%d", &optt);
    switch(optt)
    {
        case 1:
        prc=15800000;
        purchase(prc);
        break;
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
        downmenu();
    printf("\n\n\t\t\tENTER OPTION: ");
    scanf("%d", &optt);
    switch(optt)
    {
        case 1:
        prc=19900000;
        purchase(prc);
        break;
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
        downmenu();
    printf("\n\n\t\t\tENTER OPTION: ");
    scanf("%d", &optt);
    switch(optt)
    {
        case 1:
        prc=19900000;
        purchase(prc);
        break;
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
printf("\t\t\t[2]\tBMW M3\n\n");
printf("\t\t\t[3]\tBMW M5\n\n");
printf("\t\t\t[4]\tBMW X2\n\n");
printf("\t\t\t[5]\tBMW X3\n\n");
printf("\t\t\t[6]\tBMW X5\n\n");
printf("\t\t\t[7]\tBMW X7\n\n");
printf("\t\t\t[8]\tBACK\n\n");
printf("\t\t\t[9]\tBACK TO MENU\n\n");

int bmwopt,prc,optt;

printf("\n\n\t\t\tENTER OPTION: ");
scanf("%d", &bmwopt);

switch(bmwopt)
{
    case 1:
    system("cls");
    m2(prc);
    o:
        downmenu();
    printf("\n\n\t\t\tENTER OPTION: ");
    scanf("%d", &optt);
    switch(optt)
    {
        case 1:
        prc=5700000;
        purchase(prc);
        break;
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
    m3(prc);
    o1:
        downmenu();
    printf("\n\n\t\t\tENTER OPTION: ");
    scanf("%d", &optt);
    switch(optt)
    {
        case 1:
        prc=16200000;
        purchase(prc);
        break;
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
        m3(prc);
        goto o1;
        }
    break;
    case 3:
    system("cls");
    m5(prc);
    o2:
        downmenu();
    printf("\n\n\t\t\tENTER OPTION: ");
    scanf("%d", &optt);
    switch(optt)
    {
        case 1:
        prc=12000000;
        purchase(prc);
        break;
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
        downmenu();
    printf("\n\n\t\t\tENTER OPTION: ");
    scanf("%d", &optt);
    switch(optt)
    {
        case 1:
        prc=8500000;
        purchase(prc);
        break;
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
        downmenu();
    printf("\n\n\t\t\tENTER OPTION: ");
    scanf("%d", &optt);
    switch(optt)
    {
        case 1:
        prc=13500000;
        purchase(prc);
        break;
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
    x5(prc);
    o5:
        downmenu();
    printf("\n\n\t\t\tENTER OPTION: ");
    scanf("%d", &optt);
    switch(optt)
    {
        case 1:
        prc=19800000;
        purchase(prc);
        break;
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
        goto o5;
        }
    break;
    case 7:
    system("cls");
    x7(prc);
    o6:
        downmenu();
    printf("\n\n\t\t\tENTER OPTION: ");
    scanf("%d", &optt);
    switch(optt)
    {
        case 1:
        prc=25000000;
        purchase(prc);
        break;
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
        goto o6;
        }
    break;
    case 8:
    system("cls");
    car_det();
     break;
case 9:
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
bmwlogo();
    prc=5700000;
    printf("\t\t\t[BMW M2]\n\n\n");
    printf("\t\t\tENGINE: 3.0L TWIN-TURBO INLINE-6 GAS\n\n");
    printf("\t\t\tMAX POWER: 420HP\n\n");
    printf("\t\t\tTORQUE: 406LBFT@2350RPM\n\n");
    printf("\t\t\tMILEAGE: 21MPG\n\n");
    printf("\t\t\tBODY TYPE: COUPE\n\n");
    printf("\t\t\tPRICE: BDT%d\n\n\n",prc);

}
void m3(int prc)
{
bmwlogo();
    prc=16200000;
    printf("\t\t\t[BMW M3]\n\n\n");
    printf("\t\t\tENGINE: 3.0L TWIN-TURBO INLINE-6 GAS\n\n");
    printf("\t\t\tMAX POWER: 540HP\n\n");
    printf("\t\t\tTORQUE: 479LBFT@2750RPM\n\n");
    printf("\t\t\tMILEAGE: 20MPG\n\n");
    printf("\t\t\tBODY TYPE: HATCHBACK\n\n");
    printf("\t\t\tPRICE: BDT%d\n\n\n",prc);

}
void m5(int prc)
{
bmwlogo();
    prc=12000000;
    printf("\t\t\t[BMW M2]\n\n\n");
    printf("\t\t\tENGINE: 4.4L TWIN-TURBO V8 GAS\n\n");
    printf("\t\t\tMAX POWER: 627HP@6000RPM\n\n");
    printf("\t\t\tTORQUE: 553LBFT@1800RPM\n\n");
    printf("\t\t\tMILEAGE: 18MPG\n\n");
    printf("\t\t\tBODY TYPE: SEDAN\n\n");
    printf("\t\t\tPRICE: BDT%d\n\n\n",prc);

}
void x2(int prc)
{
bmwlogo();
    prc=8500000;
    printf("\t\t\t[BMW X2]\n\n\n");
    printf("\t\t\tENGINE: 1998CC\n\n");
    printf("\t\t\tMAX POWER: 228HP@5000RPM\n\n");
    printf("\t\t\tTORQUE: 258LBFT@1450RPM\n\n");
    printf("\t\t\tMILEAGE: 5.2-5.1LP100KM\n\n");
    printf("\t\t\tTOP SPEED: 143MPH\n\n");
    printf("\t\t\tBODY TYPE: SUV\n\n");
    printf("\t\t\tPRICE: BDT%d\n\n\n",prc);

}
void x3(int prc)
{
bmwlogo();
    prc=13500000;
    printf("\t\t\t[BMW X3]\n\n\n");
    printf("\t\t\tENGINE: 1998CC\n\n");
    printf("\t\t\tMAX POWER: 252HP@5200RPM\n\n");
    printf("\t\t\tTORQUE: 300LBFT@4000RPM\n\n");
    printf("\t\t\tMILEAGE: 8.2-8.1LP100KM\n\n");
    printf("\t\t\tTOP SPEED: 215KMPH\n\n");
    printf("\t\t\tBODY TYPE: SUV\n\n");
    printf("\t\t\tPRICE: BDT%d\n\n\n",prc);

}
void x5(int prc)
{
bmwlogo();
    prc=19800000;
    printf("\t\t\t[BMW X5]\n\n\n");
    printf("\t\t\tENGINE: 2993CC\n\n");
    printf("\t\t\tMAX POWER: 210HP@6000RPM\n\n");
    printf("\t\t\tTORQUE: 450LBFT@3500RPM\n\n");
    printf("\t\t\tMILEAGE: 2.5LP100KM\n\n");
    printf("\t\t\tTOP SPEED: 235KMPH\n\n");
    printf("\t\t\tBODY TYPE: SUV\n\n");
    printf("\t\t\tPRICE: BDT%d\n\n\n",prc);

}
void x7(int prc)
{
bmwlogo();
    prc=25000000;
    printf("\t\t\t[BMW X7]\n\n\n");
    printf("\t\t\tENGINE: 2993CC\n\n");
    printf("\t\t\tMAX POWER: 250HP@6500RPM\n\n");
    printf("\t\t\tTORQUE: 450LBFT@5200RPM\n\n");
    printf("\t\t\tMILEAGE: 9.5LP100KM\n\n");
    printf("\t\t\tTOP SPEED: 245KMPH\n\n");
    printf("\t\t\tBODY TYPE: SUV\n\n");
    printf("\t\t\tPRICE: BDT%d\n\n\n",prc);

}
void mbenz(void)
{
    system("cls");
    mbenzlogo();

printf("\t\t\t[1]\tMERCEDES BENZ C180\n\n");
printf("\t\t\t[2]\tMERCEDES BENZ C200\n\n");
printf("\t\t\t[3]\tMERCEDES BENZ GLS450\n\n");
printf("\t\t\t[4]\tMERCEDES BENZ GLE450\n\n");
printf("\t\t\t[5]\tMERCEDES BENZ CLA180\n\n");
printf("\t\t\t[6]\tMERCEDES BENZ CLS350\n\n");
printf("\t\t\t[7]\tBACK\n\n");
printf("\t\t\t[8]\tBACK TO MENU\n\n");

int mbenzopt,prc,optt;

printf("\n\n\t\t\tENTER OPTION: ");
scanf("%d", &mbenzopt);

switch(mbenzopt)
{
    case 1:
    system("cls");
    c180(prc);
    o:
        downmenu();
    printf("\n\n\t\t\tENTER OPTION: ");
    scanf("%d", &optt);
    switch(optt)
    {
        case 1:
        prc=9000000;
        purchase(prc);
        break;
    case 2:
        system("cls");
        mbenz();
        break;
    case 3:
        system("cls");
        menu();
        break;
    default:
        system("cls");
        c180(prc);
        goto o;
        }
    break;
    case 2:
    system("cls");
    c200(prc);
    o1:
        downmenu();
    printf("\n\n\t\t\tENTER OPTION: ");
    scanf("%d", &optt);
    switch(optt)
    {
        case 1:
        prc=9800000;
        purchase(prc);
        break;
    case 2:
        system("cls");
        mbenz();
        break;
    case 3:
        system("cls");
        menu();
        break;
    default:
        system("cls");
        c200(prc);
        goto o1;
        }
    break;
    case 3:
    system("cls");
    gls450(prc);
    o2:
        downmenu();
    printf("\n\n\t\t\tENTER OPTION: ");
    scanf("%d", &optt);
    switch(optt)
    {
        case 1:
        prc=23000000;
        purchase(prc);
        break;
    case 2:
        system("cls");
        mbenz();
        break;
    case 3:
        system("cls");
        menu();
        break;
    default:
        system("cls");
        gls450(prc);
        goto o2;
        }
    break;
    case 4:
    system("cls");
    gle450(prc);
    o3:
        downmenu();
    printf("\n\n\t\t\tENTER OPTION: ");
    scanf("%d", &optt);
    switch(optt)
    {
        case 1:
        prc=19000000;
        purchase(prc);
        break;
    case 2:
        system("cls");
        mbenz();
        break;
    case 3:
        system("cls");
        menu();
        break;
    default:
        system("cls");
        gle450(prc);
        goto o3;
        }
    break;
    case 5:
    system("cls");
    cla180(prc);
    o4:
        downmenu();
    printf("\n\n\t\t\tENTER OPTION: ");
    scanf("%d", &optt);
    switch(optt)
    {
        case 1:
        prc=8200000;
        purchase(prc);
        break;
    case 2:
        system("cls");
        mbenz();
        break;
    case 3:
        system("cls");
        menu();
        break;
    default:
        system("cls");
        cla180(prc);
        goto o4;
        }
    break;
    case 6:
    system("cls");
    cls350(prc);
    o5:
        downmenu();
    printf("\n\n\t\t\tENTER OPTION: ");
    scanf("%d", &optt);
    switch(optt)
    {
        case 1:
        prc=18000000;
        purchase(prc);
        break;
    case 2:
        system("cls");
        mbenz();
        break;
    case 3:
        system("cls");
        menu();
        break;
    default:
        system("cls");
        cls350(prc);
        goto o5;
        }
    break;
    case 7:
    system("cls");
    car_det();
     break;
case 8:
    system("cls");
    menu();
     break;
default:
    system("cls");
    mbenz();
}
}
void c180(int prc)
{
   mbenzlogo();
    prc=9000000;
    printf("\t\t\t[MERCEDES BENZ C180]\n\n\n");
    printf("\t\t\tENGINE: 1595CC\n\n");
    printf("\t\t\tMAX POWER: 156BHP@5300RPM\n\n");
    printf("\t\t\tTORQUE: 250NM@1200RPM\n\n");
    printf("\t\t\tMILEAGE: 5.5-5.0LP100KM\n\n");
    printf("\t\t\tTOP SPEED: 225KMPH\n\n");
    printf("\t\t\tBODY TYPE: SEDAN\n\n");
    printf("\t\t\tPRICE: BDT%d\n\n\n",prc);

}
void c200(int prc)
{
    mbenzlogo();
    prc=9800000;
    printf("\t\t\t[MERCEDES BENZ C200]\n\n\n");
    printf("\t\t\tENGINE: 1991CC\n\n");
    printf("\t\t\tMAX POWER: 135BHP@5500RPM\n\n");
    printf("\t\t\tMILEAGE: 5.9-5.3LP100KM\n\n");
    printf("\t\t\tTOP SPEED: 225KMPH\n\n");
    printf("\t\t\tBODY TYPE: SEDAN\n\n");
    printf("\t\t\tPRICE: BDT%d\n\n\n",prc);

}
void gls450(int prc)
{
    mbenzlogo();
    prc=23000000;
    printf("\t\t\t[MERCEDES BENZ GLS450]\n\n\n");
    printf("\t\t\tENGINE: 2999CC\n\n");
    printf("\t\t\tMAX POWER: 362HP@6100RPM\n\n");
    printf("\t\t\tTORQUE: 369LBFT@4500RPM\n\n");
    printf("\t\t\tMILEAGE: 22MPG\n\n");
    printf("\t\t\tTOP SPEED: 246KMPH\n\n");
    printf("\t\t\tBODY TYPE: SUV\n\n");
    printf("\t\t\tPRICE: BDT%d\n\n\n",prc);

}
void gle450(int prc)
{
    mbenzlogo();
    prc=19000000;
    printf("\t\t\t[MERCEDES BENZ GLE450]\n\n\n");
    printf("\t\t\tENGINE: 2999CC\n\n");
    printf("\t\t\tMAX POWER: 362BHP@6100RPM\n\n");
    printf("\t\t\tTORQUE: 369LBFT@4500RPM\n\n");
    printf("\t\t\tMILEAGE: 11.11KMPL\n\n");
    printf("\t\t\tTOP SPEED: 250KMPH\n\n");
    printf("\t\t\tBODY TYPE: SUV\n\n");
    printf("\t\t\tPRICE: BDT%d\n\n\n",prc);

}
void cla180(int prc)
{
  mbenzlogo();
    prc=8200000;
    printf("\t\t\t[MERCEDES BENZ CLA180]\n\n\n");
    printf("\t\t\tENGINE: 1595CC\n\n");
    printf("\t\t\tMAX POWER: 122HP@5000RPM\n\n");
    printf("\t\t\tTORQUE: 200NM@4000RPM\n\n");
    printf("\t\t\tMILEAGE: 5.6-5.2LP100KM\n\n");
    printf("\t\t\tTOP SPEED: 210KMPH\n\n");
    printf("\t\t\tBODY TYPE: SEDAN\n\n");
    printf("\t\t\tPRICE: BDT%d\n\n\n",prc);

}
void cls350(int prc)
{
    mbenzlogo();
    prc=18000000;
    printf("\t\t\t[MERCEDES BENZ CLS350]\n\n\n");
    printf("\t\t\tENGINE: 3498CC\n\n");
    printf("\t\t\tMAX POWER: 306BHP@6500RPM\n\n");
    printf("\t\t\tTORQUE: 370NM@5250RPM\n\n");
    printf("\t\t\tMILEAGE: 9.26KMPL\n\n");
    printf("\t\t\tTOP SPEED: 250KMPH\n\n");
    printf("\t\t\tBODY TYPE: SEDAN\n\n");
    printf("\t\t\tPRICE: BDT%d\n\n\n",prc);

}
void mbenzlogo(void)
{
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
}
void rr(void)
{
    system("cls");
rrlogo();

printf("\t\t\t[1]\tRANGE ROVER AUTOBIOGRAPHY\n\n");
printf("\t\t\t[2]\tRANGE ROVER VELAR\n\n");
printf("\t\t\t[3]\tRANGE ROVER EVOQUE\n\n");
printf("\t\t\t[4]\tRANGE ROVER SPORT\n\n");
printf("\t\t\t[5]\tBACK\n\n");
printf("\t\t\t[6]\tBACK TO MENU\n\n");

int rropt,prc,optt;

printf("\n\n\t\t\tENTER OPTION: ");
scanf("%d", &rropt);

switch(rropt)
{
    case 1:
    system("cls");
    rrauto(prc);
    o:
        downmenu();
    printf("\n\n\t\t\tENTER OPTION: ");
    scanf("%d", &optt);
    switch(optt)
    {
        case 1:
        prc=14000000;
        purchase(prc);
        break;
    case 2:
        system("cls");
        rr();
        break;
    case 3:
        system("cls");
        menu();
        break;
    default:
        system("cls");
        rrauto(prc);
        goto o;
        }
    break;
    case 2:
    system("cls");
    rrvelar(prc);
    o1:
        downmenu();
    printf("\n\n\t\t\tENTER OPTION: ");
    scanf("%d", &optt);
    switch(optt)
    {
        case 1:
        prc=6400000;
        purchase(prc);
        break;
    case 2:
        system("cls");
        rr();
        break;
    case 3:
        system("cls");
        menu();
        break;
    default:
        system("cls");
        rrvelar(prc);
        goto o1;
        }
    break;
    case 3:
    system("cls");
    rrevoque(prc);
    o2:
        downmenu();
    printf("\n\n\t\t\tENTER OPTION: ");
    scanf("%d", &optt);
    switch(optt)
    {
        case 1:
        prc=7200000;
        purchase(prc);
        break;
    case 2:
        system("cls");
        rr();
        break;
    case 3:
        system("cls");
        menu();
        break;
    default:
        system("cls");
        rrevoque(prc);
        goto o2;
        }
    break;
    case 4:
    system("cls");
    rrsport(prc);
    o3:
        downmenu();
    printf("\n\n\t\t\tENTER OPTION: ");
    scanf("%d", &optt);
    switch(optt)
    {
        case 1:
        prc=8600000;
        purchase(prc);
        break;
    case 2:
        system("cls");
        rr();
        break;
    case 3:
        system("cls");
        menu();
        break;
    default:
        system("cls");
        rrsport(prc);
        goto o3;
        }
    break;
    case 5:
    system("cls");
    car_det();
     break;
case 6:
    system("cls");
    menu();
     break;
default:
    system("cls");
    rr();
}
}
void rrauto(int prc)
{
     rrlogo();
    prc=14000000;
    printf("\t\t\t[RANGE ROVER AUTOBIOGRAPHY]\n\n\n");
    printf("\t\t\tENGINE: 5.0L SUPERCHARGED V8 GAS\n\n");
    printf("\t\t\tMAX POWER: 518HP@6000RPM\n\n");
    printf("\t\t\tTORQUE: 461LBFT@2500RPM\n\n");
    printf("\t\t\tMILEAGE: 14MPG\n\n");
    printf("\t\t\tBODY TYPE: SUV\n\n");
    printf("\t\t\tPRICE: BDT%d\n\n\n",prc);

}
void rrvelar(int prc)
{
     rrlogo();
    prc=6400000;
    printf("\t\t\tRANGE ROVER VELAR]\n\n\n");
    printf("\t\t\tENGINE: 3.0L TURBO INLINE-6 GAS\n\n");
    printf("\t\t\tMAX POWER: 335HP@6500RPM\n\n");
    printf("\t\t\tTORQUE: 354LBFT@1500RPM\n\n");
    printf("\t\t\tMILEAGE: 23MPG\n\n");
    printf("\t\t\tBODY TYPE: SUV\n\n");
    printf("\t\t\tPRICE: BDT%d\n\n\n",prc);

}
void rrevoque(int prc)
{
    rrlogo();
    prc=7200000;
    printf("\t\t\t[RANGE ROVER EVOQUE]\n\n\n");
    printf("\t\t\tENGINE: 2.0L TURBO INLINE-4 GAS\n\n");
    printf("\t\t\tMAX POWER: 246HP@5500RPM\n\n");
    printf("\t\t\tTORQUE: 269LBFT@1400RPM\n\n");
    printf("\t\t\tMILEAGE: 24MPG\n\n");
    printf("\t\t\tTOP SPEED: 213KMPH\n\n");
    printf("\t\t\tBODY TYPE: SUV\n\n");
    printf("\t\t\tPRICE: BDT%d\n\n\n",prc);

}
void rrsport(int prc)
{
     rrlogo();
    prc=8600000;
    printf("\t\t\t[RANGE ROVER SPORT]\n\n\n");
    printf("\t\t\tENGINE: 3.0L TURBO INLINE-6 GAS\n\n");
    printf("\t\t\tMAX POWER: 395HP@5500RPM\n\n");
    printf("\t\t\tTORQUE: 406LBFT@2000RPM\n\n");
    printf("\t\t\tMILEAGE: 22MPG\n\n");
    printf("\t\t\tBODY TYPE: SUV\n\n");
    printf("\t\t\tPRICE: BDT%d\n\n\n",prc);

}
void rrlogo(void)
{
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
}
void honda(void)
{
    system("cls");
hondalogo();

printf("\t\t\t[1]\tHONDA CIVIC 10TH GEN\n\n");
printf("\t\t\t[2]\tHONDA CIVIC 11TH GEN\n\n");
printf("\t\t\t[3]\tHONDA ACCORD\n\n");
printf("\t\t\t[4]\tHONDA INSIGHT\n\n");
printf("\t\t\t[5]\tHONDA VEZEL\n\n");
printf("\t\t\t[6]\tBACK\n\n");
printf("\t\t\t[7]\tBACK TO MENU\n\n");

int hondaopt,prc,optt;

printf("\n\n\t\t\tENTER OPTION: ");
scanf("%d", &hondaopt);

switch(hondaopt)
{
    case 1:
    system("cls");
    civic10(prc);
    o:
        downmenu();
    printf("\n\n\t\t\tENTER OPTION: ");
    scanf("%d", &optt);
    switch(optt)
    {
        case 1:
        prc=4000000;
        purchase(prc);
        break;
    case 2:
        system("cls");
        honda();
        break;
    case 3:
        system("cls");
        menu();
        break;
    default:
        system("cls");
        civic10(prc);
        goto o;
        }
    break;
    case 2:
    system("cls");
    civic11(prc);
    o1:
        downmenu();
    printf("\n\n\t\t\tENTER OPTION: ");
    scanf("%d", &optt);
    switch(optt)
    {
        case 1:
        prc=4600000;
        purchase(prc);
        break;
    case 2:
        system("cls");
        honda();
        break;
    case 3:
        system("cls");
        menu();
        break;
    default:
        system("cls");
        civic11(prc);
        goto o1;
        }
    break;
    case 3:
    system("cls");
    accord(prc);
    o2:
        downmenu();
    printf("\n\n\t\t\tENTER OPTION: ");
    scanf("%d", &optt);
    switch(optt)
    {
        case 1:
        prc=5500000;
        purchase(prc);
        break;
    case 2:
        system("cls");
        honda();
        break;
    case 3:
        system("cls");
        menu();
        break;
    default:
        system("cls");
        accord(prc);
        goto o2;
        }
    break;
    case 4:
    system("cls");
    insight(prc);
    o3:
        downmenu();
    printf("\n\n\t\t\tENTER OPTION: ");
    scanf("%d", &optt);
    switch(optt)
    {
        case 1:
        prc=4200000;
        purchase(prc);
        break;
    case 2:
        system("cls");
        honda();
        break;
    case 3:
        system("cls");
        menu();
        break;
    default:
        system("cls");
        insight(prc);
        goto o3;
        }
    break;
    case 5:
    system("cls");
    vezel(prc);
    o4:
        downmenu();
    printf("\n\n\t\t\tENTER OPTION: ");
    scanf("%d", &optt);
    switch(optt)
    {
        case 1:
        prc=2500000;
        purchase(prc);
        break;
    case 2:
        system("cls");
        honda();
        break;
    case 3:
        system("cls");
        menu();
        break;
    default:
        system("cls");
        vezel(prc);
        goto o4;
        }
    break;
    case 6:
    system("cls");
    car_det();
     break;
case 7:
    system("cls");
    menu();
     break;
default:
    system("cls");
    honda();
}
}
void hondalogo(void)
{
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
}
void civic10(int prc)
{
    hondalogo();
    prc=4000000;
    printf("\t\t\t[HONDA COVIC 10TH GEN]\n\n\n");
    printf("\t\t\tENGINE: 1498CC\n\n");
    printf("\t\t\tMAX POWER: 173PS@5500RPM\n\n");
    printf("\t\t\tTORQUE: 220NM@5500RPM\n\n");
    printf("\t\t\tMILEAGE: 17.8-24.1KMPL\n\n");
    printf("\t\t\tTOP SPEED: 200KMPH\n\n");
    printf("\t\t\tBODY TYPE: SEDAN\n\n");
    printf("\t\t\tPRICE: BDT%d\n\n\n",prc);

}
void civic11(int prc)
{
    hondalogo();
    prc=4600000;
    printf("\t\t\t[HONDA CIVIC 11TH GEN]\n\n\n");
    printf("\t\t\tENGINE: 2.0L INLINE-4 GAS\n\n");
    printf("\t\t\tMAX POWER: 158HP@6500RPM\n\n");
    printf("\t\t\tTORQUE: 138LBFT@4200RPM\n\n");
    printf("\t\t\tMILEAGE: 34KMPL\n\n");
    printf("\t\t\tBODY TYPE: SEDAN\n\n");
    printf("\t\t\tPRICE: BDT%d\n\n\n",prc);

}
void accord(int prc)
{
    hondalogo();
    prc=5500000;
    printf("\t\t\t[HONDA ACCORD]\n\n\n");
    printf("\t\t\tENGINE: 1498CC\n\n");
    printf("\t\t\tMAX POWER: 192HP@5500RPM\n\n");
    printf("\t\t\tTORQUE: 260NM@5000RPM\n\n");
    printf("\t\t\tTOP SPEED: 190KMPH\n\n");
    printf("\t\t\tBODY TYPE: SEDAN\n\n");
    printf("\t\t\tPRICE: BDT%d\n\n\n",prc);

}
void insight(int prc)
{
    hondalogo();
    prc=4200000;
    printf("\t\t\t[HONDA INSIGHT]\n\n\n");
    printf("\t\t\tENGINE: 1.5L INLINE-4 HYBRID\n\n");
    printf("\t\t\tMAX POWER: 151HP@6000RPM\n\n");
    printf("\t\t\tTORQUE: 99LBFT@5000RPM\n\n");
    printf("\t\t\tMILEAGE: 28KML\n\n");
    printf("\t\t\tTOP SPEED: 210KMPH\n\n");
    printf("\t\t\tBODY TYPE: SEDAN\n\n");
    printf("\t\t\tPRICE: BDT%d\n\n\n",prc);

}
void vezel(int prc)
{
    hondalogo();
    prc=2500000;
    printf("\t\t\t[HONDA VEZEL]\n\n\n");
    printf("\t\t\tENGINE: 1.8L INLINE-4 GAS\n\n");
    printf("\t\t\tMAX POWER: 141HP@6500RPM\n\n");
    printf("\t\t\tTORQUE: 127LBFT@43000RPM\n\n");
    printf("\t\t\tMILEAGE: 31KMPL\n\n");
    printf("\t\t\tBODY TYPE: SUV\n\n");
    printf("\t\t\tPRICE: BDT%d\n\n\n",prc);

}
void hyundai(void)
{
    system("cls");
    hyundailogo();

printf("\t\t\t[1]\tHYUNDAI TUCSON\n\n");
printf("\t\t\t[2]\tHYUNDAI ELANTRA\n\n");
printf("\t\t\t[3]\tHYUNDAI SONATA\n\n");
printf("\t\t\t[4]\tBACK\n\n");
printf("\t\t\t[5]\tBACK TO MENU\n\n");

int hyundaiopt,prc,optt;

printf("\n\n\t\t\tENTER OPTION: ");
scanf("%d", &hyundaiopt);

switch(hyundaiopt)
{
    case 1:
    system("cls");
    tucson(prc);
    o:
        downmenu();
    printf("\n\n\t\t\tENTER OPTION: ");
    scanf("%d", &optt);
    switch(optt)
    {
        case 1:
        prc=5300000;
        purchase(prc);
        break;
    case 2:
        system("cls");
        hyundai();
        break;
    case 3:
        system("cls");
        menu();
        break;
    default:
        system("cls");
        tucson(prc);
        goto o;
        }
    break;
    case 2:
    system("cls");
    elantra(prc);
    o1:
        downmenu();
    printf("\n\n\t\t\tENTER OPTION: ");
    scanf("%d", &optt);
    switch(optt)
    {
        case 1:
        prc=3600000;
        purchase(prc);
        break;
    case 2:
        system("cls");
        hyundai();
        break;
    case 3:
        system("cls");
        menu();
        break;
    default:
        system("cls");
        elantra(prc);
        goto o1;
        }
    break;
    case 3:
    system("cls");
    sonata(prc);
    o2:
        downmenu();
    printf("\n\n\t\t\tENTER OPTION: ");
    scanf("%d", &optt);
    switch(optt)
    {
        case 1:
        prc=5600000;
        purchase(prc);
        break;
    case 2:
        system("cls");
        hyundai();
        break;
    case 3:
        system("cls");
        menu();
        break;
    default:
        system("cls");
        sonata(prc);
        goto o2;
        }
    break;
    case 4:
    system("cls");
    car_det();
     break;
case 5:
    system("cls");
    menu();
     break;
default:
    system("cls");
    hyundai();
}
}
void hyundailogo(void)
{
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
}
void tucson(int prc)
{
    hyundailogo();
    prc=5300000;
    printf("\t\t\t[HYUNDAI TUCSON]\n\n\n");
    printf("\t\t\tENGINE: 1999CC\n\n");
    printf("\t\t\tMAX POWER: 155PS@6200RPM\n\n");
    printf("\t\t\tTORQUE: 19.6@4000RPM\n\n");
    printf("\t\t\tMILEAGE: 15.38KMPL\n\n");
    printf("\t\t\tTOP SPEED: 201.16KMPH\n\n");
    printf("\t\t\tBODY TYPE: SUV\n\n");
    printf("\t\t\tPRICE: BDT%d\n\n\n",prc);

}
void elantra(int prc)
{
    hyundailogo();
    prc=3600000;
    printf("\t\t\t[HYUNDAI ELANTRA]\n\n\n");
    printf("\t\t\tENGINE: 1591CC\n\n");
    printf("\t\t\tMAX POWER: 130PS@6300RPM\n\n");
    printf("\t\t\tTORQUE: 15.7@4850RPM\n\n");
    printf("\t\t\tTOP SPEED: 210KMPH\n\n");
    printf("\t\t\tBODY TYPE: SEDAN\n\n");
    printf("\t\t\tPRICE: BDT%d\n\n\n",prc);

}
void sonata(int prc)
{
    hyundailogo();
    prc=5600000;
    printf("\t\t\t[HYUNDAI SONATA]\n\n\n");
    printf("\t\t\tENGINE: 1999CC\n\n");
    printf("\t\t\tMAX POWER: 152HP@6200RPM\n\n");
    printf("\t\t\tTORQUE: 19.6@4000RPM\n\n");
    printf("\t\t\tTOP SPEED: 209.21KMPH\n\n");
    printf("\t\t\tBODY TYPE: SEDAN\n\n");
    printf("\t\t\tPRICE: BDT%d\n\n\n",prc);

}
void mazda(void)
{
    system("cls");
    mazdalogo();


printf("\t\t\t[1]\tMAZDA MX5\n\n");
printf("\t\t\t[2]\tMAZDA AXELA\n\n");
printf("\t\t\t[3]\tBACK\n\n");
printf("\t\t\t[4]\tBACK TO MENU\n\n");

int mazdaopt,prc,optt;

printf("\n\n\t\t\tENTER OPTION: ");
scanf("%d", &mazdaopt);

switch(mazdaopt)
{
    case 1:
    system("cls");
    mx5(prc);
    o:
        downmenu();
    printf("\n\n\t\t\tENTER OPTION: ");
    scanf("%d", &optt);
    switch(optt)
    {
        case 1:
        prc=3200000;
        purchase(prc);
        break;
    case 2:
        system("cls");
        mazda();
        break;
    case 3:
        system("cls");
        menu();
        break;
    default:
        system("cls");
        mx5(prc);
        goto o;
        }
    break;
    case 2:
    system("cls");
    axela(prc);
    o1:
        downmenu();
    printf("\n\n\t\t\tENTER OPTION: ");
    scanf("%d", &optt);
    switch(optt)
    {
        case 1:
        prc=2400000;
        purchase(prc);
        break;
    case 2:
        system("cls");
        mazda();
        break;
    case 3:
        system("cls");
        menu();
        break;
    default:
        system("cls");
        axela(prc);
        goto o1;
        }
    break;
    case 4:
    system("cls");
    car_det();
     break;
case 5:
    system("cls");
    menu();
     break;
default:
    system("cls");
    mazda();
}
}
void mazdalogo(void)
{
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
}
void mx5(int prc)
{
   mazdalogo();
    prc=3200000;
    printf("\t\t\tMAZDA MX5]\n\n\n");
    printf("\t\t\tENGINE: 1998CC\n\n");
    printf("\t\t\tMAX POWER: 181HP@7000RPM\n\n");
    printf("\t\t\tTORQUE: 151NM@4000RPM\n\n");
    printf("\t\t\tMILEAGE: 30KMPL\n\n");
    printf("\t\t\tBODY TYPE: CONVERTIBLE 2 SEATER\n\n");
    printf("\t\t\tPRICE: BDT%d\n\n\n",prc);

}
void axela(int prc)
{
    mazdalogo();
    prc=2400000;
    printf("\t\t\tMAZDA AXELA]\n\n\n");
    printf("\t\t\tENGINE: 1498CC\n\n");
    printf("\t\t\tMAX POWER: 103BHP\n\n");
    printf("\t\t\tTORQUE: 270NM\n\n");
    printf("\t\t\tMILEAGE: 21.6KML\n\n");
    printf("\t\t\tBODY TYPE: SEDAN\n\n");
    printf("\t\t\tPRICE: BDT%d\n\n\n",prc);

}
void downmenu(void)
{
    printf("\t\t\t[1]\tPURCHASE\n\n");
    printf("\t\t\t[2]\tBACK\n\n");
    printf("\t\t\t[3]\tBACK TO MENU\n");
}
void purchase(int prc)
{
system("cls");
    int i=0;
    while(i<3)
    {
    printf("_______  _____  _     _  ______      ______ _____ __   _  ______     _______ _______  ______ _______\n");
    printf("|______ |     | |     | |_____/     |_____/   |   | \\  | |  ____     |       |_____| |_____/ |______\n");
    printf("|       |_____| |_____| |    \\_     |    \\_ __|__ |  \\_| |_____|     |_____  |     | |    \\_ ______|\n");
    printf(" _____  _______ __   __ _______ _______ __   _ _______\n");
    printf("|_____] |_____|   \\_/   |  |  | |______ | \\  |    |   \n");
    printf("|       |     |    |    |  |  | |______ |  \\_|    |   \n\n\n\n\n");

    int paid;

    printf("\t\t\tAMOUNT TO BE PAID: BDT%d", prc);
    printf("\n\n\n\t\t\tENTER PAYMENT: BDT");
    scanf("%d", &paid);

    if(paid==prc)
    {
        system("cls");
        printf("_______  _____  __   _  ______  ______ _______ _______ _     _        _______ _______ _____  _____  __   _ _______\n");
        printf("|       |     | | \\  | |  ____ |_____/ |_____|    |    |     | |      |_____|    |      |   |     | | \\  | |______\n");
        printf("|_____  |_____| |  \\_| |_____| |    \\_ |     |    |    |_____| |_____ |     |    |    __|__ |_____| |  \\_| ______|");
        printf("\n\n\n\n\n\t\t\tRETURNING TO MENU IN 5 SECONDS\n\n");
        printf("\t\t\tTHANK YOU");
        sleep(5);
        system("cls");
        menu();
        break;
    }
    else if(paid>prc)
    {
        system("cls");
        int ref;
        ref=paid-prc;
        printf("_______  _____  __   _  ______  ______ _______ _______ _     _        _______ _______ _____  _____  __   _ _______\n");
        printf("|       |     | | \\  | |  ____ |_____/ |_____|    |    |     | |      |_____|    |      |   |     | | \\  | |______\n");
        printf("|_____  |_____| |  \\_| |_____| |    \\_ |     |    |    |_____| |_____ |     |    |    __|__ |_____| |  \\_| ______|");
        printf("\n\n\n\n\n\t\t\tREFUNDABLE AMOUNT: BDT%d",ref);
        printf("\n\n\n\t\t\tRETURNING TO MENU IN 5 SECONDS\n\n");
        printf("\t\t\tTHANK YOU");
        sleep(5);
        system("cls");
        menu();
        break;
    }
    else if(paid<prc&&i<2)
    {
        system("cls");
        int need;
        need=prc-paid;
        printf("_______  _____   ______  ______ __   __\n");
        printf("|______ |     | |_____/ |_____/   \\_/  \n");
        printf("______| |_____| |    \\_ |    \\_    |     ");
        printf("\n\n\n\n\n\t\t\tYOU NEED MORE: BDT%d",need);
        printf("\n\n\n\t\t\tRETURNING TO PAYMENT IN 3 SECONDS");
        sleep(3);
        system("cls");
        i++;
    }
    else if(paid<prc&&i<3)
    {
        system("cls");
        printf("_______  _____   ______  ______ __   __\n");
        printf("|______ |     | |_____/ |_____/   \\_/  \n");
        printf("______| |_____| |    \\_ |    \\_    |     ");
        printf("\n\n\n\n\n\t\t\tTOO MANY INVALID ATTEMPTS");
        printf("\n\n\n\t\t\tRETURNING TO MENU IN 2 SECONDS");
        sleep(2);
        system("cls");
        menu();
        break;
    }
  }
}
void tax(void)
{
    printf("_______  _____  _     _  ______      ______ _____ __   _  ______     _______ _______  ______ _______\n");
    printf("|______ |     | |     | |_____/     |_____/   |   | \\  | |  ____     |       |_____| |_____/ |______\n");
    printf("|       |_____| |_____| |    \\_     |    \\_ __|__ |  \\_| |_____|     |_____  |     | |    \\_ ______|\n\n\n\n\n");

    printf("\t\t\t __________________________________________________\n");
    printf("\t\t\t|                            |                     |\n");
    printf("\t\t\t|         CC(ENGINE)         |      GOVT. TAX      |\n");
    printf("\t\t\t|____________________________|_____________________|\n");
    printf("\t\t\t|                            |                     |\n");
    printf("\t\t\t|           0-1000           |        91%%          |\n");
    printf("\t\t\t|____________________________|_____________________|\n");
    printf("\t\t\t|                            |                     |\n");
    printf("\t\t\t|          1001-1500         |        130%%         |\n");
    printf("\t\t\t|____________________________|_____________________|\n");
    printf("\t\t\t|                            |                     |\n");
    printf("\t\t\t|          1501-2000         |        215%%         |\n");
    printf("\t\t\t|____________________________|_____________________|\n");
    printf("\t\t\t|                            |                     |\n");
    printf("\t\t\t|          2001-2750         |        370%%         |\n");
    printf("\t\t\t|____________________________|_____________________|\n");
    printf("\t\t\t|                            |                     |\n");
    printf("\t\t\t|          2751-4000         |        602%%         |\n");
    printf("\t\t\t|____________________________|_____________________|\n\n\n");

    printf("\t\t\t[1]\tBACK\n\n\n");

    int topt;
    printf("\t\t\tENTER OPTION: ");
    scanf("%d", &topt);

    switch(topt)
    {
    case 1:
        system("cls");
        menu();
        break;
    default:
        system("cls");
        tax();
    }
}
