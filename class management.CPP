#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<iomanip.h>
#include<graphics.h>
#include<dos.h>

struct student
{
int roll;
char name[8];
int e,p,m,c,cs;
int total;
int per;
char grade;
};

student st[20]={
		{1,"akash",55,55,55,55,55},
		{2,"Badal",99,81,85,77,86},
		{3,"Danny",93,94,96,97,99},
		{4,"Dhuri",33,30,55,74,49},
		{5,"Ehsan",80,70,60,50,40},
		{6,"Majhi",90,88,30,38,45},
		{7,"Nasim",32,64,49,38,32},
		{8,"Nayak",39,99,44,70,45},
		{9,"Punit",78,01,88,55,66},
		{10,"vikas",32,54,45,70,45},
		};
void back(int);
void sort(int);
void star();
void line();
void fail();
void intro();
void pass();
void topper(int);
void calculate();
int enter(int);
void display(int);
void show_all();

void main()


{

clrscr();
intro();
int eno,i,a,y=0;
char ch;




do
	{       int n=5;
		back(n);
		cout<<"\n\n\n\t MAIN MENU";
		cout<<"\n\n\t\t 01. ENTER/EDIT";
		cout<<"\n\n\t\t 02. SEARCH THE RESULT";
		cout<<"\n\n\t\t 03. DISPLAY ALL STUDETNT";
		cout<<"\n\n\t\t 04. TOPPERS";
		cout<<"\n\n\t\t 05. LIST OF STUDENT PASS";
		cout<<"\n\n\t\t 06. LIST OF STUDENT FAIL";
		cout<<"\n\n\t\t 07. BACK TO FRONT PAGE";
		cout<<"\n\n\t\t 08. EXIT";
		cout<<"\n\n\t Please Select Your Option (1-8) ";
		calculate();
		cin>>a;
		closegraph();
		clrscr();
		switch(a)
		{
			case 1: clrscr();
				y=y+enter(y);
				calculate();
				break;
			case 2: do
				{
				clrscr();
				cout<<"enter the roll to be search"<<endl;
				cin>>eno;
				int flag=0;
				for(i=0;i<10+y;i++)
					{
				if(st[i].roll==eno)
						{
						display(i);
						flag=1;
						break;
						}
					}
				if(flag!=1)
				cout<<"\t\tSorry no record found";
				cout<<"\n\t\tDisplay more y/n     ";
				cin>>ch;
				closegraph();
				}while(ch=='y');
				break;
			case 3: sort(y);
				show_all();
				break;
			case 4: topper(y);
				break;
			case 5: sort(y);
				pass();
				break;
			case 6: sort(y);
				fail();
				break;
			case 7: intro();
				break;
			case 8:
				break;


			default :cout<<1;
		}
	}while(a!=8);

getch();
}





int enter(int y)
{

int size,n=9;
back(n);
cout<<"\n\n\t\tHow many student do you want to enter     ";
cin>>size;
for(int i=10+y;i<size+10+y;i++)
{
cout<<"\n\n\n";
cout<<"\t\t\tEntering "<<i-9-y<<endl;
	cout<<"\n\t\tEnter the roll no.                 ";
	cin>>st[i].roll;
	cout<<"\n\t\tEnter the  name                    ";
	gets(st[i].name);
	cout<<"\n\t\tEnter marks in english out of 100  ";
	cin>>st[i].e;
	cout<<"\n\t\tEnter marks in physics out of 100  ";
	cin>>st[i].p;
	cout<<"\n\t\tEnter marks in maths out of 100    ";
	cin>>st[i].m;
	cout<<"\n\t\tEnter marks in chemistry out of 100 ";
	cin>>st[i].c;
	cout<<"\n\t\tEnter marks in computer out of 100 ";
	cin>>st[i].cs;
clrscr();
}
closegraph();
return size;
}



