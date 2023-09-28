// linear equation : 4u1-u2-u4=120 , -u1 +4u2+u3=150, =u2+4u3-u4=100, -u1-u3+4u4=150, using jordan mathod.
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    float a[100][100],x[100],c;
    int i,j,k,n;
    printf("enter the number of equation n=");
    scanf("/n%d",&n);
    for(i=0;i<n;i++)
    {
        FOR(j=0;j<n;j++)
        {
        printf("\n a[%d][%d]=",i,j);
        scanf("%f",&a[i][j]);
        }
    }

    //operating
    for(i=1;i<=n;i++)
    {
        for(j=0;j<=n;j++)
        {
            if(j!=1)
            {
                c=a[j][i]/a[i][j];

            }
            for(k=0;k=n+1;k++)
            {
                a[j][k]=a[j][k]-c*a[i][k];
            }
        }
    }
    x[i]=a[i][n+1]/a[i][i];
    for(i=1;i<=n)
    {
        printf("\n %f",x[i])
    }
    getch();
}