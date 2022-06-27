//Calculating the tax payable by a person in a financial year//
#include<stdio.h>
int main()
{
    double income,L,it1,it2,it3,it4,it,s,h_ed,total_tax;     //'i'stands for word income,'s'is surcharge,'it'is income tax,'h_ed'is health and education cess//
    printf("Please enter the person's annual income(in Rs): Rs ");
    scanf("%lf",&income);
    L=(income)/(100000.0);               // L is annual income in lakhs//
    if(L>0.0)
    {
    if((L<=2.5)&&(L>0.0))
    {
    it1=0;it2=0;it3=0;it4=0;
    }   
    else if((L>2.5)&&(L<=5.0))
    {
    it1=0;it2=(0.05)*(L-2.5);it3=0;it4=0;
    }
    else if((L>5.0)&&(L<=10.0))
    {
    it1=0;it2=(0.05)*(2.5);it3=(0.2)*(L-5.0);it4=0;
    }
    else if(L>10.0)
    {
    it1=0;it2=(0.05)*(2.5);it3=(0.2)*(5.0);it4=(0.3)*(L-10);
    }
    it=(it1+it2+it3+it4)*(100000.0); //Converting back into Rs.//
    if((L>50.0)&&(L<=100.0))
    s=(0.1)*(it);                    //s=surcharge//
    else if(L>100.0)
    s=(0.15)*(it);
    h_ed=(0.04)*(it+s);
    total_tax= it + s + h_ed;
    printf("If the annual income of the person is Rs %lf then,\nIncome tax = Rs %lf\nSurcharge = Rs %lf\nHealth and Education cess = Rs %lf\nTotal tax = Rs %lf",income,it,s,h_ed,total_tax);
    }
    else
    printf("Please enter a valid income.\n");
    return 0;
}
