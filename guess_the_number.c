#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
srand(time(NULL));
int num ,flag=0;
int x= rand()%10+1;
printf("Guess the number between 1 to 10\nYou have three chances\n");
for(int i=1;i<=3;i++){
printf("Enter your number:\n");
scanf("%d",&num);
if(x==num){
printf("You won\n");
flag=1;
break;
}
else if(x<num){
printf("Wrong number\nThe number is smaller than your number\n");
}
else if(x>num){
printf("Wrong number \nThe number is greater then your number \n");
}
}
if(!flag){
printf("You lost the game the number is %d",x);
}
return 0;
}