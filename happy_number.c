#include <stdio.h> 
int isHappyNumber(int num){    
    int rem = 0, sum = 0;    
    while(num > 0){    
        rem = num%10;    
        sum = sum + (rem*rem);    
        num = num/10;    
    }    
    return sum;    
}     
int main()    
{    
    int num;
    scanf("%d",&num);
    int result = num;    
    while(result != 1 && result != 4)
	{    
        result = isHappyNumber(result);    
    }
    if(result == 1)    
        printf("True");      
    else if(result == 4)    
        printf("False");     
     return 0;    
}    