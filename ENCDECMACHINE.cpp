#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<dos.h>
#include<string.h>
#include<stdlib.h>

class encryption
{
public:
caesarcipheren()
{
char code[50];
int key;
int i;
printf("\nPlease enter the plain text (lowercase and without space) : ");
scanf("%s",&code);
printf("\nPlease enter a key : ");
scanf("%d",&key);
for(i=0;i<strlen(code);i++)
{
code[i]=code[i]-97;
code[i]=(code[i]+key)%26;
code[i]=code[i]+97;
}
cout<<" "<<endl;
printf("\nENCRYPTED text is : %s",code);
}

polyalphacipheren()
{
char code[50];
char key[50];
int i,j=0;
printf("\nPlease enter the plain text (lowercase and without space) : ");
scanf("%s",&code);
printf("\nPlease enter character key of %d length : ",strlen(code));
scanf("%s",&key);
for(i=0;i<strlen(code);i++)
{
code[i]=code[i]+(key[j]-97);
j++;
if(j==strlen(key))
{
j=0;
}
}
cout<<" "<<endl;
printf("\nENCRYPTED text is : %s",code);
}
};

class decryption
{
public:
caesarcipherde()
 {
char code[50];
int key;
int i;
printf("\nPlease enter the cipher text (lowercase and without space) : ");
scanf("%s",&code);
printf("\nPlease enter a key (Between 1 to 700) : ");
scanf("%d",&key);
for(i=0;i<strlen(code);i++)
{
code[i]=code[i]-97;
code[i]=(780+code[i]-key)%26;
code[i]=code[i]+97;
}
cout<<" "<<endl;
printf("DECRYPTED text is : %s",code);
}
polyalphacipherde()
 {
char code[50];
char key[50];
int i,j=0;
printf("\nPlease enter the cipher text (lowercase and without space) : ");
scanf("%s",&code);
printf("\nPlease enter numeric key of %d length : ",strlen(code));
scanf("%s",&key);
for(i=0;i<strlen(code);i++)
{
code[i]=code[i]-(key[j]-97);
j++;
if(j==strlen(key))
{
j=0;
}

}
cout<<" "<<endl;
printf("\nDECRYPTED text is : %s",code);

 }
 };
void main()
{
encryption obj1;
decryption obj2;
int funchoice,cipchoice;
again:
clrscr();
printf("\nWelcome to ENCRYPTION AND DECRYPTION MACHINE");
printf("\nPrepared by : ");
printf("\nDivyam Dhadwal [186]");
printf("\nDivyank Vijay  [149]");
printf("\nBhanu Sankhyan [132]");
printf("\nCLASS : CSE - C");
printf("\n----------------------------------------------");
printf("\n----------------------------------------------");
printf("\nPlease choose a function among following : ");
printf("\n1.ENCRYPTION 2.DECRYPTION 3.Exit");
printf("\nYour choice : ");
scanf("%d",&funchoice);
if(funchoice==1)
 {
 clrscr();
 restarten:
printf("\nENCRYPTION AND DECRYPTION MACHINE                           Menu : 1-(A)");
printf("\nPrepared by : ");
printf("\nDivyam Dhadwal [186]");
printf("\nDivyank Vijay  [149]");
printf("\nBhanu Sankhyan [132]");
printf("\nCLASS : CSE - C");
printf("\n-------------------------------------------------------------------------");
printf("\n-------------------------------------------------------------------------");
 printf("\nWelcome to ENCYPTION");
 printf("\nPlease choose a cipher : 1.Caesar Cipher 2.POLYalphabetic Cipher 3.Exit");
 printf("\nYour choice : ");
 scanf("%d",&cipchoice);

  if(cipchoice==1)
  {
  obj1.caesarcipheren();
  cout<<" "<<endl;
  cout<<"\nProgram will return in 10 seconds";
  delay(600);
  cout<<".";
  delay(600);
  cout<<".";
  delay(600);
  cout<<".";
  delay(600);
  cout<<".";
  delay(600);
  goto again;
  }
 else if(cipchoice==2)
  {
  obj1.polyalphacipheren();
  cout<<" "<<endl;
  cout<<"\nProgram will return in 10 seconds";
  delay(600);
  cout<<".";
  delay(600);
  cout<<".";
  delay(600);
  cout<<".";
  delay(600);
  cout<<".";
  delay(600);
  goto again;
  }
  else if(cipchoice==3)
  {
  exit(0);
  }
  else
  {
  printf("\nWrong choice entered");
  cout<<"\nProgram will return in 10 seconds";
  cout<<" "<<endl;
  delay(600);
  cout<<".";
  delay(600);
  cout<<".";
  delay(600);
  cout<<".";
  delay(600);
  cout<<".";
  delay(600);
  clrscr();
  goto restarten;
  }

 }

else if(funchoice==2)
 {
 clrscr();
 restartde:
printf("\nENCRYPTION AND DECRYPTION MACHINE                           Menu : 1-(B)");
printf("\nPrepared by : ");
printf("\nDivyam Dhadwal [186]");
printf("\nDivyank Vijay  [149]");
printf("\nBhanu Sankhyan [132]");
printf("\nCLASS : CSE - C");
printf("\n------------------------------------------------------------------------");
printf("\n------------------------------------------------------------------------");
 printf("\nWelcome to DECRYPTION");
 printf("\nPlease choose a cipher : 1.Caesar Cipher 2.POLYalphabetic Cipher 3.Exit");
 printf("\nYour choice : ");
 scanf("%d",&cipchoice);
 if(cipchoice==1)
  {
  obj2.caesarcipherde();
  cout<<"\nProgram will return in 10 seconds";
  cout<<" "<<endl;
  delay(600);
  cout<<".";
  delay(600);
  cout<<".";
  delay(600);
  cout<<".";
  delay(600);
  cout<<".";
  delay(600);
  goto again;
  }
 else if(cipchoice==2)
  {
  obj2.polyalphacipherde();
  cout<<"\nProgram will return in 10 seconds";
  cout<<" "<<endl;
  delay(600);
  cout<<".";
  delay(600);
  cout<<".";
  delay(600);
  cout<<".";
  delay(600);
  cout<<".";
  delay(600);
  goto again;
  }
  else if(cipchoice==3)
  {
  exit(0);
  }
  else
  {
  printf("\nWrong choice entered.Program will return in 5 seconds...");
  cout<<"\nProgram will return in 10 seconds";
  delay(600);
  cout<<".";
  delay(600);
  cout<<".";
  delay(600);
  cout<<".";
  delay(600);
  cout<<".";
  delay(600);
  clrscr();
  goto restartde;
  }

 }
else if(funchoice==3)
  {
  exit(0);
  }

else
 {
 printf("\nWrong choice entered.Program will return to main menu in 5 seconds...");
 cout<<"\nProgram will return in 10 seconds";
  delay(600);
  cout<<".";
  delay(600);
  cout<<".";
  delay(600);
  cout<<".";
  delay(600);
  cout<<".";
  delay(600);
 clrscr();
 main();
 }
getch();
}