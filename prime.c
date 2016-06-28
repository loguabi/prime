 #include<stdio.h>
 #include<conio.h>
 void main()
 {
 int n,i=3,count,c;
 clrscr();
 printf("Enter the number of prime numbers\n");
 scanf("%d",&n);
 if(n>=1)
 {
 printf("First %d prime numbers are:\n");
 printf("2\n");
 }
 for(count=2;count<=n;)
 {
 for(c=2;c<=i-1;c++)
 {
 if(i%c==0)
 break;
 }
 if(c==i)
 {
 printf("%d\n",i);
 count++;
 }
 i++;
 }
 getch();
 }
