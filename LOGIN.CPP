#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<graphics.h>
#include<process.h>
#include<dos.h>
#include<fstream.h>
void Intro2()
{
clrscr();
  int gdriver = DETECT,gmode;
  initgraph(&gdriver,&gmode,"C:\\Turboc3\\BGI");
  setcolor(LIGHTBLUE);
  for(int c=0;c<600;c++)
 {
    delay(3);
    line(0,c,100,c);
    if(c==50)
     {    setcolor(GREEN);
	  settextstyle(1,HORIZ_DIR,5);
	  outtextxy(105,55,"Welcome to PSA");
	  setcolor(LIGHTBLUE);
     }
    if(c==225)
     {   setcolor(LIGHTBLUE);
	 settextstyle(10,HORIZ_DIR,3);
	 outtextxy(105,200,"Police Station Adviser");
	 setcolor(LIGHTBLUE);
     }
    if(c==380)
     {	setcolor(GREEN);
	settextstyle(5,HORIZ_DIR,4);
       /*	outtextxy(105,310,"Created By:-");*/
	setcolor(LIGHTBLUE);
     }
 }
   for( c=0;c<600;c++)
 {  	setcolor(RED);
	delay(1);
    line(0,c,100,c);
   // if(c%25==0)
     //c=c+25 ;
    }
      setcolor(YELLOW);
  settextstyle(4,VERT_DIR,4);
  outtextxy(24,130,"PSA");
     setcolor(RED);
     settextstyle(5,HORIZ_DIR,1);
     /*outtextxy(105,350,"");*/
  delay(10);
    for(c=0;c<=538;c++)
    {  delay(1);
      line(100+c,1,100+c,25);   }
   for(c=0;c<=450;c++)
   {   delay(1);
       line(614,25+c,638,25+c);}

getch();
cleardevice();
closegraph();
}
void box()
	{
       /*	clrscr(); */

	int i=0,j=0;
		gotoxy(2,1);cout<<"É";
		gotoxy(79,1);cout<<"»";
		gotoxy(2,25);cout<<"È";
		gotoxy(79,25);cout<<"¼";
		for(i=3;i<=78;i++)
		{
			gotoxy(i,1);
			cout<<"Í";
		}
		for(i=3;i<=78;i++)
		{
			gotoxy(i,25);
			cout<<"Í";
		}
		for(j=2;j<=24;j++)
		{
			gotoxy(2,j);
			cout<<"º";
		}
		for(j=2;j<=24;j++)
		{
			gotoxy(79,j);
			cout<<"º";

		}

	}
void bye()
     {
	  int gdriver = DETECT, gmode, errorcode;
	initgraph(&gdriver, &gmode, "C:\\Turboc3\\BGI");

	  cleardevice();
	  setcolor(12);
	  settextstyle(1,0,5);
	  setbkcolor(BLUE);
	  outtextxy(70,150,"THANKS FOR VISITING");
	  setcolor(10);
	  settextstyle(1,0,8);
	  outtextxy(100,250,"PROJECT");
	  settextstyle(1,0,3);
	  outtextxy(150,450,"SHUTTING DOWN.. . .");
	  getch();
	  setcolor(12);
	  settextstyle(1,0,5);
	  outtextxy(70,150,"THANKS FOR VISITING");
	  setcolor(10);
	  settextstyle(1,0,8);
	  outtextxy(100,250,"PROJECT");
	  settextstyle(1,0,3);
	  outtextxy(150,450,"SHUTTING DOWN.. . .");

	  for(int i=0;i<=10;i++)
	  {
	       sound(1000*i);
	       setbkcolor(i);
	       nosound();
	  }
     closegraph();
     }


