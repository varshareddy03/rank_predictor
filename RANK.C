//program to predict seat in vnr vjiet
#include<stdio.h>
#include<conio.h>
void main()
{
long int r;
int c;
char gender;
clrscr();
printf("Enter your Eamcet Rank\n");
scanf("%ld",&r);
printf("Enter your caste as follows:\nOC=1\nBC-A=2\nBC-B=3\nBC-C=4\nBC-D=5\nBC E=6\nSC=7\nST=8\n");
scanf("%d",&c);
printf("Enter your gender as M/F\n");
fflush(stdin);
scanf("%c",&gender);
if(gender=='M'||gender=='m')
{
if(c==1)
{
 if(r>0&&r<=21369)
 {
 printf("you are eligible for a seat in vnr vjiet and the respective branches are\n");
 if(r<=1527)
 printf("COMPUTER SCIENCE AND ENGINEERING\n");
 if(r<=1559)
 printf("COMPUTER SCIENCE AND ENGINEERING (ARTIFICIAL INTELLIGENCE AND MACHINE LEARNING)\n");
 if(r<=1768)
 printf("COMPUTER SCIENCE ENGINEERING (DATA SCIENCES)\n");
 if(r<=1768)
 printf("COMPUTER SCIENCE AND ENGINEERING (CYBER SECURITY)\n");
 if(r<=2326)
 printf("COMPUTER SCIENCE AND ENGINEERING (IOT)\n");
 if(r<=3067)
 printf("COMPUTER SCIENCE AND BUSINESS SYSTEMS\n");
 if(r<=3333)
 printf("INFORMATION TECHNOLOGY\n");
 if(r<=3413)
 printf("ELECTRONICS AND COMMUNICATION ENGINEERING\n");
 if(r<=4860)
 printf("ELECTRICAL AND ELECTRONICS ENGINEERING\n");
 if(r<=8982)
 printf("MECHANICAL ENGINEERING\n");
 if(r<=11414)
 printf("CIVIL ENGINEERING\n");
 if(r<=14267)
 printf("ELECTRONICS AND INSTRUMENTATION ENGINEERING\n");
 if(r<=21369)
 printf("AUTOMOBILE ENGINEERING\n");
 }
 else if(r<=0)
 printf("Invalid Input");
 else
 printf("You are not elgible\n");
}
else if(c==2)
{
 if(r>0&&r<=78155)
 {
 printf("you are eligible for a seat in vnr vjiet and the respective branches are\n");
 if(r<=4723)
 printf("COMPUTER SCIENCE AND ENGINEERING\n");
 if(r<=5898)
 printf("COMPUTER SCIENCE AND ENGINEERING (ARTIFICIAL INTELLIGENCE AND MACHINE LEARNING)\n");
 if(r<=6959)
 printf("COMPUTER SCIENCE ENGINEERING (DATA SCIENCES)\n");
 if(r<=7851)
 printf("COMPUTER SCIENCE AND ENGINEERING (CYBER SECURITY)\n");
 if(r<=9024)
 printf("COMPUTER SCIENCE AND ENGINEERING (IOT)\n");
 if(r<=10038)
 printf("COMPUTER SCIENCE AND BUSINESS SYSTEMS\n");
 if(r<=11669)
 printf("INFORMATION TECHNOLOGY\n");
 if(r<=12530)
 printf("ELECTRONICS AND COMMUNICATION ENGINEERING\n");
 if(r<=32928)
 printf("ELECTRICAL AND ELECTRONICS ENGINEERING\n");
 if(r<=33637)
 printf("CIVIL ENGINEERING\n");
 if(r<=37658)
 printf("MECHANICAL ENGINEERING\n");
 if(r<=50340)
 printf("AUTOMOBILE ENGINEERING\n");
 if(r<=78155)
 printf("ELECTRONICS AND INSTRUMENTATION ENGINEERING\n");
 }
 else if(r<=0)
 printf("Invalid Input\n");
 else
 printf("you are not eligible");
}
else if(c==3)
{
 if(r>0&&r<=45867)
 {
 printf("you are eligible for a seat in vnr vjiet and the respective branches are\n");
 if(r<=2732)
 printf("COMPUTER SCIENCE AND ENGINEERING\n");
 if(r<=2751)
 printf("COMPUTER SCIENCE AND ENGINEERING (ARTIFICIAL INTELLIGENCE AND MACHINE LEARNING)\n");
 if(r<=3076)
 printf("COMPUTER SCIENCE ENGINEERING (DATA SCIENCES)\n");
 if(r<=3076)
 printf("COMPUTER SCIENCE AND ENGINEERING (CYBER SECURITY)\n");
 if(r<=3465)
 printf("COMPUTER SCIENCE AND ENGINEERING (IOT)\n");
 if(r<=4262)
 printf("COMPUTER SCIENCE AND BUSINESS SYSTEMS\n");
 if(r<=4773)
 printf("INFORMATION TECHNOLOGY\n");
 if(r<=5865)
 printf("ELECTRONICS AND COMMUNICATION ENGINEERING\n");
 if(r<=12116)
 printf("ELECTRICAL AND ELECTRONICS ENGINEERING\n");
 if(r<=22124)
 printf("MECHANICAL ENGINEERING\n");
 if(r<=24939)
 printf("CIVIL ENGINEERING\n");
 if(r<=25315)
 printf("ELECTRONICS AND INSTRUMENTATION ENGINEERING\n");
 if(r<=45867)
 printf("AUT\n");
 }
 else if(r<=0)
 printf("Invalid Input\n");
 else
 printf("you are not eligible");
}
else if(c==4)
{
if(r>0&&r<=82150)
 {
 printf("you are eligible for a seat in vnr vjiet and the respective branches are\n");
 if(r<=1559)
 printf("COMPUTER SCIENCE AND ENGINEERING (ARTIFICIAL INTELLIGENCE AND MACHINE LEARNING)\n");
 if(r<=1768)
 printf("COMPUTER SCIENCE ENGINEERING (DATA SCIENCES)\n");
 if(r<=2326)
 printf("COMPUTER SCIENCE AND ENGINEERING (IOT)\n");
 if(r<=3067)
 printf("COMPUTER SCIENCE AND BUSINESS SYSTEMS\n");
 if(r<=3413)
 printf("ELECTRONICS AND COMMUNICATION ENGINEERING\n");
 if(r<=7171)
 printf("COMPUTER SCIENCE AND ENGINEERING\n");
 if(r<=8982)
 printf("MECHANICAL ENGINEERING\n");
 if(r<=10969)
 printf("COMPUTER SCIENCE AND ENGINEERING (CYBER SECURITY)\n");
 if(r<=11414)
 printf("CIVIL ENGINEERING\n");
 if(r<=12574)
 printf("INFORMATION TECHNOLOGY\n");
 if(r<=14515)
 printf("ELECTRONICS AND INSTRUMENTATION ENGINEERING\n");
 if(r<=58709)
 printf("ELECTRICAL AND ELECTRONICS ENGINEERING\n");
 if(r<=82150)
 printf("AUT\n");
 }
 else if(r<=0)
 printf("Invalid Input\n");
 else
 printf("you are not eligible");
}
else if(c==5)
{
 if(r>0&&r<=27166)
 {
 printf("you are eligible for a seat in vnr vjiet and the respective branches are\n");
 if(r<=2326)
 printf("COMPUTER SCIENCE AND ENGINEERING (IOT)\n");
 if(r<=2501)
 printf("COMPUTER SCIENCE AND ENGINEERING\n");
 if(r<=3270)
 printf("COMPUTER SCIENCE AND ENGINEERING (ARTIFICIAL INTELLIGENCE AND MACHINE LEARNING)\n");
 if(r<=3730)
 printf("COMPUTER SCIENCE ENGINEERING (DATA SCIENCES)\n");
 if(r<=4270)
 printf("COMPUTER SCIENCE AND ENGINEERING (CYBER SECURITY)\n");
 if(r<=4838)
 printf("INFORMATION TECHNOLOGY\n");
 if(r<=5555)
 printf("COMPUTER SCIENCE AND BUSINESS SYSTEMS\n");
 if(r<=5593)
 printf("ELECTRONICS AND COMMUNICATION ENGINEERING\n");
 if(r<=9499)
 printf("ELECTRICAL AND ELECTRONICS ENGINEERING\n");
 if(r<=17479)
 printf("CIVIL ENGINEERING\n");
 if(r<=20489)
 printf("MECHANICAL ENGINEERING\n");
 if(r<=26025)
 printf("ELECTRONICS AND INSTRUMENTATION ENGINEERING\n");
 if(r<=27166)
 printf("AUT\n");
 }
 else if(r<=0)
 printf("Invalid Input\n");
 else
 printf("you are not eligible");
}
else if(c==6)
{
 if(r>0&&r<=78155)
 {
 printf("you are eligible for seat in vnr vjiet and the respective branches are\n");
 if(r<=3067)
 printf("COMPUTER SCIENCE AND BUSINESS SYSTEMS\n");
 if(r<=4293)
 printf("COMPUTER SCIENCE AND ENGINEERING (ARTIFICIAL INTELLIGENCE AND MACHINE LEARNING)\n");
 if(r<=4752)
 printf("COMPUTER SCIENCE ENGINEERING (DATA SCIENCES)\n");
 if(r<=4930)
 printf("COMPUTER SCIENCE AND ENGINEERING\n");
 if(r<=5022)
 printf("COMPUTER SCIENCE AND ENGINEERING (CYBER SECURITY)\n");
 if(r<=8343)
 printf("COMPUTER SCIENCE AND ENGINEERING (IOT)\n");
 if(r<=11735)
 printf("ELECTRONICS AND COMMUNICATION ENGINEERING\n");
 if(r<=11786)
 printf("INFORMATION TECHNOLOGY\n");
 if(r<=21693)
 printf("ELECTRICAL AND ELECTRONICS ENGINEERING\n");
 if(r<=34709)
 printf("MECHANICAL ENGINEERING\n");
 if(r<=38499)
 printf("CIVIL ENGINEERING\n");
 if(r<=70745)
 printf("AUTOMOBILE ENGINEERING\n");
 if(r<=78155)
 printf("ELECTRONICS AND INSTRUMENTATION ENGINEERING\n");
 }
 else if(r<=0)
 printf("Invalid Input\n");
 else
 printf("you are not eligible");
}
else if(c==7)
{
 if(r>0&&r<=80730)
 {
 printf("you are eligible for seat in vnr vjiet and the respective branches are\n");
 if(r<=14352)
 printf("COMPUTER SCIENCE AND ENGINEERING\n");
 if(r<=15216)
 printf("COMPUTER SCIENCE AND ENGINEERING (ARTIFICIAL INTELLIGENCE AND MACHINE LEARNING)\n");
 if(r<=16361)
 printf("COMPUTER SCIENCE ENGINEERING (DATA SCIENCES)\n");
 if(r<=17873)
 printf("COMPUTER SCIENCE AND ENGINEERING (CYBER SECURITY)\n");
 if(r<=19725)
 printf("ELECTRONICS AND COMMUNICATION ENGINEERING\n");
 if(r<=20069)
 printf("COMPUTER SCIENCE AND ENGINEERING (IOT)\n");
 if(r<=25338)
 printf("INFORMATION TECHNOLOGY\n");
 if(r<=27757)
 printf("ELECTRICAL AND ELECTRONICS ENGINEERING\n");
 if(r<=30345)
 printf("COMPUTER SCIENCE AND BUSINESS SYSTEMS\n");
 if(r<=32642)
 printf("CIVIL ENGINEERING\n");
 if(r<=52135)
 printf("MECHANICAL ENGINEERING\n");
 if(r<=76522)
 printf("ELECTRONICS AND INSTRUMENTATION ENGINEERING\n");
 if(r<=80730)
 printf("AUT\n");
 }
 else if(r<=0)
 printf("Invalid Input\n");
 else
 printf("you are not eligible");
}
else if(c==8)
{
 if(r>0&&r<=55165)
 {
 printf("you are eligible for the seat in vnr vjiet and the respective branches are\n");
 if(r<=3067)
 printf("COMPUTER SCIENCE AND BUSINESS SYSTEMS\n");
 if(r<=9529)
 printf("COMPUTER SCIENCE AND ENGINEERING\n");
 if(r<=17100)
 printf("COMPUTER SCIENCE AND ENGINEERING (ARTIFICIAL INTELLIGENCE AND MACHINE LEARNING)\n");
 if(r<=17322)
 printf("ELECTRONICS AND COMMUNICATION ENGINEERING\n");
 if(r<=18866)
 printf("ELECTRICAL AND ELECTRONICS ENGINEERING\n");
 if(r<=19592)
 printf("INFORMATION TECHNOLOGY\n");
 if(r<=23305)
 printf("CIVIL ENGINEERING\n");
 if(r<=23710)
 printf("MECHANICAL ENGINEERING\n");
 if(r<=24449)
 printf("COMPUTER SCIENCE AND ENGINEERING (CYBER SECURITY)\n");
 if(r<=24449)
 printf("COMPUTER SCIENCE ENGINEERING (DATA SCIENCES)\n");
 if(r<=25502)
 printf("COMPUTER SCIENCE AND ENGINEERING (IOT)\n");
 if(r<=41278)
 printf("AUT\n");
 if(r<=55165)
 printf("ELECTRONICS AND INSTRUMENTATION ENGINEERING\n");
 }
 else if(r<=0)
 printf("Invalid Input\n");
 else
 printf("you are not eligible");
}
else
 printf("invalid input");
}
else if(gender=='f'||gender=='F')
{
if(c==1)
{
 if(r>0&&r<=28492)
 {
 printf("you are eligible to get a seat in vnr vjiet and the respective branches are\n");
 if(r<=1767)
 printf("COMPUTER SCIENCE AND ENGINEERING\n");
 if(r<=1592)
 printf("COMPUTER SCIENCE AND ENGINEERING (ARTIFICIAL INTELLIGENCE AND MACHINE LEARNING)\n");
 if(r<=2241)
 printf("COMPUTER SCIENCE AND ENGINEERING (CYBER SECURITY)\n");
 if(r<=2241)
 printf("COMPUTER SCIENCE ENGINEERING (DATA SCIENCES)\n");
 if(r<=2676)
 printf("COMPUTER SCIENCE AND ENGINEERING (IOT)\n");
 if(r<=3151)
 printf("COMPUTER SCIENCE AND BUSINESS SYSTEMS\n");
 if(r<=3419)
 printf("INFORMATION TECHNOLOGY\n");
 if(r<=3700)
 printf("ELECTRONICS AND COMMUNICATION ENGINEERING\n");
 if(r<=7014)
 printf("ELECTRICAL AND ELECTRONICS ENGINEERING\n");
 if(r<=9976)
 printf("CIVIL ENGINEERING\n");
 if(r<=11613)
 printf("MECHANICAL ENGINEERING\n");
 if(r<=14593)
 printf("ELECTRONICS AND INSTRUMENTATION ENGINEERING\n");
 if(r<=28492)
 printf("AUTOMOBILE ENGINEERING\n");
 }
 else if(r<=0)
 printf("Invalid Input\n");
 else
 printf("you are not eligible");
 }
else if(c==2)
{
 if(r>0&&r<=55752)
 {
 printf("you are eligible to get a seat in vnr vjiet and the respective branches are\n");
 if(r<=5782)
 printf("COMPUTER SCIENCE AND ENGINEERING\n");
 if(r<=6959)
 printf("COMPUTER SCIENCE ENGINEERING (DATA SCIENCES)\n");
 if(r<=6959)
 printf("COMPUTER SCIENCE AND ENGINEERING (CYBER SECURITY)\n");
 if(r<=7606)
 printf("COMPUTER SCIENCE AND ENGINEERING (ARTIFICIAL INTELLIGENCE AND MACHINE LEARNING)\n");
 if(r<=10038)
 printf("COMPUTER SCIENCE AND BUSINESS SYSTEMS\n");
 if(r<=11580)
 printf("COMPUTER SCIENCE AND ENGINEERING (IOT)\n");
 if(r<=13125)
 printf("INFORMATION TECHNOLOGY\n");
 if(r<=16028)
 printf("ELECTRONICS AND COMMUNICATION ENGINEERING\n");
 if(r<=35801)
 printf("ELECTRICAL AND ELECTRONICS ENGINEERING\n");
 if(r<=35950)
 printf("CIVIL ENGINEERING\n");
 if(r<=47401)
 printf("MECHANICAL ENGINEERING\n");
 if(r<=50340)
 printf("AUTOMOBILE ENGINEERING\n");
 if(r<=55752)
 printf("ELECTRONICS AND INSTRUMENTATION ENGINEERING\n");
 }
 else if(r<=0)
 printf("Invalid Input\n");
 else
 printf("you are not eligible");
}
else if(c==3)
{
 if(r>0&&r<=45867)
 {
 printf("you are eligible to get a seat in vnr vjiet and the respective branches are\n");
 if(r<=3076)
 printf("COMPUTER SCIENCE ENGINEERING (DATA SCIENCES)\n");
 if(r<=3128)
 printf("COMPUTER SCIENCE AND ENGINEERING\n");
 if(r<=3884)
 printf("COMPUTER SCIENCE AND ENGINEERING (ARTIFICIAL INTELLIGENCE AND MACHINE LEARNING)\n");
 if(r<=4037)
 printf("COMPUTER SCIENCE AND ENGINEERING (CYBER SECURITY)\n");
 if(r<=4247)
 printf("COMPUTER SCIENCE AND ENGINEERING (IOT)\n");
 if(r<=4412)
 printf("COMPUTER SCIENCE AND BUSINESS SYSTEMS\n");
 if(r<=5619)
 printf("INFORMATION TECHNOLOGY\n");
 if(r<=6088)
 printf("ELECTRONICS AND COMMUNICATION ENGINEERING\n");
 if(r<=16379)
 printf("ELECTRICAL AND ELECTRONICS ENGINEERING\n");
 if(r<=26492)
 printf("ELECTRONICS AND INSTRUMENTATION ENGINEERING\n");
 if(r<=27354)
 printf("CIVIL ENGINEERING\n");
 if(r<=40863)
 printf("MECHANICAL ENGINEERING\n");
 if(r<=45867)
 printf("AUT\n");
 }
 else if(r<=0)
 printf("Invalid Input\n");
 else
 printf("you are not eligible");
}
else if(c==4)
{
 if(r>0&&r<=82150)
 {
 printf("you are eligible to get a seat in vnr vjiet and the respective branches are\n");
 if(r<=1592)
 printf("COMPUTER SCIENCE AND ENGINEERING (ARTIFICIAL INTELLIGENCE AND MACHINE LEARNING)\n");
 if(r<=2241)
 printf("COMPUTER SCIENCE ENGINEERING (DATA SCIENCES)\n");
 if(r<=3151)
 printf("COMPUTER SCIENCE AND BUSINESS SYSTEMS\n");
 if(r<=3700)
 printf("ELECTRONICS AND COMMUNICATION ENGINEERING\n");
 if(r<=7171)
 printf("COMPUTER SCIENCE AND ENGINEERING\n");
 if(r<=10969)
 printf("COMPUTER SCIENCE AND ENGINEERING (CYBER SECURITY)\n");
 if(r<=12574)
 printf("INFORMATION TECHNOLOGY\n");
 if(r<=18083)
 printf("COMPUTER SCIENCE AND ENGINEERING (IOT)\n");
 if(r<=35452)
 printf("CIVIL ENGINEERING\n");
 if(r<=42177)
 printf("ELECTRONICS AND INSTRUMENTATION ENGINEERING\n");
 if(r<=51252)
 printf("MECHANICAL ENGINEERING\n");
 if(r<=58709)
 printf("ELECTRICAL AND ELECTRONICS ENGINEERING\n");
 if(r<=82150)
 printf("AUT\n");
 }
 else if(r<=0)
 printf("Invalid Input\n");
 else
 printf("you are not eligible");
}
else if(c==5)
{
 if(r>0&&r<=67970)
 {
 printf("you are eligible to get a seat in vnr vjiet and the respective branches are\n");
 if(r<=3203)
 printf("COMPUTER SCIENCE AND ENGINEERING\n");
 if(r<=3270)
 printf("COMPUTER SCIENCE AND ENGINEERING (ARTIFICIAL INTELLIGENCE AND MACHINE LEARNING)\n");
 if(r<=4355)
 printf("COMPUTER SCIENCE ENGINEERING (DATA SCIENCES)\n");
 if(r<=4595)
 printf("COMPUTER SCIENCE AND ENGINEERING (CYBER SECURITY)\n");
 if(r<=5650)
 printf("COMPUTER SCIENCE AND BUSINESS SYSTEMS\n");
 if(r<=5945)
 printf("INFORMATION TECHNOLOGY\n");
 if(r<=6635)
 printf("COMPUTER SCIENCE AND ENGINEERING (IOT)\n");
 if(r<=7272)
 printf("ELECTRONICS AND COMMUNICATION ENGINEERING\n");
 if(r<=15820)
 printf("ELECTRONICS AND INSTRUMENTATION ENGINEERING\n");
 if(r<=26025)
 printf("ELECTRONICS AND INSTRUMENTATION ENGINEERING\n");
 if(r<=30433)
 printf("CIVIL ENGINEERING\n");
 if(r<=38983)
 printf("MECHANICAL ENGINEERING\n");
 if(r<=67970)
 printf("AUT\n");
 }
 else if(r<=0)
 printf("Invalid Input\n");
 else
 printf("you are not eligible");
}
else if(c==6)
{
 if(r>0&&r<=78155)
 {
 printf("you are eligible to get a seat in vnr vjiet and the respective branches are\n");
 if(r<=4310)
 printf("COMPUTER SCIENCE ENGINEERING (DATA SCIENCES)\n");
 if(r<=5022)
 printf("COMPUTER SCIENCE AND ENGINEERING (CYBER SECURITY)\n");
 if(r<=5290)
 printf("COMPUTER SCIENCE AND ENGINEERING\n");
 if(r<=7638)
 printf("COMPUTER SCIENCE AND ENGINEERING (ARTIFICIAL INTELLIGENCE AND MACHINE LEARNING)\n");
 if(r<=8343)
 printf("COMPUTER SCIENCE AND ENGINEERING (IOT)\n");
 if(r<=14511)
 printf("INFORMATION TECHNOLOGY\n");
 if(r<=16167)
 printf("ELECTRONICS AND COMMUNICATION ENGINEERING\n");
 if(r<=21693)
 printf("ELECTRICAL AND ELECTRONICS ENGINEERING\n");
 if(r<=38449)
 printf("CIVIL ENGINEERING\n");
 if(r<=38772)
 printf("COMPUTER SCIENCE AND BUSINESS SYSTEMS\n");
 if(r<=41532)
 printf("MECHANICAL ENGINEERING\n");
 if(r<=70745)
 printf("AUT\n");
 if(r<=78155)
 printf("ELECTRONICS AND INSTRUMENTATION ENGINEERING\n");
 }
 else if(r<=0)
 printf("Invalid Input\n");
 else
 printf("you are not eligible");
}
else if(c==7)
{
 if(r>=0&&r<=80730)
 {
 printf("you are eligible to get seat in vnr vjiet and the respective branches are\n");
 if(r<=15151)
 printf("COMPUTER SCIENCE AND ENGINEERING\n");
 if(r<=19388)
 printf("COMPUTER SCIENCE AND ENGINEERING (ARTIFICIAL INTELLIGENCE AND MACHINE LEARNING)\n");
 if(r<=21534)
 printf("ELECTRONICS AND COMMUNICATION ENGINEERING\n");
 if(r<=23206)
 printf("INFORMATION TECHNOLOGY\n");
 if(r<=26235)
 printf("COMPUTER SCIENCE ENGINEERING (DATA SCIENCES)\n");
 if(r<=26235)
 printf("COMPUTER SCIENCE AND ENGINEERING (CYBER SECURITY)\n");
 if(r<=33287)
 printf("COMPUTER SCIENCE AND ENGINEERING (IOT)\n");
 if(r<=33115)
 printf("ELECTRICAL AND ELECTRONICS ENGINEERING\n");
 if(r<=35056)
 printf("COMPUTER SCIENCE AND BUSINESS SYSTEMS\n");
 if(r<=46396)
 printf("CIVIL ENGINEERING\n");
 if(r<=75008)
 printf("ELECTRONICS AND INSTRUMENTATION ENGINEERING\n");
 if(r<=79410)
 printf("MECHANICAL ENGINEERING\n");
 if(r<=80730)
 printf("AUT\n");
 }
 else if(r<=0)
 printf("Invalid Input\n");
 else
 printf("you are not eligible");
}
else if(c==8)
{
 if(r>0&&r<=77331)
 {
 printf("you are eligible to get Seat in vnr vjiet and respective branches are:\n");
 if(r<=14805)
 printf("COMPUTER SCIENCE AND ENGINEERING\n");
 if(r<=17100)
 printf("COMPUTER SCIENCE AND ENGINEERING (ARTIFICIAL INTELLIGENCE AND MACHINE LEARNING)\n");
 if(r<=22274)
 printf("ELECTRICAL AND ELECTRONICS ENGINEERING\n");
 if(r<=22752)
 printf("ELECTRONICS AND COMMUNICATION ENGINEERING\n");
 if(r<=24449)
 printf("COMPUTER SCIENCE ENGINEERING (DATA SCIENCES)\n");
 if(r<=25502)
 printf("COMPUTER SCIENCE AND ENGINEERING (IOT)\n");
 if(r<=27078)
 printf("CIVIL ENGINEERING\n");
 if(r<=27875)
 printf("ELECTRONICS AND INSTRUMENTATION ENGINEERING\n");
 if(r<=31573)
 printf("MECHANICAL ENGINEERING\n");
 if(r<=34240)
 printf("COMPUTER SCIENCE AND ENGINEERING (CYBER SECURITY)\n");
 if(r<=60078)
 printf("AUT\n");
 if(r<=61219)
 printf("COMPUTER SCIENCE AND BUSINESS SYSTEMS\n");
 if(r<=77331)
 printf("ELECTRONICS AND INSTRUMENTATION ENGINEERING\n");
 }
 else if(r<=0)
 printf("Invalid Input\n");
 else
 printf("you are not eligible to get a seat in vnrvjiet");
 }
else
 printf("invalid input");
}
else
printf("invalid input");
getch();
}
