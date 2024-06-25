#include<stdio.h>

int main()
{
int s[10],c=0,a=0,n,o;
while(1)
{
printf ("Enter any one \n1:Enter student grades \n2: Calculate class avg. \n3:Find Highest and Lowest scores \n4: Count No of Passed/Failed \n5: Exit");
scanf("%i",&o);
if(o==1)
{
    printf ("\nEnter no. of students:");
    scanf("%i",&n) ;
    if (n>0)
    {
        for(int i=0;i<n;i++)
        {
            printf("Grade of %i students :",i);
            scanf("%i",&s[i]);
            
            if(s[i]<0 && s[i]>100)
            {
            printf("Plz enter valid grades");
            }

        }  
    }
    else
    {
        printf("No. of students must be in positive integers");
    }
}
else if(o==2)
{

    for (int i = 0; i < n; i++)
    {
        c=c+s[i];
    }
    a=c/n;
    printf("Class avg. : %i",a);
    
}
else if(o==3)
{
    int max=0;
    for (int i = 0; i < n; i++)
    {
        if(max<s[i])
        max=s[i];
    }
    printf("Highest score is %i",max);

    int min=s[0];
    for (int i=0;i<n;i++)
    { 
    if(min>s[i])
    min=s[i];
    }
    printf("Lowest score is %i", min);
    
}
else if (o==4)
{
    int p=0,f=0;
    for (int i=0;i<n;i++)
    {
        if(s[i]>33)
        {
            p++;
        }
        else
        {
            f++;
        }
    }
    printf("No. of student PASSED is %i", p);
    printf("No. of student FAILED is %i" , f);
}
else
{ 
    printf("EXITED");
    break;
}
}

}