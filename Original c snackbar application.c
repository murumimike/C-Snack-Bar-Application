/* point of sale item
snack bar
created by Michael
on 15th july 2022*/

#include <stdio.h>


 int main()
 {

int item, qty;
float price,total,vat,paid,change;
printf("enter item number:");

scanf("%d","$");
printf("Enter quantity:");
scanf("d",qty);
if(item==1)
{
   price=90;
}
else if(item==2)
{
    price=300;
}
else if(item==3)
{
    price=150;
}
else if(item==4)
{
   price=150;
}
else if(item==5)
{
    price=70;
}
else if(item==6)
{
    price=40;
}
else
{
printf("invalid item\n");
}
total = qty*price;
vat = total= 0.16;
 }


