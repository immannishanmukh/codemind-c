#include<stdio.h>
int main()
{
    int units;
	float sc=0.15,bill,ta,suc;
	scanf("%d",&units);
	if(units<=199)
    {
        bill= units*1.20;
        ta=bill;
	    printf("Units Consumed: %d
",units);
	    printf("Cost per Unit: 1.20
");
	    printf("Bill: %.2f
",bill);
	    printf("Surcharge: 0.00
");
	    printf("Total Amount: %.2f
",ta);
    }
	else if(units>=200&&units<400)
	{
    	 bill= units*1.40;
    	 ta=bill;
	     printf("Units Consumed: %d
",units);
	     printf("Cost per Unit: 1.40
");
	     printf("Bill: %.2f
",bill);
	     printf("Surcharge: 0.00
");
         printf("Total Amount: %.2f
",ta);
    }
    else if(units>=400 && units<600)
    {
	    bill = units*1.60;
        suc=bill*sc;
        ta=bill+suc;
        printf("Units Consumed: %d
",units);
	    printf("Cost per Unit: 1.60
");
	    printf("Bill: %.2f
",bill);
	    printf("Surcharge: %.2f
",suc);
	    printf("Total Amount: %.2f
",ta);
	}
	else if(units>=600 && units<800)
   {
       bill = units*1.80;
       suc=bill*sc;
       ta=bill+suc;
       printf("Units Consumed: %d
",units);
       printf("Cost per Unit: 1.80
");
       printf("Bill: %.2f
",bill);
       printf("Surcharge: %.2f
",suc);
       printf("Total Amount: %.2f
",ta);
	}
	else 
	{
	    bill = units*2.00;
	    suc=bill*sc;
	    ta=bill+suc;
	    printf("Units Consumed: %d
",units);
        printf("Cost per Unit: 2.00
");
        printf("Bill: %.2f
",bill);
        printf("Surcharge: %.2f
",suc);
	    printf("Total Amount: %.2f
",ta);
    }
}