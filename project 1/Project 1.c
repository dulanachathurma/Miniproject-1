
#include <stdio.h>
int main(){
int salary,payment,worked,absent,EPF,ETF,allsalary, allpayment,npay,net;
    printf("basic salary:");
    scanf("%d",&salary);
    printf("daily payment:");
    scanf("%d",&payment);
    printf("daily worked:");
    scanf("%d",&worked);
    printf("absent days:");
    scanf("%d",&absent);

    allpayment=worked*payment;
    allsalary=salary+allpayment;
    npay= absent*salary*25/100;
    ETF=(salary*3/100);
    EPF=(salary*8/100);
    net =allsalary-(ETF+EPF+npay);

    printf("total payment is %d", allpayment);
    printf("\ntotal salary is %d",allsalary);
    printf("\nno pay is %d",npay);
    printf("\nETF is %d",ETF);
    printf("\nEPF is %d",EPF);
    printf("\nnet salary is %d",net);
return 0;;
}





