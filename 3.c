#include <stdio.h>
int main()
{
int N,p,s,q,k,i,dem,Tong,t;
p=s=q=k=i=Tong=0;
printf("Nhap so N duong "); scanf("%d",&N);
int a[N];
for(i=2;i<=N;i++)
{
a[i]=1;
}
for (p=2;p<N;p++)
{
t= N/p;
for (i=2;i<=t;i++)
a[p*i]=0;
}
for(i=2;i<=N;i++)
{
if ((a[i]==1) && (N%i==0))
{ q=q+i;
k++;
}
}
printf("Tong q %d, so uoc%d \n ",q,k);
p=0;
for(i=1;i<=N;i++)
{
if (N%i==0)
{ printf("So p= %d\n",i);
p=p+i;
s++;
}
}
Tong=N+p+s-q-k;
printf("Vay ket qua la %d+%d+%d-%d-%d=%d",N,p,s,q,k,Tong);
}