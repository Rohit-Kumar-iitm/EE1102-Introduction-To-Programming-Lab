//Computing difference between two dates in years, months, weeks, and days.//
#include<stdio.h>
int main()
{
    int d1,m1,y1,d2,m2,y2,d_diff,m_diff,y_diff,w,d_diff_new;             //d=day, m=month, y=year, w=week//
    printf("Please enter the dates such that Date 1 is smaller than Date 2\n");
    printf("Please enter two valid dates(in DD/MM/YYYY format,including the slash(type with /) also),\nDate 1: ");
    scanf("%d/%d/%d",&d1,&m1,&y1);
    printf("Date 2: ");
    scanf("%d/%d/%d",&d2,&m2,&y2);
    printf("The Entered dates are: \nDate 1: %02d/%02d/%04d\nDate 2: %02d/%02d/%04d",d1,m1,y1,d2,m2,y2);
    
    if(d2 < d1)
    {      
        if (m2 == 3)
        {
            d2 = d2 + 28;  
        }
        else if((m2==5) || (m2==7) || (m2==10) || (m2==12)) 
        {
            d2 = d2 + 30; 
        }
        else
        {
            d2 = d2 + 31;
        }
            m2 = m2-1;
    }
    
    if(m2 < m1)
    {
        m2 = m2 + 12;
        y2 = y2 - 1;
    }       
    d_diff = d2 - d1;
    m_diff = m2 - m1;
    y_diff = y2 - y1;
    w = (d_diff)/7;
    d_diff_new = d_diff - (7*w);       
    printf("\nDifference : %02d years,%02d months,%02d weeks,%02d days.", y_diff, m_diff, w, d_diff_new);
    return 0;
}
