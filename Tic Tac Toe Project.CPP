#include<iostream.h>
#include<conio.h>
#include<graphics.h>
char s[10]={'0','1','2','3','4','5','6','7','8','9'};
int checkwin()
{
if(s[1]==s[2] && s[2]==s[3])
return 1;
else if(s[4]==s[5] && s[5]==s[6])
return 1;
else if(s[7]==s[8] && s[8]==s[9])
return 1;
else if(s[1]==s[4] && s[4]==s[7])
return 1;
else if(s[2]==s[5] && s[5]==s[8])
return 1;
else if(s[3]==s[6] && s[6]==s[9])
return 1;
else if(s[1]==s[5] && s[5]==s[9])
return 1;
else if(s[3]==s[5] && s[5]==s[7])
return 1;
else if(s[4]!='1' && s[2]!='2' && s[3]!='3' && s[4]!='4' && s[5]!='5' && s[6]!='6' && s[7]!='7' && s[8]!='8' && s[9]!='9')
return 0;
else
return -1;
}
void board()
{
clrscr();
int gd=DETECT,gm,x,y;
initgraph(&gd,&gm,"c:\\TC\\bgi");
setbkcolor(BLUE);
cout<<endl;
cout<<endl;
cout<<"TIC TAC TOE";
cout<<endl;
cout<<"PLAYER 1 (X)  -  PLAYER 2 (O)";
cout<<"                   "<<"                                         "<<endl;
cout<<"  "<<s[1]<<"     "<<s[2]<<"     "<<s[3]<<"                      "<<endl;
cout<<"                   "<<"                                         "<<endl;
cout<<"                   "<<"                                         "<<endl;
cout<<"  "<<s[4]<<"     "<<s[5]<<"     "<<s[6]<<"                      "<<endl;
cout<<"                   "<<"                                         "<<endl;
cout<<"                   "<<"                                         "<<endl;
cout<<"  "<<s[7]<<"     "<<s[8]<<"     "<<s[9]<<"                      "<<endl;
cout<<"                   "<<"                                         "<<endl;
}
void preface()
{
int gd=DETECT,gm,x,y;
initgraph(&gd,&gm,"c:\\TC\\bgi");
setbkcolor(BLUE);
settextstyle(7,HORIZ_DIR,4);
outtextxy(140,80,"WELCOME");
outtextxy(140,120,"TIC TAC TOE");
outtextxy(140,160,"NAME-  ");
outtextxy(140,200,"CLASS- 12 A");
outtextxy(140,240,"Press Any Key To Start");
getch();
closegraph();
}

int main()
{
preface();
int player=1,i,ch;
char m;
clrscr();
do
{
board();
player=(player%2)?1:2;
cout<<"PLAYER"<<player<<" enter a number" ;
cin>>ch;
m=(player==1)?'X':'O';
if(ch==1 && s[1]=='1')
s[1]=m;
else if(ch==2 && s[2]=='2')
s[2]=m;
else if(ch==3 && s[3]=='3')
s[3]=m;
else if(ch==4 && s[4]=='4')
s[4]=m;
else if(ch==5 && s[5]=='5')
s[5]=m;
else if(ch==6 && s[6]=='6')
s[6]=m;
else if(ch==7 && s[7]=='7')
s[7]=m;
else if(ch==8 && s[8]=='8')
s[8]=m;
else if(ch==9 && s[9]=='9')
s[9]=m;
else
{
cout<<"INVALID MOVE"<<endl;
player--;
getch();
}
i=checkwin();
player++;
}
while(i==-1);
board();
if(i==1)
{
cout<<"PLAYER"<<--player<<"WINS";
}
else
{
cout<<"GAMEDRAW";
}
getch();
return 0;
}
