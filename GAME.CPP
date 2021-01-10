#include<iostream.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h>

int dice,position,newposition,above,choice,count=0,x=1;
char square[10]={'0','1','2','3','4','5','6','7','8','9'};
int checkposition();
int checkwin();
void board();



int main()
{
int player=1,i,choice,swchoice;
char mark;
clrscr();
cout<<"\nSelect a game:\n1.TIC TAC TOE.\n2.SNAKE n LADDERS.\n\nEnter your choice= ";
cin>>swchoice;
switch(swchoice)
{
case 1://main case 1
clrscr();
do
{
board();
player=(player%2)?1:2;
cout<<"Player "<< player << ", enter a number:  ";
cin>>choice;
mark=(player==1)? 'X' : 'O' ;

if(choice==1 && square[1]=='1')
square[1]=mark;
else if(choice==2 && square[2]=='2')
square[2]=mark;
else if(choice==3 && square[3]=='3')
square[3]=mark;
else if(choice==4 && square[4]=='4')
square[4]=mark;
else if(choice==5 && square[5]=='5')
square[5]=mark;
else if(choice==6 && square[6]=='6')
square[6]=mark;
else if(choice==7 && square[7]=='7')
square[7]=mark;
else if(choice==8 && square[8]=='8')
square[8]=mark;
else if(choice==9 && square[9]=='9')
square[9]=mark;
else
{
cout<<"Invalid move ";
player--;
cin.ignore();
cin.get();
}
i=checkwin();
player++;
}while(i==-1);
board();
if(i==1)
cout<<"==>\aCongratulations Player "<<--player<<"  ,you win! ";
else
cout<<"==>\aGame draw";
cin.ignore();
cin.get();
return 0;
//break;//main case 1 break

case 2://main case2
clrscr();
srand(time(NULL));
do
{//player 1 or 2
clrscr();
cout<<"\nPress 1 to play the game:\n\n";
cin>>::choice;
if(::choice==1)
{
cout<<"\nWelcome to snake and ladders. \n";
cout<<"| 100 99 98 97 96 95 94 93 92 91 |    1=start           4=Ladder to 14\n";
cout<<"| 81  82 83 84 85 86 87 88 89 90 |    9=Ladder to 31    17=Snake to 7\n";
cout<<"| 80  79 78 77 76 75 74 73 72 71 |    21=Ladder to 42   46=Snake to 13\n";
cout<<"| 61  62 63 64 65 66 67 68 69 70 |    28=Ladder to 84   62=Snake to 19\n";
cout<<"| 60  59 58 57 56 55 54 53 52 51 |    37=Ladder to 61   54=Snake to 25\n";
cout<<"| 41  42 43 44 45 46 47 48 49 50 |    87=Snake to 36    51=Ladder to 67\n";
cout<<"| 40  39 38 37 36 35 34 33 32 31 |    72=Ladder to 91   64=Snake to 44\n";
cout<<"| 21  22 23 24 25 26 27 28 29 30 |    89=Snake to 53    95=Snake to 75\n";
cout<<"| 20  19 18 17 16 15 14 13 12 11 |    98=Snake to 79    100=END\n";
cout<<"| 1   2  3  4  5  6  7  8  9  10 |    80=Ladder to 99\n";
cout<<"\nWinner will be the one who gets to 100 first that is with minimum number of dice throws.\n";
do
{
cout<<"\n\nPress any key to roll the dice.\n\n";
dice=(getche());
dice=((rand()%6)+1);
cout<<"\nYou rolled a dice.";
position+=dice;
if(dice==6)
{
cout<<"\nYou got 6 ,you get one more chance.\n";
continue;
}
cout<<"\nYou landed on number "<<position<<"\n";
count++;
checkposition();
position=newposition;
}while(position<100);
cout<<"\nCongratulations, player "<<x<<" won!! in "<<count<<" dice throws.";
x++;
}
else
cout<<"\nInvalid INPUT.";
}while(x==1);
getch();
return 0;
//break;
default:
cout<<"\nInvalid Input";
break;
}//switch
}


