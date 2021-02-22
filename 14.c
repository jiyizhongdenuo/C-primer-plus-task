#include<stdio.h>
#include<string.h>
#define CSIZE 4
char *s_gets(char *st , int n);
struct name{
	char fname[10];
	char lname[20];
};
struct student{
	struct name nam;
	double grade[3];
	double average;
};
void get_grade(struct student *,int n);
void aver(struct student *);

void main(void)
{
	int n, m;
	struct student stu[CSIZE];
	puts("enter the student's name.");
	for(n=0;s_gets(stu[n].nam.fname,10)!=NULL&&n<CSIZE;n++)
	{
		puts("enter the student's lname.");
		s_gets(stu[n].nam.lname,20);
		puts(" enter next student's name.");
	}
	for(m=0;m<CSIZE;m++)
	printf("%s %s\n",stu[n].nam.fname,stu[n].nam.lname);
    get_grade(stu,3);
	aver(stu);
}
void get_grade(struct student nu[],int n)
{   int m,o;
    for(m=0;m<CSIZE;m++)
	{printf(" enter %d scores for %s %s:\n", CSIZE,nu[m].nam.fname,
     nu[m].nam.lname);
     	for(o=0;o<n;o++)
			scanf("%f",nu[m].grade[o]);
	}
void aver(struct student nu[])
	{int n,m;
	double total;
	for(n=0;n<CSIZE;n++)
	{for(m=0;m<3;m++)
	   total+=nu[n].grade[m];
	 nu[n].average=total/3;
	}
	}	
char * s_gets(char * st, int n) 
 {     char * ret_val;   
 char * find;         
 ret_val = fgets(st, n, stdin);   
 if (ret_val)     
 {	 
   find = strchr(st, '\n');       
   if (find)                  
   *find = '\0';             
   else            
	 while (getchar() != '\n')       
		 continue;        
  }    
	 return ret_val;
} 	
