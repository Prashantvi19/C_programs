#include<stdio.h>
#include<graphics.h>
#include<conio.h>  


void main()
{
    int i;
    int graphdriver = DETECT , graphmode;
    graph(&graphdriver,&graphmode,E:\Lan_Programs\C_language\graphics.c);
    line(100,200,100,350);
    circle(550,50,30);
    arc(200,350,90,180,40);
    outtextxy(500,350,"Prashant Vishwakarma");
    closegraph();
     getch();  