checkposition()
{
switch(position)
{
case 4:
newposition=14;
cout<<"\nYou have landed on a ladder.You are now on space "<<newposition<<"\n";
break;
case 9:
newposition=31;
cout<<"\nYou have landed on a ladder.You are now on space "<<newposition<<"\n";
break;
case 17:
newposition=7;
cout<<"\nOops! You landed on a snake,you are now on space "<<newposition<<"\n";
break;
case 21:
newposition=42;
cout<<"\nYou have landed on a ladder.You are now on space "<<newposition<<"\n";
break;
case 46:
newposition=13;
cout<<"\nOops! You landed on a snake,you are now on space "<<newposition<<"\n";
break;
case 28:
newposition=84;
cout<<"\nYou have landed on a ladder.You are now on space "<<newposition<<"\n";
break;
case 62:
newposition=19;
cout<<"\nOops! You landed on a snake,you are now on space "<<newposition<<"\n";
break;
case 37:
newposition=61;
cout<<"\nYou have landed on a ladder.You are now on space "<<newposition<<"\n";
break;
case 54:
newposition=25;
cout<<"\nOops! You landed on a snake,you are now on space "<<newposition<<"\n";
break;
case 87:
newposition=36;
cout<<"\nOops! You landed on a snake,you are now on space "<<newposition<<"\n";
break;
case 51:
newposition=67;
cout<<"\nYou have landed on a ladder.You are now on space "<<newposition<<"\n";
break;
case 72:
newposition=91;
cout<<"\nYou have landed on a ladder.You are now on space "<<newposition<<"\n";
break;
case 64:
newposition=44;
cout<<"\nOops! You landed on a snake,you are now on space "<<newposition<<"\n";
break;
case 89:
newposition=53;
cout<<"\nOops! You landed on a snake,you are now on space "<<newposition<<"\n";
break;
case 95:
newposition=75;
cout<<"\nOops! You landed on a snake,you are now on space "<<newposition<<"\n";
break;
case 98:
newposition=79;
cout<<"\nOops! You landed on a snake,you are now on space "<<newposition<<"\n";
break;
case 80:
newposition=99;
cout<<"\nYou have landed on a ladder.You are now on space "<<newposition<<"\n";
break;
default:
return newposition=position;
}
}


int checkwin()
{
if(square[1]==square[2] && square[2]==square[3])
return 1;
else if(square[4]==square[5] && square[5]==square[6])
return 1;
else if(square[7]==square[8] && square[8]==square[9])
return 1;
else if(square[1]==square[4] && square[4]==square[7])
return 1;
else if(square[2]==square[5] && square[5]==square[8])
return 1;
else if(square[3]==square[6] && square[6]==square[9])
return 1;
else if(square[1]==square[5] && square[5]==square[9])
return 1;
else if(square[3]==square[5] && square[5]==square[7])
return 1;
else if(square[1]!='1' && square[2]!='2' && square[3]!='3' && square[4]!='4' &&
square[5]!='5' && square[6]!='6' && square[7]!='7' && square[8]!='8' &&
square[9]!='9')
return 0;
else
return -1; //to continue the while loop
}

void board()
{
system("cls");
cout<< "\n\n\tTic Tac Toe\n\n";
cout<<"Player 1 (X) - Player 2 (0)"<<endl<<endl;
cout<<endl;
cout<< "    |    |    "<<endl;
cout<< "  "<<square[1]<< " |  "<<square[2]<< " |  "<<square[3]<<endl;
cout<< "____|____|____"<<endl;
cout<< "    |    |    "<<endl;
cout<< "  "<<square[4]<< " |  "<<square[5]<< " |  "<<square[6]<<endl;
cout<< "____|____|____"<<endl;
cout<< "    |    |    "<<endl;
cout<< "  "<<square[7]<< " |  "<<square[8]<< " |  "<<square[9]<<endl;
cout<< "    |    |    "<<endl<<endl;
}
