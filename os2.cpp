#include<stdio.h>
#include<conio.h>
int main()
{
int m=0,O[10],z=0,v=0,ins[5],i,avail[5],allocated[10][5],need[10][5],MAX[10][5],pno,P[10],j,rz, count=0;
printf("\n Enter the number of resources in the problem");
scanf("%d", &rz);
printf("\n enter the max instances of each resources in the probem ");
for(i=0;i<rz;i++)
{  avail[i]=0;
printf("%c= ",(i+97));
scanf("%d",&ins[i]);
}
printf("\n Enter the number of processes : ");
scanf("%d", &pno);
printf("\n Enter the allocation matrix \n     ");

for(i=0;i<rz;i++)
printf(" %c",(i+97));
printf("\n");
for(i=0;i <pno;i++)
{           P[i]=i;
printf("P[%d]  ",P[i]);
for(j=0;j<rz;j++)
{
scanf("%d",&allocated[i][j]);
avail[j]+=allocated[i][j];
}
}

printf("\nEnter the MAX matrix \n     ");
for(i=0;i<rz;i++)
{          printf(" %c",(i+97));
avail[i]=ins[i]-avail[i];
}

printf("\n");
for(i=0;i <pno;i++)
{
printf("P[%d]  ",i);
 for(j=0;j<rz;j++)
 scanf("%d", &MAX[i][j]);
}
printf("safe sequence is ");
int h=0;
while(h<5)
{
	printf("<");
	printf("p [%d]",h);
	printf(">");
	h++;
	
}

printf("\n");
A: z=-1;
for(i=0;i <pno;i++)
{ count=0; v=P[i];
 for(j=0;j<rz;j++)
 {
 need[v][j] = MAX[v][j]-allocated[v][j];
 if(need[v][j]<=avail[j])
 count++;
 }
if(count==rz)
{
O[m++]=P[i];
 for(j=0;j<rz;j++)
avail[j]+=allocated[v][j];
}
else
 P[++z]=P[i];
}



if(z!=-1)
{ pno=z+1;
goto A;
}
printf("\t <");
for(i=0;i<m;i++)
printf(" P[%d] ",O[i]);
printf(">");



getch();
}
