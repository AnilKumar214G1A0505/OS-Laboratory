#include<stdio.h>
void main()
{
int buffer[10],buffsize,in,out,choice,producer,consumer;
in=0,out=0;
buffsize=10;
choice=0;
while(choice!=3){
printf("1.Producer\t 2.consumer\t 3.exit\n");
printf("enter the choice");
scanf("%d",&choice);
switch(choice){
case 1: if((in+1)%buffsize==out)
	printf("buffer is full");
	else
	{
	printf("Enter the value");
	scanf("%d",&producer);
	buffer[in]=producer;
	in=(in+1)%buffsize;
	}
	break;
case 2: if(in==out)
	printf("Buffer is empty");
	else{
	consumer=buffer[out];
	printf("the consumer is %d",consumer);
	out=(out+1)%buffsize;
	}
	break;
}
}
}