void policedetails()
{
	textcolor(YELLOW);
	clrscr();
	box();
	char policestation[20],address[40],post[10],custoff[10];
	gotoxy(10,2);
	cout<<"****************** Police station Details ***************"<<endl;
	gotoxy(4,4);
	cout<<"Police station- "<<endl;
	gotoxy(4,5);
	gets(policestation);
	gotoxy(4,7);
	cout<<"Address -"<<endl;
	gotoxy(4,8);
	gets(address);
	gotoxy(4,10);
	cout<<"Post -"<<endl;
	gotoxy(4,11);
	gets(post);
	gotoxy(4,13);
	cout<<"Custody officer- "<<endl;
	gotoxy(4,14);
	gets(custoff);
	gotoxy(4,15);
	cout<<"Press enter to submit"<<endl;
	ofstream det("policesdet.txt", ios::app);
	det<<policestation<<' '<<address<<' '<<post<<' '<<custoff<<endl;
	getch();
	clrscr();
	box();
	gotoxy(4,4);
	cout<<"Police station- "<<policestation<<endl;
	gotoxy(4,6);
	cout<<"Address- "<<address<<endl;
	gotoxy(4,8);
	cout<<"Post- "<<post<<endl;
	gotoxy(4,10);
	cout<<"Custody officer- "<<custoff<<endl;
	gotoxy(4,12);
	cout<<"**************************************"<<endl;
	gotoxy(4,14);
	cout<<"Scan OR Upload your document"<<endl;
	gotoxy(4,16);
	getch();
}
/*void uplod()
{
       textbackground(YELLOW);
	clrscr();
	box();
	gotoxy(10,2);
	cout<<"*************** Upload *****************"<<endl;
	gotoxy(4,4);
	cout<<"1. Scan your document"<<endl;
	gotoxy(4,6);
	cout<<"2. Upload the doucment"<<endl;
	gotoxy(4,7);

	getch();
	bye();
} */

void instruction()
{
	textbackground(YELLOW);
	clrscr();
	box();
	char inst[300];
	gotoxy(10,2);
	cout<<"***************** CLIENT INSTRUCTION ********************"<<endl;
	cout<<endl;
	gotoxy(4,4);
	cout<<"Notes...."<<endl;
	gotoxy(4,6);
	gets(inst);
	ofstream ist("instruction.txt", ios::app);
	ist<<inst<<endl;
	gotoxy(4,7);
	getch();
	bye();


}

void offences()
{
	textbackground(YELLOW);
	clrscr();
	box();
	char ft[3],ft1[3],ft2[3],fot[200];
	gotoxy(10,2);
	cout<<"******************** OFFENCES *************************"<<endl;
	gotoxy(10,3);
	cout<<"YES               OR              NO"<<endl;
	gotoxy(4,4);
	cout<<"Immigration"<<endl;
	gotoxy(4,5);
	gets(ft);
	gotoxy(4,7);
	cout<<endl;
	gotoxy(4,8);
	cout<<"Domestic violence"<<endl;
	gotoxy(4,9);
	gets(ft1);
	gotoxy(4,10);
	cout<<endl;
	gotoxy(4,11);
	cout<<"Assault battery"<<endl;
	gotoxy(4,12);
	gets(ft2);
	gotoxy(4,13);
	cout<<endl;
	gotoxy(4,14);
	cout<<"other....(PLEASE STATE)"<<endl;
	gotoxy(4,15);
	gets(fot);
	gotoxy(4,16);
	getch();

	instruction();

}

