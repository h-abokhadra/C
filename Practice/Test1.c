#include<stdio.h>


int main(){
char choice;
int x,sugar=350,jam=250,shampoo=199,bread=50 ,eggs=90,subtotal1=0,subtotal2=0,subtotal3=0,subtotal4=0,subtotal5=0,total;
 char shopping=1; 
printf("WELCOME TO NUST DHABBA");
printf("World's biggest Departmental store\n");

while(shopping)
{
printf("Enter choice\n");
printf("[1] for 1 kg sugar bag\n");
printf("[2] for Jam\n");
printf("[3] for XYZ Shampoo\n");
printf("[4] for Bread\n");
printf("[5] for 1 dozen eggs\n");
printf("[q] to quit shoping\n");
choice=getch();
 
if((choice=='q')||(choice=='Q'))
exit(0);
 
if(choice=='1') {
printf("shopped:1 kg sugar bag=350 rupees\n",sugar);
printf("how many?\n",x);
scanf("%d",&x);
subtotal1=sugar*x;
printf("Sub total:sugar=%d",subtotal1);
getche();
}
 
if(choice=='2'){
printf("Shopped:Jam=250\n",jam);
printf("How many?\n",x);
scanf("%d",&x);
subtotal2=jam*x;
printf("Sub total:Jam=%d",subtotal2);
getch();
}
if(choice=='3') {
 
printf("shopped:XYZ shampoo\n",shampoo);
printf("How many?\n",x);
scanf("%d",&x);
subtotal3=shampoo*x;
printf("Sub total:shampoo=%d",subtotal3);
getch();
}
 
if(choice=='4'){
printf("Shopped:Bread\n",bread);
printf("How many?\n",x);
scanf("%d",&x);
subtotal4=bread*x;
printf("Sub total:Bread=%d",subtotal4);
 
getch();
}
if(choice=='5') {
 
printf("shopped:dozen eggs\n",shampoo);
printf("How many dozens you want?\n",x);
scanf("%d",&x);
subtotal5=eggs*x;
printf("Sub total:eggs=%d",subtotal5);
getch();
}

printf("Do you wish to continue shopping? Y / N");
choice=getch(); 
if((choice != 'Y')
shopping=0;  //break the loop
}
//now we are done with shopping, so show is the subtotal enz
//That part you can make up by yourself
}

