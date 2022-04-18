

#include <stdio.h>
#include <string.h>  
void main()
{  
   int custid, conu;
   float chg, gramt,netamt;
   char connm[25];

   printf("Input Customer ID :");
   scanf("%d",&custid);
   printf("Input the name of the customer :");
   scanf("%s",connm);
   printf("Input the unit consumed by the customer : ");
   scanf("%d",&conu);
   
   if (conu <50 )
	chg = 0.50;
   else	if (conu>=50 && conu<100)
		chg = 1.50;
		else
			chg = 2.50;
   gramt = conu*chg;
   
   printf("\nElectricity Bill\n");
   printf("Customer IDNO                       :%d\n",custid);
   printf("Customer Name                       :%s\n",connm);
   printf("unit Consumed                       :%d\n",conu);
   printf("Amount Charges @Rs. %4.2f  per unit :%8.2f\n",chg,gramt);
   }