void display(int i)
{
int n=8;
back(n);
cout<<"\n\n";
line();
cout<<"    |    Roll no.         |       "<<st[i].roll<<endl;
cout<<"    |     Name            |       "<<st[i].name<<endl;
line();
cout<<"    |       SUBJECT       |       MARKS(100)   "<<endl;
cout<<"    |       English       |         "<<st[i].e<<endl;
cout<<"    |       Physics       |         "<<st[i].p<<endl;
cout<<"    |       Maths         |         "<<st[i].m<<endl;
cout<<"    |       Chemistry     |         "<<st[i].c<<endl;
cout<<"    |       Computer      |         "<<st[i].cs<<endl;
line();
cout<<"    |     Total           | "<<st[i].total<<"500"<<endl;
cout<<"    |     Percentage      | "<<st[i].per<<endl;
cout<<"    |     Grade           | "<<st[i].grade<<endl;
star();

return;

}



void calculate()
{
for(int i=0;i<20;i++)
	{
	st[i].total=st[i].p+st[i].c+st[i].m+st[i].e+st[i].cs;
	st[i].per=(st[i].total)/5;
	if(st[i].per>=80)
		st[i].grade='A';
	else if(st[i].per>=60)
		st[i].grade='B';
	else if(st[i].per>40)
		st[i].grade='C';
	else if(st[i].per>=33)
		st[i].grade='D';
	else
		st[i].grade='E';
	}
return;
}




void pass()
{
int n=7;
back(n);
cout<<"\n\n\n";
cout<<setw(46)<<"STUDENT PASS TABLE \n";
line();
cout<<setw(15)<<"Roll no."<<setw(12)<<"Name"<<setw(15)<<"Percent"<<setw(12)<<"Grade"<<setw(12)<<"Result"<<endl;
line();
for(int i=0;i<20;i++)
{
if(st[i].e>33)
	{
	if(st[i].p>33)
		{
		if(st[i].m>33)
			{
			if(st[i].c>33)
				{
				if(st[i].cs>33)
				cout<<setw(12)<<st[i].roll<<setw(15)<<st[i].name<<setw(12)<<st[i].per<<setw(12)<<"    "<<st[i].grade<<setw(16)<<"passed"<<endl;
				}
			}
		}
	}
}
line();
cout<<endl<<endl;
star();
cout<<setw(43)<<"Finish\n";
star();


getch();
closegraph();
return;
}

void topper(int y)
{
int n=5;
back(n);
student temp;
cout<<"\n\n\n";
	for(int i=0;i<y+10;i++)
	{	for(int j=0;j<10+y;j++)
		{
		if(st[j].per<st[j+1].per)
			{
			temp=st[j];
			st[j]=st[j+1];
			st[j+1]=temp;
			}
		}
	}
cout<<setw(46)<<"TOPPER   LIST \n";
line();
cout<<setw(20)<<"Roll no."<<setw(6)<<" "<<"Name"<<setw(6)<<" "<<"Percent"<<setw(6)<<" "<<"Grade"<<endl;
line();
for(i=0;i<5;i++)
cout<<setw(15)<<st[i].roll<<setw(15)<<st[i].name<<setw(9)<<" "<<st[i].per<<setw(10)<<" "<<st[i].grade<<endl;
line();
cout<<endl<<endl;
star();
cout<<setw(43)<<"Finish\n";
star();
getch();
closegraph();
return;
}


