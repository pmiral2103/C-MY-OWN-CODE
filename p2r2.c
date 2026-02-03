#include<stdio.h>
#include<string.h>

int i=0;

struct library
{
int bookid;
char title[30];
char author[50];
int flag;
};

struct library b[100];

void bookavaible(char bookname[50])
{
for(int j=0;j<i;j++)
{
if(strcmp(bookname,b[j].title)==0)
{
if(b[j].flag==1)
{
printf("book isued sucessfully\n");
b[j].flag=0;
break;
}
}
else
{
printf("book is not avaible\n");
}
}
}

void bookreturn(char bookname[50])
{
for(int j=0;j<i;j++)
{
if(strcmp(bookname,b[j].title)==0)
{
b[j].flag=1;
printf("successfully\n");
break;
}
}
}


int main()
{

printf("1 for adding new book in library\n2 for issuing a book to a student \n3 for returing issued book \n4 for displaying book list in the library\n0 for exit\n");
int n;
char bookname[50];

while(1)
{
printf("ENTER CHOICE:");
scanf("%d",&n);

switch(n)
{
case 1:
       printf("enter book name:");
       scanf("%s",b[i].title);
       fflush(stdin);
       printf("enter author name:");
       scanf("%s",b[i].author);
       fflush(stdin);
       b[i].flag=1;
       i++;
       break;
case 2:printf("enter bookname:");
       scanf("%s",bookname);
        fflush(stdin);
        bookavaible(bookname);
        break;
case 3:printf("enter bookname:");
       scanf("%s",bookname);
       bookreturn(bookname);
       i--;
       break;
case 4:printf("total books:%d",i);
       break;
case 0:return 1;
}
}

return 0;
}