void proce()
{
	textbackground(YELLOW);
	clrscr();
	box();
	int choice1;
	gotoxy(10,2);
	cout<<" *********************** PROCEDURES ***********************\n";
	gotoxy(4,4);
	cout<<"1. Detention at the police station"<<endl;
	gotoxy(4,6);
	cout<<"2. Procedures within the police station"<<endl;
	gotoxy(4,8);
	cout<<"3. Access of leagal aid funds"<<endl;
	gotoxy(4,10);
	cout<<"4. Bail application form"<<endl;
	gotoxy(4,12);
	cout<<"5. Law References"<<endl;
	gotoxy(4,14);
	cout<<"Enter your choice :"<<endl;
	gotoxy(4,15);
	cin>>choice1;
	switch(choice1)
	{
		case 1:
				clrscr();
				box();
				char ev[300],gd[300],pd[300];
				gotoxy(10,2);
				cout<<"*************** Detention at the police station *****************"<<endl;
				gotoxy(4,4);
				cout<<"Evidence of charges-"<<endl;
				gotoxy(4,5);
				gets(ev);
				gotoxy(4,6);
				cout<<endl;
				gotoxy(4,7);
				cout<<"Grounds of detention-"<<endl;
				gotoxy(4,8);
				gets(gd);
				gotoxy(4,9);
				cout<<endl;
				gotoxy(4,10);
				cout<<"Periods of detention-"<<endl;
				gotoxy(4,11);
				gets(pd);
				gotoxy(4,12);
				cout<<endl;


				break;

		case 2:
				clrscr();
				box();
			char d[300],o[300],ti[300],roa[200],dor[300],ab[300];
			gotoxy(10,2);
			cout<<"******************** Procedure *************************"<<endl;
			gotoxy(4,4);
			cout<<"Details about the offence-"<<endl;
			gotoxy(4,5);
			gets(d);
			gotoxy(4,6);
			cout<<endl;
			gotoxy(4,7);
			cout<<"Offence-"<<endl;
			gotoxy(4,8);
			gets(o);
			gotoxy(4,9);
			cout<<endl;
			gotoxy(4,10);
			cout<<"Time of suspect arrest-"<<endl;
			gotoxy(4,11);
			gets(ti);
			gotoxy(4,12);
			cout<<endl;
			gotoxy(4,13);
			cout<<"Reason for arrest-"<<endl;
			gotoxy(4,14);
			gets(roa);
			gotoxy(4,15);
			cout<<endl;
			gotoxy(4,16);
			cout<<"Details of rights-"<<endl;
			gotoxy(4,17);
			gets(dor);
			gotoxy(4,18);
			cout<<endl;
			gotoxy(4,19);
			cout<<"Any belongings-"<<endl;
			gotoxy(4,20);
			gets(ab);
			getch();

			break;

		case 3:
			clrscr();
				box();
			gotoxy(10,2);
			cout<<"********* Links for leagal aid portal ********"<<endl;
			gotoxy(4,4);
			cout<<"LAA Online Portal (New user?)- "<<endl;
			gotoxy(4,5);
			cout<<"https://portal.legalservices.gov.uk"<<endl;
			gotoxy(4,7);
			cout<<"Leagal Aid Agency-"<<endl;
			gotoxy(4,8);
			cout<<"https://www.gov.uk/government/organisations/legal-aid-agency"<<endl;


			break;
		 case 4:
			char ms[3],hs[3];
			clrscr();
			box();
			gotoxy(10,2);
			cout<<"********* Bail application form ********"<<endl;
			gotoxy(4,4);
			cout<<"Bail Act 1976-"<<endl;
			gotoxy(4,5);
			cout<<"https://www.legislation.gov.uk/ukpga/1976/63/contents"<<endl;
			gotoxy(4,7);
			cout<<"Further guidance on bail application-"<<endl;
			gotoxy(4,8);
			cout<<"https://assets.publishing.service.gov.uk/government/uploads/system/uploads"<<endl;
			gotoxy(4,9);
			cout<<"/attachment_data/file/880492/Bail-and-refusal-of-bail-by-criminal-courts"<<endl;
			gotoxy(4,10);
			cout<<"-and-police-officers-v5.0-gov-uk.pdf"<<endl;
			gotoxy(4,12);
			cout<<"Does the defendant pose a real risk in respect of any of the exceptions"<<endl;
			gotoxy(4,13);
			cout<<"to the general right to bail?"<<endl;
			gotoxy(4,14);
			cout<<"Yes                  OR                       No"<<endl;
			gotoxy(4,15);
			gets(ms);
			if(strcmp(ms,"yes")==0)
			{
				gotoxy(4,16);
				cout<<"Which Exception?"<<endl;
				gotoxy(4,17);
				cout<<"Will conditions of bail allay the fears identified in the exceptions?"<<endl;
				gotoxy(4,18);
				cout<<"Yes       OR         No"<<endl;
				gotoxy(4,19);
				gets(hs);
				if(strcmp(hs,"yes")==0)
				{
					gotoxy(4,20);
					cout<<"Conditional Bail"<<endl;
				}
				else
				{
					gotoxy(4,20);
					cout<<"Refusal of Bail"<<endl;
				}
			}
			else
			{
				gotoxy(4,16);
				cout<<"The Defendant shall be granted unconditional Bail."<<endl;
			}
			break;

		 case 5:
			//1. Legislation
			//2. Poilice conduct
			//3. Common law cases
			clrscr();
			box();
			gotoxy(10,2);
			cout<<"********* LAW REFERENCES ********"<<endl;
			gotoxy(4,4);
			cout<<"Legislation-"<<endl;
			gotoxy(4,5);
			cout<<"https://www.legislation.gov.uk/"<<endl;
			gotoxy(4,7);
			cout<<"Police procedures and conduct-"<<endl;
			gotoxy(4,8);
			cout<<"https://www.legislation.gov.uk/(Access to legislation eg PACE 1984"<<endl;
			gotoxy(4,9);
			cout<<"https://www.legislation.gov.uk/ukpga/1996/25/section/23"<<endl;
			gotoxy(4,10);
			cout<<"https://www.legislation.gov.uk/uksi/1999/730/schedule/1/made"<<endl;
			gotoxy(4,11);
			cout<<"https://www.gov.uk/guidance/rules-and-practice-directions-2020"<<endl;
			gotoxy(4,13);
			cout<<"Common law cases-"<<endl;
			gotoxy(4,14);
			cout<<"https://libguides.bodleian.ox.ac.uk/c.php?g=423193&p=2889634"<<endl;
			break;

		default:
			cout<<"Sorry, wrong coice !!"<<endl;

	}
	getch();
}