void intro()
{
int gdriver = DETECT,gmode;
initgraph(&gdriver,&gmode,"C:\\TC\\BGI");
cleardevice();
int z=20,y=20;
setcolor(15);
rectangle(0,0,635,445);
rectangle(5,5,630,440);

rectangle(35,35,600,410);
rectangle(40,40,595,405);
setfillstyle(1,3);
floodfill(6,6,15);
setfillstyle(1,11);
floodfill(41,41,15);

setcolor(1);
settextstyle(7,0,4);
outtextxy(90,40,"CHRIST  SR.  SEC.   SCHOOL");
setcolor(9);
settextstyle(6,0,2);
outtextxy(250,75,"GUNA(M.P.)");
outtextxy(235,100,"2015-2016");
setcolor(5);
settextstyle(3,0,3);
outtextxy(250,170,"PROJECT");
outtextxy(237,190,"REPORT ON");
outtextxy(170,210,"STUDENT REPORT CARD ");
setcolor(6);
settextstyle(1,0,2);
outtextxy(290,340,"MADE BY : NITESH LODHA");
outtextxy(290,360,"CLASS   :  XI   A");
outtextxy(290,380,"ROLL NO.:  11124");

setcolor(15);
for(int i=0;i<13;i++)
{
delay(100);
circle(615,20+z,10);
circle(20,20+z,10);
z=z+30;
}

for(i=0;i<20;i++)
{

delay(100);
circle(20+y,427,10);
circle(20+y,17,10);

y=y+30;
}

y=20;
int p=2,o=2,v=0;
for(i=0;i<20;i++)
{
delay(100);
setfillstyle(o,p);
floodfill(20+y,17,15);
floodfill(20+y,427,15);
y=y+30;
if(i==1+v)
{
v=v+2;
o++;
p++;
}
}
p=12,o=12,v=0;
z=20;
for(i=0;i<13;i++)
{
delay(100);
setfillstyle(o,p);
floodfill(615,20+z,15);
floodfill(20,20+z,15);
z=z+30;
if(i==1+v)
{
v=v+2;
o=o-1;
p=p-1;
}
}
setfillstyle(1,11);
floodfill(41,41,15);
int e=0,r=100,t=20,g=1;
for(i=0;i<25;i++)
{
setcolor(g);
delay(50);
arc(140,325,r,e,t);
arc(500,150,e,r,t-3);
e=e+10;
r=r+10;
t=t+3;
g++;
if(g=14)
g=1;

}
for(i=0;i<5;i++)
{
delay(90);
setcolor(1+i);
settextstyle(7,0,4);
outtextxy(90,40,"CHRIST  SR.  SEC.   SCHOOL");
setcolor(4+i);
settextstyle(6,0,2);
outtextxy(250,75,"GUNA(M.P.)");
outtextxy(235,100,"2015-2016");
setcolor(6+i);
delay(90);
settextstyle(3,0,3);
outtextxy(250,170,"PROJECT");
outtextxy(237,190,"REPORT ON");
outtextxy(170,210,"STUDENT REPORT CARD ");
setcolor(3+i);
settextstyle(1,0,2);
outtextxy(290,340,"MADE BY : NITESH LODHA");
outtextxy(290,360,"CLASS   :  XI   A");
outtextxy(290,380,"ROLL NO.:  11124");
if(i==3)
{

setcolor(15);
settextstyle(7,0,4);
outtextxy(90,40,"CHRIST  SR.  SEC.   SCHOOL");
setcolor(15);
settextstyle(6,0,2);
outtextxy(250,75,"GUNA(M.P.)");
outtextxy(235,100,"2015-2016");
setcolor(15);
settextstyle(3,0,3);
outtextxy(250,170,"PROJECT");
outtextxy(237,190,"REPORT ON");
outtextxy(170,210,"STUDENT REPORT CARD ");
setcolor(15);
settextstyle(1,0,2);
outtextxy(290,340,"MADE BY : NITESH LODHA");
outtextxy(290,360,"CLASS   :  XI   A");
outtextxy(290,380,"ROLL NO.:  11124");
delay(500);
}
if(i==4)
{
delay(500);
setcolor(1);
settextstyle(7,0,4);
outtextxy(90,40,"CHRIST  SR.  SEC.   SCHOOL");
setcolor(9);
settextstyle(6,0,2);
outtextxy(250,75,"GUNA(M.P.)");
outtextxy(235,100,"2015-2016");
setcolor(5);
settextstyle(3,0,3);
outtextxy(250,170,"PROJECT");
outtextxy(237,190,"REPORT ON");
outtextxy(170,210,"STUDENT REPORT CARD ");
setcolor(6);
settextstyle(1,0,2);
outtextxy(290,340,"MADE BY : NITESH LODHA");
outtextxy(290,360,"CLASS   :  XI   A");
outtextxy(290,380,"ROLL NO.:  11124");
}
}


	getch();
closegraph();
}


void show_all()
{
clrscr();

int z=0,n=12;
back(n);
for(int i=0;i<20;i++)
	{
	if(st[i].roll!=0)
	z++;
	}

cout<<"\n\n\t\t           ALL STUDENTS RESULT \n\n";
	cout<<"     =====================================================================\n";
	cout<<"      R.No       Name      Phy   Chem   Maths   Eng  Comp   pecent   Grade"<<endl;
	cout<<"     =====================================================================\n";
for(i=0;i<z;i++)
cout<<setw(8)<<st[i].roll<<setw(15)<<st[i].name<<setw(8)<<st[i].p<<setw(6)<<st[i].c<<setw(7)<<st[i].m<<setw(7)
		<<st[i].e<<setw(7)<<st[i].cs<<setw(8)<<st[i].per<<setw(5)<<" "<<st[i].grade<<endl;
getch();
closegraph();
return;
}

void fail()
{

int z=0,n=1;
back(n);
for(int i=0;i<20;i++)
	{
	if(st[i].roll!=0)
	z++;
	}
cout<<"\n\n\n";
cout<<setw(46)<<"STUDENT FAIL TABLE \n";
line();
cout<<setw(15)<<"Roll no."<<setw(12)<<"Name"<<setw(15)<<"Percent"<<setw(12)<<"Grade"<<setw(12)<<"Result"<<endl;
line();
for(i=0;i<z;i++)
{
if(st[i].e<33)
cout<<setw(10)<<st[i].roll<<setw(12)<<" "<<st[i].name<<setw(12)<<" "<<st[i].per<<setw(9)<<" "<<st[i].grade<<setw(10)<<" "<<"failed in english"<<endl;
if(st[i].p<33)
cout<<setw(10)<<st[i].roll<<setw(12)<<" "<<st[i].name<<setw(12)<<" "<<st[i].per<<setw(9)<<" "<<st[i].grade<<setw(10)<<" "<<"failed in physcis"<<endl;
if(st[i].m<33)
cout<<setw(10)<<st[i].roll<<setw(12)<<" "<<st[i].name<<setw(12)<<" "<<st[i].per<<setw(9)<<" "<<st[i].grade<<setw(10)<<" "<<"failed in maths"<<endl;
if(st[i].c<33)
cout<<setw(10)<<st[i].roll<<setw(12)<<" "<<st[i].name<<setw(12)<<" "<<st[i].per<<setw(9)<<" "<<st[i].grade<<setw(10)<<" "<<"failed in chemistry"<<endl;
if(st[i].cs<33)
cout<<setw(10)<<st[i].roll<<setw(12)<<" "<<st[i].name<<setw(12)<<" "<<st[i].per<<setw(9)<<" "<<st[i].grade<<setw(10)<<" "<<"failed in computer"<<endl;
}
line();
cout<<endl<<endl;
star();
cout<<setw(43)<<"Finish\n";
star();
getch();
closegraph();
return;
}

void line()
{
for(int i=1;i<41;i++)
cout<<"--";
cout<<"\n";
}

void star()
{
for(int i=1;i<41;i++)
cout<<"**";
cout<<"\n";
}

void sort(int y)
{
student temp;
	for(int i=0;i<y+9;i++)
	{	for(int j=0;j<9+y;j++)
		{
		if(st[j].roll>st[j+1].roll)
			{
			temp=st[j];
			st[j]=st[j+1];
			st[j+1]=temp;
			}
		}
	}
}



void back(int n)
{
int gdriver = DETECT,gmode;
initgraph(&gdriver,&gmode,"C:\\TC\\BGI");
cleardevice();
setbkcolor(n);

}