void clientdetails()
{
	loop:
	textbackground(YELLOW);
	clrscr();
	box();
	char firstname[10],lastname[10],phonenum[10];
	int d,m,y,td,tm,ty,a,choice2;
	gotoxy(10,2);
	cout<<"****************** CLIENT DETAILS *****************"<<endl;
	gotoxy(4,4);
	cout<<"First name- ";
	gotoxy(4,5);
	gets(firstname);cout<<endl;
	gotoxy(4,7);
	cout<<"Last name- ";
	gotoxy(4,8);
	gets(lastname);cout<<endl;
	gotoxy(4,10);
	cout<<"Phone number- ";
	gotoxy(4,11);
	gets(phonenum);cout<<endl;
	gotoxy(4,13);
	cout<<"Date of birth (DOB)"<<" - ";cin>>d>>m>>y;cout<<endl;
	gotoxy(4,15);
	cout<<"Enter today's date"<<" - ";cin>>td>>tm>>ty;
	if(d>31 || td>31)
		{
			cout<<"Invalid day"<<endl;
		}
	if(m==1 || tm==1)
		{
			if(d>31 || td>31)
			{
				cout<<"Invalid day"<<endl;
			 }
		}
		else if(m==2 || tm==2)
		{
			if(d>28 || td>28)
			{
				cout<<"Invalid day"<<endl;
			}
		}
		else if(m==3 || tm==3)
		{
			if(d>31 || td>31)
			{
				cout<<"Invalid day"<<endl;
			}
		}
		else if(m==4 || tm==4)
		{
			if(d>30 || td>30)
			{
				cout<<"Invalid day"<<endl;
			}
		}
		else if(m==5 || tm==5)
		{
			if(d>31 || td>31)
			{
				cout<<"Invalid day"<<endl;
			}
		}
		else if(m==6 || tm==6)
		{
			if(d>30 || td>30)
			{
				cout<<"Invalid day"<<endl;
			}
		}
		else if(m==7 || tm==7)
		{
			if(d>31 || td>3)
			{
				cout<<"Invalid day"<<endl;
			}
		}
		else if(m==8 || tm==8)
		{
			if(d>31 || td>31)
			{
				cout<<"Invalid day"<<endl;
			}
		}
		else if(m==9 || tm==9)
		{
			if(d>30 || td>30)
			{
				cout<<"Invalid day"<<endl;
			}
		}
		else if(m==10 || tm==10)
		{
			if(d>31 || td>31)
			{
				cout<<"Invalid day"<<endl;
			}
		}
		else if(m==11 || tm==11)
		{
			if(d>30 || td>30)
			{
				cout<<"Invalid day"<<endl;
			}
		}
		else if(m==12 || tm==12)
		{
			if(d>31 || td>31)
			{
				cout<<"Invalid day"<<endl;
			}
		}
		a=ty-y;
		if(tm<m)
		{
			a--;
		}
		if(a<18)
		{
			gotoxy(4,16);
			cout<<"Under 18 please add appropriate adult details-"<<endl;
			getch();
			clrscr();
			box();
			char fn[50],ln[50],pn[10];
			gotoxy(10,2);
			cout<<"Appropriate adults details "<<endl;
			gotoxy(4,4);
			cout<<"First name- ";
			gotoxy(4,5);
			gets(fn);cout<<endl;
			gotoxy(4,7);
			cout<<"Last name- ";
			gotoxy(4,8);
			gets(ln);cout<<endl;
			gotoxy(4,10);
			cout<<"Phone number- ";
			gotoxy(4,11);
			gets(pn);cout<<endl;
			gotoxy(4,13);
				char ye[3]="yes";
				clrscr();
				box();
				char ent[3];
				gotoxy(4,2);
				cout<<"Do you need help with mobility/hearing/speaking? "<<endl;
				gotoxy(4,4);
				cout<<"YES      OR       NO"<<endl;
				gotoxy(4,6);
				gets(ent);
				if(strcmp(ent,ye)==0)
				{
					loop2:
					proce();
					proce();
					proce();
					proce();
					proce();
					textbackground(YELLOW);
					clrscr();
					box();
					char et[3],et1[3],et2[3],ot[200];
					gotoxy(10,2);
					cout<<"Do you have suffered or have suffered from any of the following conditions? "<<endl;
					gotoxy(4,5);
					cout<<"Stroke?"<<endl;
					gotoxy(4,6);
					gets(et);
					gotoxy(4,7);
					cout<<endl;
					gotoxy(4,8);
					cout<<"Heart disease?"<<endl;
					gotoxy(4,9);
					gets(et1);
					gotoxy(4,10);
					cout<<endl;
					gotoxy(4,11);
					cout<<"Cancer?"<<endl;
					gotoxy(4,12);
					gets(et2);
					gotoxy(4,13);
					cout<<endl;
					gotoxy(4,14);
					cout<<"other....(PLEASE STATE)"<<endl;
					gotoxy(4,15);
					gets(ot);
					gotoxy(4,16);
					getch();

					offences();

				}
				else
				{
					goto loop2;
				}

		}
		else
		{
			clrscr();
			box();
				char ent[3],ey[3]="YES";
				gotoxy(10,2);
				cout<<"Do you need help with mobility/hearing/speaking? "<<endl;
				gotoxy(4,5);
				cout<<"YES     OR       NO"<<endl;
				gotoxy(4,6);
				gets(ent);
				if(strcmp(ent,ey)==0)
				{
					loop1:
					proce();
					proce();
					proce();
					proce();
					proce();
					textbackground(YELLOW);
					clrscr();
					box();
					char et[3],et1[3],et2[3],ot[200];
					gotoxy(4,4);
					cout<<"Do you have suffered or have suffered from any of the following conditions? "<<endl;
					gotoxy(4,5);
					cout<<"Stroke?"<<endl;
					gotoxy(4,6);
					gets(et);
					gotoxy(4,7);
					cout<<endl;
					gotoxy(4,8);
					cout<<"Heart disease?"<<endl;
					gotoxy(4,9);
					gets(et1);
					gotoxy(4,10);
					cout<<endl;
					gotoxy(4,11);
					cout<<"Cancer?"<<endl;
					gotoxy(4,12);
					gets(et2);
					gotoxy(4,13);
					cout<<endl;
					gotoxy(4,14);
					cout<<"other....(PLEASE STATE)"<<endl;
					gotoxy(4,15);
					gets(ot);
					getch();

					offences();

				}
				else
				{
					goto loop1;
				}
		}
	getch();
}
void login()
{
	textbackground(YELLOW);
	top:
	clrscr();
	box();
	char user[10]="admin",pass[4]="pass",username[10],password[4];
	gotoxy(10,2);
	cout<<"********************** LOGIN ***************************"<<endl;
	gotoxy(4,4);
	cout<<"Enter username : ";
	gotoxy(4,6);
	gets(username);
	gotoxy(4,8);
	cout<<"Enter password :";
	int c=0;
	gotoxy(4,10);
	while(c<4)
	{
		password[c]=getch();
		cout<<"*";
		c++;
	}
	if(strcmp(username,user)==0)
	{
		if(strcmp(password,pass)==0)
		{
			gotoxy(4,12);
			cout<<"\nLogin Successfull";
			policedetails();
			clientdetails();
		}
		else
		{
			gotoxy(4,12);
			cout<<"\nIncorrect Password";
			getch();
			goto top;
		}
	}
	else
	{
		gotoxy(4,12);
		cout<<"\nIncorrect username";
		getch();
		goto top;
	}
	getch();

}
void registr()
{
	textbackground(YELLOW);
	clrscr();
	box();
	char reguser[10],regpass[4];
	char email[20];
	gotoxy(10,2);
	cout<<"**************** Registration ************************"<<endl;
	gotoxy(4,4);
	cout<<"Enter the username :"<<endl;
	gotoxy(4,5);
	gets(reguser);
	gotoxy(4,6);
	cout<<"Enter the email address :"<<endl;
	gotoxy(4,7);
	gets(email);
	gotoxy(4,8);
	cout<<"Enter password :"<<endl;
	gotoxy(4,9);
	gets(regpass);

	ofstream reg("database.txt", ios::app);
	reg<<reguser<<' '<<email<<' '<<regpass<<endl;
	gotoxy(4,10);
	cout<<"Registration is successfull"<<endl;
	getch();
	login();

}
void main()
{
	textbackground(YELLOW);
	clrscr();
	Intro2();
	box();
	int choice;
	gotoxy(10,2);
	cout<<" *********************** LOGIN ***********************\n";
	gotoxy(4,4);
	cout<<"1. Login"<<endl;
	gotoxy(4,6);
	cout<<"2.Register"<<endl;
	gotoxy(4,8);
	cout<<"3. Exit"<<endl;
	gotoxy(4,10);
	cout<<"Enter your choice :"<<endl;
	gotoxy(4,11);
	cin>>choice;
	switch(choice)
	{
		case 1:
			login();
				break;

		case 2:
			registr();
			break;

		case 3:
			bye();

		default:
			cout<<"Sorry, wrong coice !!"<<endl;

	}



}

